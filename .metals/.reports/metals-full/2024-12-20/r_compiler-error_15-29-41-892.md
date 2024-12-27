file://<WORKSPACE>/src/main/scala/decode/hello.scala
### java.lang.IndexOutOfBoundsException: -1

occurred in the presentation compiler.

presentation compiler configuration:


action parameters:
offset: 500
uri: file://<WORKSPACE>/src/main/scala/decode/hello.scala
text:
```scala
// src/main/scala/decoder/decoder.scala
package vrgather

import chisel3._
import chisel3.util._
import chisel3.stage._

trait VParameter {
  val VLEN       : Int = 2048
  val XLEN       : Int = 64
}

class Vrgather extends Module with VParameter {
  val io = IO(new Bundle {
    val vs1 = Input(Vec(VLEN/XLEN, UInt(XLEN.W)))
    val vs2 = Input(Vec(VLEN/XLEN, UInt(XLEN.W)))
    val eew = Input(UInt(2.W))
    val vl = Input(UInt(32.W))
    val vd = Output(Vec(VLEN/XLEN, UInt(XLEN.W)))
  })

  for(@@)
}
```



#### Error stacktrace:

```
scala.collection.LinearSeqOps.apply(LinearSeq.scala:129)
	scala.collection.LinearSeqOps.apply$(LinearSeq.scala:128)
	scala.collection.immutable.List.apply(List.scala:79)
	dotty.tools.dotc.util.Signatures$.applyCallInfo(Signatures.scala:244)
	dotty.tools.dotc.util.Signatures$.computeSignatureHelp(Signatures.scala:101)
	dotty.tools.dotc.util.Signatures$.signatureHelp(Signatures.scala:88)
	dotty.tools.pc.SignatureHelpProvider$.signatureHelp(SignatureHelpProvider.scala:47)
	dotty.tools.pc.ScalaPresentationCompiler.signatureHelp$$anonfun$1(ScalaPresentationCompiler.scala:422)
```
#### Short summary: 

java.lang.IndexOutOfBoundsException: -1