// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __exp_38_18_s_f_x_mkbM_H__
#define __exp_38_18_s_f_x_mkbM_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct exp_38_18_s_f_x_mkbM_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 7;
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


   SC_CTOR(exp_38_18_s_f_x_mkbM_ram) {
        ram[0] = "0b0000000";
        ram[1] = "0b0000000";
        ram[2] = "0b0000011";
        ram[3] = "0b0001001";
        ram[4] = "0b0010101";
        ram[5] = "0b0101010";
        ram[6] = "0b1001000";
        ram[7] = "0b1110010";


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


SC_MODULE(exp_38_18_s_f_x_mkbM) {


static const unsigned DataWidth = 7;
static const unsigned AddressRange = 8;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


exp_38_18_s_f_x_mkbM_ram* meminst;


SC_CTOR(exp_38_18_s_f_x_mkbM) {
meminst = new exp_38_18_s_f_x_mkbM_ram("exp_38_18_s_f_x_mkbM_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~exp_38_18_s_f_x_mkbM() {
    delete meminst;
}


};//endmodule
#endif