module vrgather #(
    parameter VLEN = 2048,
    parameter XLEN = 16,
    parameter SEW  = 1, //fp16
    parameter VLMUL = 1,
    parameter VLMAX = VLEN*VLMUL/XLEN
)
(
  input  [VLEN-1:0] index_data, 
  input  [VLEN-1:0] table_data, 
  output [VLEN-1:0] res_data 
);

    wire            [XLEN-1:0]                         index   [VLEN/16-1 : 0];
    wire            [XLEN-1:0]                          lut [VLEN/16-1 : 0];

generate
for (genvar n = 0; n < VLEN/XLEN; n = n + 1) begin
    assign index[n] = index_data[(n+1)*XLEN-1: XLEN*n];
    assign lut[n]   = table_data[(n+1)*XLEN-1: XLEN*n];
    assign res_data[(n+1)*XLEN-1: XLEN*n] = index[n] >= 16'b1111111 ? 'b0 : lut[index[n][8-2:0]];
end
endgenerate

endmodule