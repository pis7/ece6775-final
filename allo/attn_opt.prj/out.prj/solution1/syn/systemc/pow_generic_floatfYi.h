// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __pow_generic_floatfYi_H__
#define __pow_generic_floatfYi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct pow_generic_floatfYi_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 44;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(pow_generic_floatfYi_ram) {
        ram[0] = "0b00000000000000000000000000000000000000000000";
        ram[1] = "0b00000100000000000000000001111100000000000001";
        ram[2] = "0b00001000000000000000000111111000000000001010";
        ram[3] = "0b00001100000000000000010001110100000000100011";
        ram[4] = "0b00010000000000000000011111110000000001010100";
        ram[5] = "0b00010100000000000000110001101100000010100101";
        ram[6] = "0b00011000000000000001000111101000000100011101";
        ram[7] = "0b00011100000000000001100001100100000111000110";
        ram[8] = "0b00100000000000000001111111100000001010100110";
        ram[9] = "0b00100100000000000010100001011100001111000110";
        ram[10] = "0b00101000000000000011000111011000010100101111";
        ram[11] = "0b00101100000000000011110001010100011011100111";
        ram[12] = "0b00110000000000000100011111010000100011110111";
        ram[13] = "0b00110100000000000101010001001100101101100110";
        ram[14] = "0b00111000000000000110000111001000111000111110";
        ram[15] = "0b00111100000000000111000001000101000110000110";
        ram[16] = "0b01000000000000000111111111000001010101000101";
        ram[17] = "0b01000100000000001001000000111101100110000100";
        ram[18] = "0b01001000000000001010000110111001111001001100";
        ram[19] = "0b01001100000000001011010000110110001110100011";
        ram[20] = "0b01010000000000001100011110110010100110010010";
        ram[21] = "0b01010100000000001101110000101111000000100001";
        ram[22] = "0b01011000000000001111000110101011011101010111";
        ram[23] = "0b01011100000000010000100000100111111100111110";
        ram[24] = "0b01100000000000010001111110100100011111011101";
        ram[25] = "0b01100100000000010011100000100001000100111011";
        ram[26] = "0b01101000000000010101000110011101101101100010";
        ram[27] = "0b01101100000000010110110000011010011001011000";
        ram[28] = "0b01110000000000011000011110010111001000100110";
        ram[29] = "0b01110100000000011010010000010011111011010100";
        ram[30] = "0b01111000000000011100000110010000110001101010";
        ram[31] = "0b01111100000000011110000000001101101011110000";
        ram[32] = "0b10000000000000011111111110001010101001101110";
        ram[33] = "0b10000100000000100010000000000111101011101100";
        ram[34] = "0b10001000000000100100000110000100110001110010";
        ram[35] = "0b10001100000000100110010000000001111100000111";
        ram[36] = "0b10010000000000101000011101111111001010110101";
        ram[37] = "0b10010100000000101010101111111100011110000010";
        ram[38] = "0b10011000000000101101000101111001110101111000";
        ram[39] = "0b10011100000000101111011111110111010010011101";
        ram[40] = "0b10100000000000110001111101110100110011111011";
        ram[41] = "0b10100100000000110100011111110010011010011000";
        ram[42] = "0b10101000000000110111000101110000000101111101";
        ram[43] = "0b10101100000000111001101111101101110110110010";
        ram[44] = "0b10110000000000111100011101101011101100111111";
        ram[45] = "0b10110100000000111111001111101001101000101101";
        ram[46] = "0b10111000000001000010000101100111101010000010";
        ram[47] = "0b10111100000001000100111111100101110001000111";
        ram[48] = "0b11000000000001000111111101100011111110000100";
        ram[49] = "0b11000100000001001010111111100010010001000001";
        ram[50] = "0b11001000000001001110000101100000101010000110";
        ram[51] = "0b11001100000001010001001111011111001001011011";
        ram[52] = "0b11010000000001010100011101011101101111001000";
        ram[53] = "0b11010100000001010111101111011100011011010101";
        ram[54] = "0b11011000000001011011000101011011001110001010";
        ram[55] = "0b11011100000001011110011111011010000111101111";
        ram[56] = "0b11100000000001100001111101011001001000001100";
        ram[57] = "0b11100100000001100101011111011000001111101001";
        ram[58] = "0b11101000000001101001000101010111011110001110";
        ram[59] = "0b11101100000001101100101111010110110100000011";
        ram[60] = "0b11110000000001110000011101010110010001010000";
        ram[61] = "0b11110100000001110100001111010101110101111101";
        ram[62] = "0b11111000000001111000000101010101100010010010";
        ram[63] = "0b11111100000001111011111111010101010110011000";


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


SC_MODULE(pow_generic_floatfYi) {


static const unsigned DataWidth = 44;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


pow_generic_floatfYi_ram* meminst;


SC_CTOR(pow_generic_floatfYi) {
meminst = new pow_generic_floatfYi_ram("pow_generic_floatfYi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~pow_generic_floatfYi() {
    delete meminst;
}


};//endmodule
#endif