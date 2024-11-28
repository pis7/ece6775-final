// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __apply_rotary_pos_g8j_H__
#define __apply_rotary_pos_g8j_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct apply_rotary_pos_g8j_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
  static const unsigned AddressRange = 96;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(apply_rotary_pos_g8j_ram) {
        ram[0] = "0b1110100011000111";
        ram[1] = "0b1111111100110000";
        ram[2] = "0b1111101001110100";
        ram[3] = "0b1110011011111011";
        ram[4] = "0b1100110011110001";
        ram[5] = "0b1011000101111110";
        ram[6] = "0b1001011101001101";
        ram[7] = "0b0111111110100011";
        ram[8] = "0b0110101011101110";
        ram[9] = "0b0101100100100111";
        ram[10] = "0b0100101000001101";
        ram[11] = "0b0011110101101101";
        ram[12] = "0b0011001011011000";
        ram[13] = "0b0010101000001110";
        ram[14] = "0b0010001011000100";
        ram[15] = "0b0001110010111100";
        ram[16] = "0b0001011110111011";
        ram[17] = "0b0001001110010111";
        ram[18] = "0b0001000000101101";
        ram[19] = "0b0000110101011100";
        ram[20] = "0b0000101100000111";
        ram[21] = "0b0000100100011001";
        ram[22] = "0b0000011110000011";
        ram[23] = "0b0000011000110011";
        ram[24] = "0b0000010100011110";
        ram[25] = "0b0000010000111001";
        ram[26] = "0b0000001101111100";
        ram[27] = "0b0000001011100000";
        ram[28] = "0b0000001001100000";
        ram[29] = "0b0000000111110110";
        ram[30] = "0b0000000110011110";
        ram[31] = "0b0000000101010101";
        ram[32] = "0b0000000100011010";
        ram[33] = "0b0000000011101001";
        ram[34] = "0b0000000011000000";
        ram[35] = "0b0000000010011110";
        ram[36] = "0b0000000010000011";
        ram[37] = "0b0000000001101100";
        ram[38] = "0b0000000001011001";
        ram[39] = "0b0000000001001001";
        ram[40] = "0b0000000000111100";
        ram[41] = "0b0000000000110010";
        ram[42] = "0b0000000000101001";
        ram[43] = "0b0000000000100010";
        ram[44] = "0b0000000000011100";
        ram[45] = "0b0000000000010111";
        ram[46] = "0b0000000000010011";
        ram[47] = "0b0000000000001111";
        ram[48] = "0b1110100011000111";
        ram[49] = "0b1111111100110000";
        ram[50] = "0b1111101001110100";
        ram[51] = "0b1110011011111011";
        ram[52] = "0b1100110011110001";
        ram[53] = "0b1011000101111110";
        ram[54] = "0b1001011101001101";
        ram[55] = "0b0111111110100011";
        ram[56] = "0b0110101011101110";
        ram[57] = "0b0101100100100111";
        ram[58] = "0b0100101000001101";
        ram[59] = "0b0011110101101101";
        ram[60] = "0b0011001011011000";
        ram[61] = "0b0010101000001110";
        ram[62] = "0b0010001011000100";
        ram[63] = "0b0001110010111100";
        ram[64] = "0b0001011110111011";
        ram[65] = "0b0001001110010111";
        ram[66] = "0b0001000000101101";
        ram[67] = "0b0000110101011100";
        ram[68] = "0b0000101100000111";
        ram[69] = "0b0000100100011001";
        ram[70] = "0b0000011110000011";
        ram[71] = "0b0000011000110011";
        ram[72] = "0b0000010100011110";
        ram[73] = "0b0000010000111001";
        ram[74] = "0b0000001101111100";
        ram[75] = "0b0000001011100000";
        ram[76] = "0b0000001001100000";
        ram[77] = "0b0000000111110110";
        ram[78] = "0b0000000110011110";
        ram[79] = "0b0000000101010101";
        ram[80] = "0b0000000100011010";
        ram[81] = "0b0000000011101001";
        ram[82] = "0b0000000011000000";
        ram[83] = "0b0000000010011110";
        ram[84] = "0b0000000010000011";
        ram[85] = "0b0000000001101100";
        ram[86] = "0b0000000001011001";
        ram[87] = "0b0000000001001001";
        ram[88] = "0b0000000000111100";
        ram[89] = "0b0000000000110010";
        ram[90] = "0b0000000000101001";
        ram[91] = "0b0000000000100010";
        ram[92] = "0b0000000000011100";
        ram[93] = "0b0000000000010111";
        ram[94] = "0b0000000000010011";
        ram[95] = "0b0000000000001111";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(apply_rotary_pos_g8j) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


apply_rotary_pos_g8j_ram* meminst;


SC_CTOR(apply_rotary_pos_g8j) {
meminst = new apply_rotary_pos_g8j_ram("apply_rotary_pos_g8j_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~apply_rotary_pos_g8j() {
    delete meminst;
}


};//endmodule
#endif
