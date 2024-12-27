// src/main/scala/top.scala
package top

import chisel3._
import chisel3.util._
import chisel3.stage._

// import vrgather._
import javax.swing.InputMap


class top(
  val VLEN: Int = 2048, 
  val XLEN: Int = 64, 
  val VLMUL: Int = 1) 
  extends Module {
  val io = IO(new Bundle {
    val index_data  = Input(Vec(VLEN / XLEN, UInt(XLEN.W))) 
    val table_data  = Input(Vec(VLEN / XLEN, UInt(XLEN.W))) 
    val sew         = Input(UInt(2.W))
    val res_data    = Output(Vec(VLEN / XLEN, UInt(XLEN.W))) 
  })

  val vrgather_e8  = Module(new VRGather_with_sew(SEW = 0))
  val vrgather_e16 = Module(new VRGather_with_sew(SEW = 1))

  val index = Wire(UInt(VLEN.W))
  val lut   = Wire(UInt(VLEN.W))
  index := Cat((0 until VLEN/XLEN ).map(i => io.index_data(i)).reverse)
  lut   := Cat((0 until VLEN/XLEN ).map(i => io.table_data(i)).reverse)

  vrgather_e8.io.index_data := index
  vrgather_e8.io.table_data := lut

  vrgather_e16.io.index_data := index
  vrgather_e16.io.table_data := lut

  val res = Wire(UInt(VLEN.W))
  res := Mux(io.sew === 0.U, vrgather_e8.io.res_data, vrgather_e16.io.res_data)

  for (n <- 0 until (VLEN / XLEN)) {
    io.res_data(n) := res((n + 1) * XLEN - 1, n * XLEN)
  }

}

object topMain extends App {
  (new ChiselStage).emitVerilog(new top, args)
}


trait VParameter {
  val VLEN       : Int = 2048
  val Vlmulmax   : Int = 8
  val Vlmax      : Int = 1024
}

class VRGather_with_sew(
  val SEW: Int = 1
  ) 
  extends Module with VParameter{
  val XLEN = 8 << SEW
  val VLMAX = VLEN / XLEN
  val io = IO(new Bundle {
    val index_data = Input(UInt(VLEN.W))
    val table_data = Input(UInt(VLEN.W))
    val res_data = Output(UInt(VLEN.W))

    // val sew       = Input(UInt(2.W))
    // val vstart    = Input(UInt(7.W))
    // val vl        = Input(UInt(8.W))
    // val vm        = Input(Bool())
    // val ta        = Input(Bool())
    // val ma        = Input(Bool())
  })

    val index = Wire(Vec(VLEN / XLEN, UInt(VLMAX.W)))
    val lut   = Wire(Vec(VLEN / XLEN, UInt(XLEN.W)))

    for (n <- 0 until (VLEN / XLEN)) {
      index(n) := 1.U << io.index_data((n + 1) * XLEN - 1, n * XLEN) 
      lut(n)   := io.table_data((n + 1) * XLEN - 1, n * XLEN)    
    }

    val res = RegInit(VecInit(Seq.fill(VLEN / XLEN)(0.U(XLEN.W))))

    for (n <- 0 until (VLEN / XLEN)) {
      for(m <- 0 until (VLEN / XLEN)){
        res(n) := res(n) | (Fill(XLEN,index(n)) & lut(m))
      }
    }

    io.res_data := Cat((0 until VLEN/XLEN).map(i => res(i)).reverse)

}