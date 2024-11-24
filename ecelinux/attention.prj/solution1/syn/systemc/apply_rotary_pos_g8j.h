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

  static const unsigned DataWidth = 24;
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
        ram[0] = "0b111001010101110111011001";
        ram[1] = "0b111110101110100101001101";
        ram[2] = "0b000011010011111100111011";
        ram[3] = "0b000110111001100001100101";
        ram[4] = "0b001001100101101000111101";
        ram[5] = "0b001011100001111001111101";
        ram[6] = "0b001100111010000001000000";
        ram[7] = "0b001101110111101001000011";
        ram[8] = "0b001110100010011001001001";
        ram[9] = "0b001110111111111001010101";
        ram[10] = "0b001111010100001110010011";
        ram[11] = "0b001111100010000101011101";
        ram[12] = "0b001111101011100110010001";
        ram[13] = "0b001111110010000101011111";
        ram[14] = "0b001111110110100000110011";
        ram[15] = "0b001111111001100001110011";
        ram[16] = "0b001111111011100101110011";
        ram[17] = "0b001111111100111111110101";
        ram[18] = "0b001111111101111101000001";
        ram[19] = "0b001111111110100110101011";
        ram[20] = "0b001111111111000011001010";
        ram[21] = "0b001111111111010110100101";
        ram[22] = "0b001111111111100011110000";
        ram[23] = "0b001111111111101100110000";
        ram[24] = "0b001111111111110010111000";
        ram[25] = "0b001111111111110111000100";
        ram[26] = "0b001111111111111001111010";
        ram[27] = "0b001111111111111011110110";
        ram[28] = "0b001111111111111101001011";
        ram[29] = "0b001111111111111110000100";
        ram[30] = "0b001111111111111110101011";
        ram[31] = "0b001111111111111111000111";
        ram[32] = "0b001111111111111111011000";
        ram[33] = "0b001111111111111111100101";
        ram[34] = "0b001111111111111111101110";
        ram[35] = "0b001111111111111111110011";
        ram[36] = "0b001111111111111111110111";
        ram[37] = "0b001111111111111111111010";
        ram[38] = "0b001111111111111111111100";
        ram[39] = "0b001111111111111111111101";
        ram[40] = "0b001111111111111111111110";
        ram[41] = "0b001111111111111111111110";
        for (unsigned i = 42; i < 47 ; i = i + 1) {
            ram[i] = "0b001111111111111111111111";
        }
        ram[47] = "0b010000000000000000000000";
        ram[48] = "0b111001010101110111011001";
        ram[49] = "0b111110101110100101001101";
        ram[50] = "0b000011010011111100111011";
        ram[51] = "0b000110111001100001100101";
        ram[52] = "0b001001100101101000111101";
        ram[53] = "0b001011100001111001111101";
        ram[54] = "0b001100111010000001000000";
        ram[55] = "0b001101110111101001000011";
        ram[56] = "0b001110100010011001001001";
        ram[57] = "0b001110111111111001010101";
        ram[58] = "0b001111010100001110010011";
        ram[59] = "0b001111100010000101011101";
        ram[60] = "0b001111101011100110010001";
        ram[61] = "0b001111110010000101011111";
        ram[62] = "0b001111110110100000110011";
        ram[63] = "0b001111111001100001110011";
        ram[64] = "0b001111111011100101110011";
        ram[65] = "0b001111111100111111110101";
        ram[66] = "0b001111111101111101000001";
        ram[67] = "0b001111111110100110101011";
        ram[68] = "0b001111111111000011001010";
        ram[69] = "0b001111111111010110100101";
        ram[70] = "0b001111111111100011110000";
        ram[71] = "0b001111111111101100110000";
        ram[72] = "0b001111111111110010111000";
        ram[73] = "0b001111111111110111000100";
        ram[74] = "0b001111111111111001111010";
        ram[75] = "0b001111111111111011110110";
        ram[76] = "0b001111111111111101001011";
        ram[77] = "0b001111111111111110000100";
        ram[78] = "0b001111111111111110101011";
        ram[79] = "0b001111111111111111000111";
        ram[80] = "0b001111111111111111011000";
        ram[81] = "0b001111111111111111100101";
        ram[82] = "0b001111111111111111101110";
        ram[83] = "0b001111111111111111110011";
        ram[84] = "0b001111111111111111110111";
        ram[85] = "0b001111111111111111111010";
        ram[86] = "0b001111111111111111111100";
        ram[87] = "0b001111111111111111111101";
        ram[88] = "0b001111111111111111111110";
        ram[89] = "0b001111111111111111111110";
        for (unsigned i = 90; i < 95 ; i = i + 1) {
            ram[i] = "0b001111111111111111111111";
        }
        ram[95] = "0b010000000000000000000000";


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


static const unsigned DataWidth = 24;
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
