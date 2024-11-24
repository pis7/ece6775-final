// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_k_cache_V_H__
#define __attention_k_cache_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_k_cache_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(attention_k_cache_V_ram) {
        ram[0] = "0b00000000000000000101000010110111";
        ram[1] = "0b00000000000001010001111110100100";
        ram[2] = "0b11111111111101100100110111110111";
        ram[3] = "0b00000000000001000110101000000111";
        ram[4] = "0b11111111111111111101011110100100";
        ram[5] = "0b00000000000001000001100101010000";
        ram[6] = "0b11111111111010101010001101110100";
        ram[7] = "0b11111111111110000100011001110010";
        ram[8] = "0b00000000000010000001111001110011";
        ram[9] = "0b00000000000000010101011100001011";
        ram[10] = "0b00000000000000001111001000100110";
        ram[11] = "0b11111111111101110010101111110000";
        ram[12] = "0b11111111010110101101110011101110";
        ram[13] = "0b11111111111000101010001000000011";
        ram[14] = "0b00000000011111100000101010100100";
        ram[15] = "0b00000000010100100101111011111001";
        ram[16] = "0b00000000000010110011000101101111";
        ram[17] = "0b11111111111111010101000111101000";
        ram[18] = "0b00000000000001001001001001100011";
        ram[19] = "0b11111111111111010011110110111011";
        ram[20] = "0b11111111100000010011111010010101";
        ram[21] = "0b00000000010000100001011101111001";
        ram[22] = "0b00000000010111101010111111101011";
        ram[23] = "0b00000000100000100000111010010101";
        ram[24] = "0b00000000000000001100100111001010";
        ram[25] = "0b11111111111111101111100110101011";
        ram[26] = "0b00000000000000011011101111110000";
        ram[27] = "0b11111111111100111111000010010111";
        ram[28] = "0b11111111110010000011101100100110";
        ram[29] = "0b11111111110011010101110011100111";
        ram[30] = "0b00000000011110000011010100110111";
        ram[31] = "0b00000000001000001000001000010100";


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


SC_MODULE(attention_k_cache_V) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_k_cache_V_ram* meminst;


SC_CTOR(attention_k_cache_V) {
meminst = new attention_k_cache_V_ram("attention_k_cache_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_k_cache_V() {
    delete meminst;
}


};//endmodule
#endif
