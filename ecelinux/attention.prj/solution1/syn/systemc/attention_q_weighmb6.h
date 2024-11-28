// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_q_weighmb6_H__
#define __attention_q_weighmb6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_q_weighmb6_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
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


   SC_CTOR(attention_q_weighmb6_ram) {
        ram[0] = "0b00010100";
        ram[1] = "0b01101001";
        ram[2] = "0b00100110";
        ram[3] = "0b10010000";
        ram[4] = "0b10001000";
        ram[5] = "0b10010000";
        ram[6] = "0b00000100";
        ram[7] = "0b00010000";
        ram[8] = "0b10101000";
        ram[9] = "0b00011000";
        ram[10] = "0b00000100";
        ram[11] = "0b10010000";
        ram[12] = "0b01100110";
        ram[13] = "0b00011000";
        ram[14] = "0b00010000";
        ram[15] = "0b00010100";


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


SC_MODULE(attention_q_weighmb6) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_q_weighmb6_ram* meminst;


SC_CTOR(attention_q_weighmb6) {
meminst = new attention_q_weighmb6_ram("attention_q_weighmb6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_q_weighmb6() {
    delete meminst;
}


};//endmodule
#endif
