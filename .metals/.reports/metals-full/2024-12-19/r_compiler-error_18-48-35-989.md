file://<WORKSPACE>/src/main/scala/decode/hello.scala
### dotty.tools.dotc.ast.Trees$UnAssignedTypeException: type of Ident(data) is not assigned

occurred in the presentation compiler.

presentation compiler configuration:


action parameters:
offset: 330
uri: file://<WORKSPACE>/src/main/scala/decode/hello.scala
text:
```scala
// src/main/scala/decoder/decoder.scala
package filpflop

import chisel3._
import chisel3.util._
import chisel3.stage._

class filpflop extends Module {
  val io = IO(new Bundle {
    val in = Input(UInt(8.W))
    val out = Output(UInt(8.W))
  })

  // val reg = RegInit(0.U(8.W))
  class Channel() extends Bundle {
    val data [@@]
  }
  val reg = RegNext(io.in, 0.U(8.W))

  io.out := reg

}
```



#### Error stacktrace:

```
dotty.tools.dotc.ast.Trees$Tree.tpe(Trees.scala:74)
	dotty.tools.dotc.util.Signatures$.applyCallInfo(Signatures.scala:208)
	dotty.tools.dotc.util.Signatures$.computeSignatureHelp(Signatures.scala:104)
	dotty.tools.dotc.util.Signatures$.signatureHelp(Signatures.scala:88)
	dotty.tools.pc.SignatureHelpProvider$.signatureHelp(SignatureHelpProvider.scala:47)
	dotty.tools.pc.ScalaPresentationCompiler.signatureHelp$$anonfun$1(ScalaPresentationCompiler.scala:422)
```
#### Short summary: 

dotty.tools.dotc.ast.Trees$UnAssignedTypeException: type of Ident(data) is not assigned