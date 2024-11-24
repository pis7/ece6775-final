// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_v_cache_V_H__
#define __attention_v_cache_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_v_cache_V_ram : public sc_core::sc_module {

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


   SC_CTOR(attention_v_cache_V_ram) {
        ram[0] = "0b11111111110101111110101010101100";
        ram[1] = "0b11111111111101011111000111111000";
        ram[2] = "0b00000000000011110011011111010011";
        ram[3] = "0b11111111111100010011000010000110";
        ram[4] = "0b00000000110011110001011010111001";
        ram[5] = "0b11111111101110100010111101001001";
        ram[6] = "0b11111111101110111100000110010000";
        ram[7] = "0b00000000010111100010110000001100";
        ram[8] = "0b00000000001000000001000100001111";
        ram[9] = "0b00000000000011101100111101111001";
        ram[10] = "0b00000000000111010101100101100000";
        ram[11] = "0b00000000000100111101011001111100";
        ram[12] = "0b00000000000001100000111110100110";
        ram[13] = "0b11111111100001110001110100110001";
        ram[14] = "0b11111111111100011000010101000111";
        ram[15] = "0b11111111110111011000101010010100";
        ram[16] = "0b11111111011000011011010001110011";
        ram[17] = "0b11111110110011011011110001111111";
        ram[18] = "0b11111111111011110000001111111010";
        ram[19] = "0b11111111110101110011110011000000";
        ram[20] = "0b00000000010011000101001101001100";
        ram[21] = "0b11111111010000000001000001100111";
        ram[22] = "0b11111111111010010111000001101001";
        ram[23] = "0b11111111011110110011011101011101";
        ram[24] = "0b11111111111111100011101111001110";
        ram[25] = "0b00000000001010110111101011101110";
        ram[26] = "0b11111111111110010101011110010011";
        ram[27] = "0b00000000000000111010101100101100";
        ram[28] = "0b11111111011111111101000101111000";
        ram[29] = "0b00000000010011100111010101000000";
        ram[30] = "0b00000000111111100001111001100001";
        ram[31] = "0b11111111111000000011110000110011";


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


SC_MODULE(attention_v_cache_V) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_v_cache_V_ram* meminst;


SC_CTOR(attention_v_cache_V) {
meminst = new attention_v_cache_V_ram("attention_v_cache_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_v_cache_V() {
    delete meminst;
}


};//endmodule
#endif
