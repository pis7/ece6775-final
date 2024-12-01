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


   SC_CTOR(apply_rotary_pos_g8j_ram) {
        ram[0] = "0b00100100010011110";
        ram[1] = "0b10111001001010101";
        ram[2] = "0b10000100011100001";
        ram[3] = "0b10000110110111100";
        ram[4] = "0b10101000110001011";
        ram[5] = "0b11010100110001011";
        ram[6] = "0b11111110101101111";
        ram[7] = "0b00100001101000011";
        ram[8] = "0b00111100101000110";
        ram[9] = "0b01010000101000101";
        ram[10] = "0b01011111000100100";
        ram[11] = "0b01101001001110010";
        ram[12] = "0b01110000010101101";
        ram[13] = "0b01110101010000100";
        ram[14] = "0b01111000101001011";
        ram[15] = "0b01111010111110001";
        ram[16] = "0b01111100100100010";
        ram[17] = "0b01111101101010010";
        ram[18] = "0b01111110011001110";
        ram[19] = "0b01111110111010010";
        ram[20] = "0b01111111010000100";
        ram[21] = "0b01111111011111101";
        ram[22] = "0b01111111101001111";
        ram[23] = "0b01111111110000111";
        ram[24] = "0b01111111110101110";
        ram[25] = "0b01111111111001000";
        ram[26] = "0b01111111111011001";
        ram[27] = "0b01111111111100110";
        ram[28] = "0b01111111111101110";
        ram[29] = "0b01111111111110011";
        ram[30] = "0b01111111111110111";
        ram[31] = "0b01111111111111010";
        ram[32] = "0b01111111111111100";
        ram[33] = "0b01111111111111101";
        ram[34] = "0b01111111111111110";
        ram[35] = "0b01111111111111110";
        for (unsigned i = 36; i < 48 ; i = i + 1) {
            ram[i] = "0b01111111111111111";
        }
        ram[48] = "0b00100100010011110";
        ram[49] = "0b10111001001010101";
        ram[50] = "0b10000100011100001";
        ram[51] = "0b10000110110111100";
        ram[52] = "0b10101000110001011";
        ram[53] = "0b11010100110001011";
        ram[54] = "0b11111110101101111";
        ram[55] = "0b00100001101000011";
        ram[56] = "0b00111100101000110";
        ram[57] = "0b01010000101000101";
        ram[58] = "0b01011111000100100";
        ram[59] = "0b01101001001110010";
        ram[60] = "0b01110000010101101";
        ram[61] = "0b01110101010000100";
        ram[62] = "0b01111000101001011";
        ram[63] = "0b01111010111110001";
        ram[64] = "0b01111100100100010";
        ram[65] = "0b01111101101010010";
        ram[66] = "0b01111110011001110";
        ram[67] = "0b01111110111010010";
        ram[68] = "0b01111111010000100";
        ram[69] = "0b01111111011111101";
        ram[70] = "0b01111111101001111";
        ram[71] = "0b01111111110000111";
        ram[72] = "0b01111111110101110";
        ram[73] = "0b01111111111001000";
        ram[74] = "0b01111111111011001";
        ram[75] = "0b01111111111100110";
        ram[76] = "0b01111111111101110";
        ram[77] = "0b01111111111110011";
        ram[78] = "0b01111111111110111";
        ram[79] = "0b01111111111111010";
        ram[80] = "0b01111111111111100";
        ram[81] = "0b01111111111111101";
        ram[82] = "0b01111111111111110";
        ram[83] = "0b01111111111111110";
        for (unsigned i = 84; i < 96 ; i = i + 1) {
            ram[i] = "0b01111111111111111";
        }


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


static const unsigned DataWidth = 17;
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
