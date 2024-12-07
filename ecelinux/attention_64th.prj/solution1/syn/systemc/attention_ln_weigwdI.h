// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_ln_weigwdI_H__
#define __attention_ln_weigwdI_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_ln_weigwdI_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 38;
  static const unsigned AddressRange = 24;
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


   SC_CTOR(attention_ln_weigwdI_ram) {
        ram[0] = "0b00000000000000000001111000101000000000";
        ram[1] = "0b00000000000000000001110101001000000000";
        ram[2] = "0b00000000000000000010000001010000000000";
        ram[3] = "0b00000000000000000001110001001000000000";
        ram[4] = "0b00000000000000000001110011001000000000";
        ram[5] = "0b00000000000000000010000001111000000000";
        ram[6] = "0b00000000000000000001110110001100000000";
        ram[7] = "0b00000000000000000010000010110000000000";
        ram[8] = "0b00000000000000000001111111010000000000";
        ram[9] = "0b00000000000000000001110001000000000000";
        ram[10] = "0b00000000000000000001111000010100000000";
        ram[11] = "0b00000000000000000010000111011000000000";
        ram[12] = "0b00000000000000000001110111111000000000";
        ram[13] = "0b00000000000000000001111000101000000000";
        ram[14] = "0b00000000000000000010000011101000000000";
        ram[15] = "0b00000000000000000010000100111000000000";
        ram[16] = "0b00000000000000000010000101000000000000";
        ram[17] = "0b00000000000000000010000000111000000000";
        ram[18] = "0b00000000000000000010001000100000000000";
        ram[19] = "0b00000000000000000001110101011000000000";
        ram[20] = "0b00000000000000000010000100111000000000";
        ram[21] = "0b00000000000000000010000000111000000000";
        ram[22] = "0b00000000000000000001111010011100000000";
        ram[23] = "0b00000000000000000001110111110100000000";


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


SC_MODULE(attention_ln_weigwdI) {


static const unsigned DataWidth = 38;
static const unsigned AddressRange = 24;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_ln_weigwdI_ram* meminst;


SC_CTOR(attention_ln_weigwdI) {
meminst = new attention_ln_weigwdI_ram("attention_ln_weigwdI_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_ln_weigwdI() {
    delete meminst;
}


};//endmodule
#endif
