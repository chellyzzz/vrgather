// src/main/scala/top.scala
package top

import chisel3._
import chisel3.util._
import chisel3.stage._

// import vrgather._
import javax.swing.InputMap
import scala.util.control.Exception.Catch

trait VrgatherParameter {
    val VLEN : Int = 2048
}

// valid only for VLEN = 2048
class top() extends Module with VrgatherParameter {
  val io = IO(new Bundle {
    val vs1 = Input(UInt(VLEN.W))   //index data
    val vs2 = Input(UInt(VLEN.W))   //table data
    val is_vec = Input(Bool())

    val old_vd = Input(UInt(VLEN.W))
    val res_vd = Output(UInt(VLEN.W))

    val sew       = Input(UInt(2.W))
    val mask      = Input(UInt(VLEN.W))
    val vm        = Input(Bool())         // 0: masked, 1: unmasked
    val ta        = Input(Bool())         // 0: undisturbed, 1: agnostic
    val ma        = Input(Bool())         // 0: undisturbed, 1: agnostic

    val vl      = Input(UInt(log2Ceil(VLEN / 8).W))
    val vstart  = Input(UInt(log2Ceil(VLEN / 8).W))
  })

  // latency  = 1
  // only support sew = 0, 1

  val vrg  = Module(new New_VRGather)

  vrg.io.index_data := io.vs1
  vrg.io.table_data := io.vs2
  vrg.io.old_vd     := io.old_vd
  vrg.io.sew        := io.sew
  vrg.io.vl         := io.vl    
  vrg.io.vstart     := io.vstart
  vrg.io.vm         := io.vm    
  vrg.io.mask       := io.mask  
  vrg.io.ta         := io.ta    
  vrg.io.ma         := io.ma    

  io.res_vd := vrg.io.res_vd     

}

class vrg_index extends Bundle with VrgatherParameter {
  val index_e8 = Vec(VLEN / 8,   UInt((VLEN/8 ).W))
  val index_e16 = Vec(VLEN / 16, UInt((VLEN/16).W))
}

class vrg_lut extends Bundle with VrgatherParameter {
  val lut_e8 = Vec(VLEN / 8, UInt(8.W))
  val lut_e16 = Vec(VLEN / 16, UInt(16.W))
}

class vrg_res extends Bundle with VrgatherParameter {
  val res_e8 = Vec(VLEN / 8, UInt(8.W))
  val res_e16 = Vec(VLEN / 16, UInt(16.W))
}

class New_VRGather extends Module with VrgatherParameter{
  val io = IO(new Bundle {
    val index_data  = Input(UInt(VLEN.W))
    val table_data  = Input(UInt(VLEN.W))
    val old_vd      = Input(UInt(VLEN.W))
    val res_vd      = Output(UInt(VLEN.W))
    val sew         = Input(UInt(2.W))
    val vl          = Input(UInt(log2Ceil(VLEN / 8).W))
    val vstart      = Input(UInt(log2Ceil(VLEN / 8).W))
    val vm          = Input(Bool())
    val mask        = Input(UInt(VLEN.W))
    val ta          = Input(Bool())
    val ma          = Input(Bool())
    
  })

    val index = Wire(new vrg_index)
    val lut   = Wire(new vrg_lut)
    val res   = Wire(new vrg_res)

    for (n <- 0 until (VLEN / 8)) {
      lut.lut_e8(n)       := io.table_data((n + 1) * 8 - 1, n * 8)
      index.index_e8(n)   := 1.U << io.index_data((n + 1) * 8 - 1, n * 8) 
    }

    for (n <- 0 until (VLEN / 16)) {
      lut.lut_e16(n)      := io.table_data((n + 1) * 16 - 1, n * 16)
      index.index_e16(n)  := 1.U << io.index_data((n + 1) * 16 - 1, n * 16) 
    }

    
    // control and data path
    for (n <- 0 until (VLEN / 8)) {
      val in_vstart = n.U >= io.vstart
      val in_vl = n.U < io.vl
      val mask_enable = io.vm || io.mask(n)

      val gathered_res_e8 = Mux1H(index.index_e8(n), lut.lut_e8)
      val old_vd_e8 = io.old_vd((n + 1) * 8 - 1, n * 8)

      val mask_result = Mux(mask_enable, gathered_res_e8, Mux(io.ma, Fill(8, 1.U(1.W)), old_vd_e8))

      res.res_e8(n) :=  Mux(in_vstart && in_vl, 
                        mask_result, 
                        Mux(n.U >= io.vl, Mux(io.ta, Fill(8, 1.U(1.W)), old_vd_e8), old_vd_e8))

    }
  
    for (n <- 0 until (VLEN / 16)) {
      val in_vstart = n.U >= io.vstart
      val in_vl = n.U < io.vl
      val mask_enable = io.vm || io.mask(n)
      val do_op = in_vstart && in_vl && mask_enable
      
      val gathered_res_e16 = Mux1H(index.index_e16(n), lut.lut_e16)
      val old_vd_e16 = io.old_vd((n + 1) * 16 - 1, n * 16)

      val mask_result = Mux(mask_enable, gathered_res_e16, Mux(io.ma, Fill(16, 1.U(1.W)), old_vd_e16))

      res.res_e16(n) :=  Mux(in_vstart && in_vl, 
                        mask_result, 
                        Mux(n.U >= io.vl, Mux(io.ta, Fill(16, 1.U(1.W)), old_vd_e16), old_vd_e16))

    }


    val res_reg = RegInit((0.U(VLEN.W)))
    
    res_reg :=  (Fill(VLEN, io.sew === 0.U) & Cat(res.res_e8.reverse)) |
                (Fill(VLEN, io.sew === 1.U) & Cat(res.res_e16.reverse))

    io.res_vd := res_reg

}

object topMain extends App {
  (new ChiselStage).emitVerilog(new top, args)
}
