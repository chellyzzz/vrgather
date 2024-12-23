// src/main/scala/decoder/decoder.scala
package vrgather

import chisel3._
import chisel3.util._
import chisel3.stage._
import javax.swing.InputMap

trait VParameter {
  val VLEN       : Int = 2048
  val XLEN       : Int = 16
  val Vlmulmax   : Int = 8
  val Vlmax      : Int = 1024
}

// valid only for VLEN = 2048
class Vrgather extends Module with VParameter {
  val io = IO(new Bundle {
    val index_data = Input(UInt(VLEN.W))
    val table_data = Input(UInt(VLEN.W))
    val res_data = Output(Vec(VLEN/XLEN, UInt(XLEN.W)))

    // val eew       = Input(UInt(2.W))
    val vstart    = Input(UInt(7.W))
    val vl        = Input(UInt(8.W))
    val vm        = Input(Bool())
    val ta        = Input(Bool())
    val ma        = Input(Bool())
  })

  val index = Wire(Vec(VLEN/XLEN, UInt(Vlmax.W)))
  for(i <- 0 until VLEN/XLEN) {
    index(i) := 1.U << io.index_data(i)
  }

  for(i <- 0 until VLEN/XLEN) {
    io.res_data(i) := io.table_data(index(i))
  }

}