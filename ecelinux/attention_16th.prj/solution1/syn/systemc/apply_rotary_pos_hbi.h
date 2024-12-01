// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __apply_rotary_pos_hbi_H__
#define __apply_rotary_pos_hbi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct apply_rotary_pos_hbi_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 17;
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


   SC_CTOR(apply_rotary_pos_hbi_ram) {
        ram[0] = "0b10000101010000011";
        ram[1] = "0b10010101011000101";
        ram[2] = "0b11011110100101000";
        ram[3] = "0b00101001010111100";
        ram[4] = "0b01011101101011010";
        ram[5] = "0b01111000011110101";
        ram[6] = "0b01111111111111100";
        ram[7] = "0b01111011100000001";
        ram[8] = "0b01110000101110011";
        ram[9] = "0b01100011011010000";
        ram[10] = "0b01010101101101001";
        ram[11] = "0b01001000111000100";
        ram[12] = "0b00111101010110100";
        ram[13] = "0b00110011010100111";
        ram[14] = "0b00101010110000011";
        ram[15] = "0b00100011100001100";
        ram[16] = "0b00011101011100001";
        ram[17] = "0b00011000010111001";
        ram[18] = "0b00010100001001100";
        ram[19] = "0b00010000101010010";
        ram[20] = "0b00001101110000110";
        ram[21] = "0b00001011010111001";
        ram[22] = "0b00001001011000101";
        ram[23] = "0b00000111101111111";
        ram[24] = "0b00000110011001100";
        ram[25] = "0b00000101010010000";
        ram[26] = "0b00000100010111000";
        ram[27] = "0b00000011100110010";
        ram[28] = "0b00000010111110001";
        ram[29] = "0b00000010011100111";
        ram[30] = "0b00000010000001100";
        ram[31] = "0b00000001101010110";
        ram[32] = "0b00000001011000010";
        ram[33] = "0b00000001001000110";
        ram[34] = "0b00000000111100000";
        ram[35] = "0b00000000110001100";
        ram[36] = "0b00000000101000111";
        ram[37] = "0b00000000100001110";
        ram[38] = "0b00000000011011111";
        ram[39] = "0b00000000010111000";
        ram[40] = "0b00000000010011000";
        ram[41] = "0b00000000001111101";
        ram[42] = "0b00000000001100111";
        ram[43] = "0b00000000001010101";
        ram[44] = "0b00000000001000110";
        ram[45] = "0b00000000000111010";
        ram[46] = "0b00000000000110000";
        ram[47] = "0b00000000000100111";
        ram[48] = "0b10000101010000011";
        ram[49] = "0b10010101011000101";
        ram[50] = "0b11011110100101000";
        ram[51] = "0b00101001010111100";
        ram[52] = "0b01011101101011010";
        ram[53] = "0b01111000011110101";
        ram[54] = "0b01111111111111100";
        ram[55] = "0b01111011100000001";
        ram[56] = "0b01110000101110011";
        ram[57] = "0b01100011011010000";
        ram[58] = "0b01010101101101001";
        ram[59] = "0b01001000111000100";
        ram[60] = "0b00111101010110100";
        ram[61] = "0b00110011010100111";
        ram[62] = "0b00101010110000011";
        ram[63] = "0b00100011100001100";
        ram[64] = "0b00011101011100001";
        ram[65] = "0b00011000010111001";
        ram[66] = "0b00010100001001100";
        ram[67] = "0b00010000101010010";
        ram[68] = "0b00001101110000110";
        ram[69] = "0b00001011010111001";
        ram[70] = "0b00001001011000101";
        ram[71] = "0b00000111101111111";
        ram[72] = "0b00000110011001100";
        ram[73] = "0b00000101010010000";
        ram[74] = "0b00000100010111000";
        ram[75] = "0b00000011100110010";
        ram[76] = "0b00000010111110001";
        ram[77] = "0b00000010011100111";
        ram[78] = "0b00000010000001100";
        ram[79] = "0b00000001101010110";
        ram[80] = "0b00000001011000010";
        ram[81] = "0b00000001001000110";
        ram[82] = "0b00000000111100000";
        ram[83] = "0b00000000110001100";
        ram[84] = "0b00000000101000111";
        ram[85] = "0b00000000100001110";
        ram[86] = "0b00000000011011111";
        ram[87] = "0b00000000010111000";
        ram[88] = "0b00000000010011000";
        ram[89] = "0b00000000001111101";
        ram[90] = "0b00000000001100111";
        ram[91] = "0b00000000001010101";
        ram[92] = "0b00000000001000110";
        ram[93] = "0b00000000000111010";
        ram[94] = "0b00000000000110000";
        ram[95] = "0b00000000000100111";


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


SC_MODULE(apply_rotary_pos_hbi) {


static const unsigned DataWidth = 17;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


apply_rotary_pos_hbi_ram* meminst;


SC_CTOR(apply_rotary_pos_hbi) {
meminst = new apply_rotary_pos_hbi_ram("apply_rotary_pos_hbi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~apply_rotary_pos_hbi() {
    delete meminst;
}


};//endmodule
#endif
