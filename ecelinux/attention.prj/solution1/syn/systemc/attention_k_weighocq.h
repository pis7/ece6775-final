// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_k_weighocq_H__
#define __attention_k_weighocq_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_k_weighocq_ram : public sc_core::sc_module {

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


   SC_CTOR(attention_k_weighocq_ram) {
        ram[0] = "0b01001001";
        ram[1] = "0b10100010";
        ram[2] = "0b01011001";
        ram[3] = "0b10101010";
        ram[4] = "0b10100010";
        ram[5] = "0b10100110";
        ram[6] = "0b00100100";
        ram[7] = "0b10100100";
        ram[8] = "0b00100110";
        ram[9] = "0b10100010";
        ram[10] = "0b01000000";
        ram[11] = "0b00010100";
        ram[12] = "0b00101001";
        ram[13] = "0b10011001";
        ram[14] = "0b00000010";
        ram[15] = "0b01100010";


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


SC_MODULE(attention_k_weighocq) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_k_weighocq_ram* meminst;


SC_CTOR(attention_k_weighocq) {
meminst = new attention_k_weighocq_ram("attention_k_weighocq_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_k_weighocq() {
    delete meminst;
}


};//endmodule
#endif