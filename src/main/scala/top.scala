// src/main/scala/top.scala
package top

import chisel3._
import chisel3.util._
import chisel3.stage._

import vrgather._

class top extends Module {
  // val VLEN = 2048
  // val XLEN = 16
  val io = IO(new Bundle {
    val in1 = Input(UInt(2048.W))
    val in2 = Input(UInt(2048.W))
    val out = Output(Vec(2048/16, UInt(16.W)))
  })

  val vrgather = Module(new Vrgather)
  vrgather.io.index_data := io.in1 
  vrgather.io.table_data := io.in2
  // for(i <- 0 until VLEN/XLEN) {
  //   vrgather.io.vs1(i) := i.U(XLEN.W)
  //   vrgather.io.vs2(i) := i.U(XLEN.W)
  // }
  vrgather.io.vl := 0.U
  vrgather.io.vstart := 0.U
  vrgather.io.vm := false.B
  vrgather.io.ta := false.B
  vrgather.io.ma := false.B

  io.out := vrgather.io.res_data
}
object topMain extends App {
  (new ChiselStage).emitVerilog(new top, args)
}