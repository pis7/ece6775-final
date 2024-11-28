// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_o_weighEe0_H__
#define __attention_o_weighEe0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_o_weighEe0_ram : public sc_core::sc_module {

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


   SC_CTOR(attention_o_weighEe0_ram) {
        ram[0] = "0b10010110";
        ram[1] = "0b01101001";
        ram[2] = "0b10101000";
        ram[3] = "0b10100101";
        ram[4] = "0b10000110";
        ram[5] = "0b10100100";
        ram[6] = "0b10011001";
        ram[7] = "0b01100110";
        ram[8] = "0b10100101";
        ram[9] = "0b01010010";
        ram[10] = "0b00000010";
        ram[11] = "0b01010101";
        ram[12] = "0b00000010";
        ram[13] = "0b01010110";
        ram[14] = "0b01000010";
        ram[15] = "0b10010110";


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


SC_MODULE(attention_o_weighEe0) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_o_weighEe0_ram* meminst;


SC_CTOR(attention_o_weighEe0) {
meminst = new attention_o_weighEe0_ram("attention_o_weighEe0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_o_weighEe0() {
    delete meminst;
}


};//endmodule
#endif
