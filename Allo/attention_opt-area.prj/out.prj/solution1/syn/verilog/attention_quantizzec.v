// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module attention_quantizzec_ram (addr0, ce0, d0, we0,  clk);

parameter DWIDTH = 8;
parameter AWIDTH = 11;
parameter MEM_SIZE = 1536;

input[AWIDTH-1:0] addr0;
input ce0;
input[DWIDTH-1:0] d0;
input we0;
input clk;

(* ram_style = "block" *)reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];

initial begin
    $readmemh("./attention_quantizzec_ram.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) begin
        if (we0) 
            ram[addr0] <= d0; 
    end
end


endmodule

`timescale 1 ns / 1 ps
module attention_quantizzec(
    reset,
    clk,
    address0,
    ce0,
    we0,
    d0);

parameter DataWidth = 32'd8;
parameter AddressRange = 32'd1536;
parameter AddressWidth = 32'd11;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
input we0;
input[DataWidth - 1:0] d0;



attention_quantizzec_ram attention_quantizzec_ram_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .we0( we0 ),
    .d0( d0 ));

endmodule

