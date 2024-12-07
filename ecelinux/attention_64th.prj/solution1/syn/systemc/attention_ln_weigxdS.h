// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_ln_weigxdS_H__
#define __attention_ln_weigxdS_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_ln_weigxdS_ram : public sc_core::sc_module {

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


   SC_CTOR(attention_ln_weigxdS_ram) {
        ram[0] = "0b00000000000000000000010110110011000000";
        ram[1] = "0b00000000000000000000010010011011000000";
        ram[2] = "0b00000000000000000000010111010111000000";
        ram[3] = "0b00000000000000000000010111001100000000";
        ram[4] = "0b00000000000000000000010110101000111111";
        ram[5] = "0b00000000000000000000010111011000000000";
        ram[6] = "0b00000000000000000000010110110011000000";
        ram[7] = "0b00000000000000000000010111010001111111";
        ram[8] = "0b00000000000000000000010111100000111111";
        ram[9] = "0b00000000000000000000010110101111000000";
        ram[10] = "0b00000000000000000000010110100011000000";
        ram[11] = "0b00000000000000000000010111000000000000";
        ram[12] = "0b00000000000000000000010110110000000000";
        ram[13] = "0b00000000000000000000010110001001111111";
        ram[14] = "0b00000000000000000000010111101110000000";
        ram[15] = "0b00000000000000000000010111011100111111";
        ram[16] = "0b00000000000000000000010110101001111111";
        ram[17] = "0b00000000000000000000010110010110000000";
        ram[18] = "0b00000000000000000000010101111110000000";
        ram[19] = "0b00000000000000000000010111011011000000";
        ram[20] = "0b00000000000000000000010111010001111111";
        ram[21] = "0b00000000000000000000010110110000000000";
        ram[22] = "0b00000000000000000000010110110000000000";
        ram[23] = "0b00000000000000000000010111110100111111";


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


SC_MODULE(attention_ln_weigxdS) {


static const unsigned DataWidth = 38;
static const unsigned AddressRange = 24;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_ln_weigxdS_ram* meminst;


SC_CTOR(attention_ln_weigxdS) {
meminst = new attention_ln_weigxdS_ram("attention_ln_weigxdS_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_ln_weigxdS() {
    delete meminst;
}


};//endmodule
#endif
