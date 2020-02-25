module display_decoder(
    input  wire clk,
   input wire A,
 input wire B,
input wire C,
input wire D,
    output reg a,//1-bit variable register // a, b, c, d, e, f, g are the final outputs.
    output reg b,
    output reg c,
    output reg d,
);

  always @(posedge clk) begin
  
  a=A;
  b=B;
  c=C;
  d=D;
  
       
 end

endmodule