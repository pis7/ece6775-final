// ----------------------------------------------------------------------
//  HLS HDL:        Verilog Netlister
//  HLS Version:    2024.1_2/1117371 Production Release
//  HLS Date:       Fri Jun 28 23:58:31 PDT 2024
// 
//  Generated by:   dr655@ecelinux-16.ece.cornell.edu
//  Generated date: Thu Nov 28 19:39:39 2024
// ----------------------------------------------------------------------

// 
module dutmgc_rom_33_32_20_1 (addr, data_out
);
  input [4:0]addr ;
  output [19:0]data_out ;


  // Constants for ROM dimensions
  parameter n_width    = 20;
  parameter n_size     = 32;
  parameter n_numports = 1;
  parameter n_addr_w   = 5;
  parameter n_inreg    = 0;
  parameter n_outreg   = 0;

  // Declare storage for memory elements
  reg [19:0] mem [31:0];

  // Declare output registers
  reg [19:0] data_out_t;

  // Initialize ROM contents
  initial begin: rom_init_blk
    mem[0] <= 20'b11110101111110101010;
    mem[1] <= 20'b11111101011111000111;
    mem[2] <= 20'b00000011110011011111;
    mem[3] <= 20'b11111100010011000010;
    mem[4] <= 20'b00110011110001011010;
    mem[5] <= 20'b11101110100010111101;
    mem[6] <= 20'b11101110111100000110;
    mem[7] <= 20'b00010111100010110000;
    mem[8] <= 20'b00001000000001000100;
    mem[9] <= 20'b00000011101100111101;
    mem[10] <= 20'b00000111010101100101;
    mem[11] <= 20'b00000100111101011001;
    mem[12] <= 20'b00000001100000111110;
    mem[13] <= 20'b11100001110001110100;
    mem[14] <= 20'b11111100011000010101;
    mem[15] <= 20'b11110111011000101010;
    mem[16] <= 20'b11011000011011010001;
    mem[17] <= 20'b10110011011011110001;
    mem[18] <= 20'b11111011110000001111;
    mem[19] <= 20'b11110101110011110011;
    mem[20] <= 20'b00010011000101001101;
    mem[21] <= 20'b11010000000001000001;
    mem[22] <= 20'b11111010010111000001;
    mem[23] <= 20'b11011110110011011101;
    mem[24] <= 20'b11111111100011101111;
    mem[25] <= 20'b00001010110111101011;
    mem[26] <= 20'b11111110010101011110;
    mem[27] <= 20'b00000000111010101100;
    mem[28] <= 20'b11011111111101000101;
    mem[29] <= 20'b00010011100111010101;
    mem[30] <= 20'b00111111100001111001;
    mem[31] <= 20'b11111000000011110000;
  end


  // Combinational ROM read block
  always@(*)
  begin
    data_out_t <= mem[addr];
  end

  // Output register assignment
  assign data_out = data_out_t;

endmodule

