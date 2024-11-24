// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_ln_weigjbC_H__
#define __attention_ln_weigjbC_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_ln_weigjbC_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(attention_ln_weigjbC_ram) {
        ram[0] = "0b00000000000111100010100000000000";
        ram[1] = "0b00000000000111010100100000000000";
        ram[2] = "0b00000000001000000101000000000000";
        ram[3] = "0b00000000000111000100100000000000";
        ram[4] = "0b00000000000111001100100000000000";
        ram[5] = "0b00000000001000000111100000000000";
        ram[6] = "0b00000000000111011000110000000000";
        ram[7] = "0b00000000001000001011000000000000";
        ram[8] = "0b00000000000111111101000000000000";
        ram[9] = "0b00000000000111000100000000000000";
        ram[10] = "0b00000000000111100001010000000000";
        ram[11] = "0b00000000001000011101100000000000";
        ram[12] = "0b00000000000111011111100000000000";
        ram[13] = "0b00000000000111100010100000000000";
        ram[14] = "0b00000000001000001110100000000000";
        ram[15] = "0b00000000001000010011100000000000";


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


SC_MODULE(attention_ln_weigjbC) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_ln_weigjbC_ram* meminst;


SC_CTOR(attention_ln_weigjbC) {
meminst = new attention_ln_weigjbC_ram("attention_ln_weigjbC_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_ln_weigjbC() {
    delete meminst;
}


};//endmodule
#endif
