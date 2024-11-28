// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_k_cachexdS_H__
#define __attention_k_cachexdS_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_k_cachexdS_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 40;
  static const unsigned AddressRange = 8;
  static const unsigned AddressWidth = 3;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(attention_k_cachexdS_ram) {
        ram[0] = "0b1111111111111111111111111101100100110111";
        ram[1] = "0b1111111111111111111111111010101010001101";
        ram[2] = "0b0000000000000000000000000000001111001000";
        ram[3] = "0b0000000000000000000000011111100000101010";
        ram[4] = "0b0000000000000000000000000001001001001001";
        ram[5] = "0b0000000000000000000000010111101010111111";
        ram[6] = "0b0000000000000000000000000000011011101111";
        ram[7] = "0b0000000000000000000000011110000011010100";


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


SC_MODULE(attention_k_cachexdS) {


static const unsigned DataWidth = 40;
static const unsigned AddressRange = 8;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_k_cachexdS_ram* meminst;


SC_CTOR(attention_k_cachexdS) {
meminst = new attention_k_cachexdS_ram("attention_k_cachexdS_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_k_cachexdS() {
    delete meminst;
}


};//endmodule
#endif
