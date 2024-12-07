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

  static const unsigned DataWidth = 21;
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
        ram[0] = "0b100001010100000111111";
        ram[1] = "0b100101010110001010000";
        ram[2] = "0b110111101001010000001";
        ram[3] = "0b001010010101111000011";
        ram[4] = "0b010111011010110101010";
        ram[5] = "0b011110000111101011011";
        ram[6] = "0b011111111111111001011";
        ram[7] = "0b011110111000000010110";
        ram[8] = "0b011100001011100110111";
        ram[9] = "0b011000110110100001000";
        ram[10] = "0b010101011011010011001";
        ram[11] = "0b010010001110001000001";
        ram[12] = "0b001111010101101001001";
        ram[13] = "0b001100110101001110100";
        ram[14] = "0b001010101100000110000";
        ram[15] = "0b001000111000011000000";
        ram[16] = "0b000111010111000011101";
        ram[17] = "0b000110000101110010110";
        ram[18] = "0b000101000010011001110";
        ram[19] = "0b000100001010100101011";
        ram[20] = "0b000011011100001100101";
        ram[21] = "0b000010110101110010101";
        ram[22] = "0b000010010110001011010";
        ram[23] = "0b000001111011111111001";
        ram[24] = "0b000001100110011000010";
        ram[25] = "0b000001010100100000011";
        ram[26] = "0b000001000101110000001";
        ram[27] = "0b000000111001100100100";
        ram[28] = "0b000000101111100010001";
        ram[29] = "0b000000100111001111000";
        ram[30] = "0b000000100000011000011";
        ram[31] = "0b000000011010101101111";
        ram[32] = "0b000000010110000100011";
        ram[33] = "0b000000010010001101100";
        ram[34] = "0b000000001111000001110";
        ram[35] = "0b000000001100011001101";
        ram[36] = "0b000000001010001111100";
        ram[37] = "0b000000001000011100111";
        ram[38] = "0b000000000110111110100";
        ram[39] = "0b000000000101110000011";
        ram[40] = "0b000000000100110000001";
        ram[41] = "0b000000000011111011000";
        ram[42] = "0b000000000011001111001";
        ram[43] = "0b000000000010101011000";
        ram[44] = "0b000000000010001101001";
        ram[45] = "0b000000000001110100100";
        ram[46] = "0b000000000001100000001";
        ram[47] = "0b000000000001001111011";
        ram[48] = "0b100001010100000111111";
        ram[49] = "0b100101010110001010000";
        ram[50] = "0b110111101001010000001";
        ram[51] = "0b001010010101111000011";
        ram[52] = "0b010111011010110101010";
        ram[53] = "0b011110000111101011011";
        ram[54] = "0b011111111111111001011";
        ram[55] = "0b011110111000000010110";
        ram[56] = "0b011100001011100110111";
        ram[57] = "0b011000110110100001000";
        ram[58] = "0b010101011011010011001";
        ram[59] = "0b010010001110001000001";
        ram[60] = "0b001111010101101001001";
        ram[61] = "0b001100110101001110100";
        ram[62] = "0b001010101100000110000";
        ram[63] = "0b001000111000011000000";
        ram[64] = "0b000111010111000011101";
        ram[65] = "0b000110000101110010110";
        ram[66] = "0b000101000010011001110";
        ram[67] = "0b000100001010100101011";
        ram[68] = "0b000011011100001100101";
        ram[69] = "0b000010110101110010101";
        ram[70] = "0b000010010110001011010";
        ram[71] = "0b000001111011111111001";
        ram[72] = "0b000001100110011000010";
        ram[73] = "0b000001010100100000011";
        ram[74] = "0b000001000101110000001";
        ram[75] = "0b000000111001100100100";
        ram[76] = "0b000000101111100010001";
        ram[77] = "0b000000100111001111000";
        ram[78] = "0b000000100000011000011";
        ram[79] = "0b000000011010101101111";
        ram[80] = "0b000000010110000100011";
        ram[81] = "0b000000010010001101100";
        ram[82] = "0b000000001111000001110";
        ram[83] = "0b000000001100011001101";
        ram[84] = "0b000000001010001111100";
        ram[85] = "0b000000001000011100111";
        ram[86] = "0b000000000110111110100";
        ram[87] = "0b000000000101110000011";
        ram[88] = "0b000000000100110000001";
        ram[89] = "0b000000000011111011000";
        ram[90] = "0b000000000011001111001";
        ram[91] = "0b000000000010101011000";
        ram[92] = "0b000000000010001101001";
        ram[93] = "0b000000000001110100100";
        ram[94] = "0b000000000001100000001";
        ram[95] = "0b000000000001001111011";


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


static const unsigned DataWidth = 21;
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
