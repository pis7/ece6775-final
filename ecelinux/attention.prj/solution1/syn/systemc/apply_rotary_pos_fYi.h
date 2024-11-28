// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __apply_rotary_pos_fYi_H__
#define __apply_rotary_pos_fYi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct apply_rotary_pos_fYi_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 18;
  static const unsigned AddressRange = 96;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(apply_rotary_pos_fYi_ram) {
        ram[0] = "0b111001010101110111";
        ram[1] = "0b111110101110100101";
        ram[2] = "0b000011010011111100";
        ram[3] = "0b000110111001100001";
        ram[4] = "0b001001100101101000";
        ram[5] = "0b001011100001111001";
        ram[6] = "0b001100111010000001";
        ram[7] = "0b001101110111101001";
        ram[8] = "0b001110100010011001";
        ram[9] = "0b001110111111111001";
        ram[10] = "0b001111010100001110";
        ram[11] = "0b001111100010000101";
        ram[12] = "0b001111101011100110";
        ram[13] = "0b001111110010000101";
        ram[14] = "0b001111110110100000";
        ram[15] = "0b001111111001100001";
        ram[16] = "0b001111111011100101";
        ram[17] = "0b001111111100111111";
        ram[18] = "0b001111111101111101";
        ram[19] = "0b001111111110100110";
        ram[20] = "0b001111111111000011";
        ram[21] = "0b001111111111010110";
        ram[22] = "0b001111111111100011";
        ram[23] = "0b001111111111101100";
        ram[24] = "0b001111111111110010";
        ram[25] = "0b001111111111110111";
        ram[26] = "0b001111111111111001";
        ram[27] = "0b001111111111111011";
        ram[28] = "0b001111111111111101";
        ram[29] = "0b001111111111111110";
        ram[30] = "0b001111111111111110";
        for (unsigned i = 31; i < 47 ; i = i + 1) {
            ram[i] = "0b001111111111111111";
        }
        ram[47] = "0b010000000000000000";
        ram[48] = "0b111001010101110111";
        ram[49] = "0b111110101110100101";
        ram[50] = "0b000011010011111100";
        ram[51] = "0b000110111001100001";
        ram[52] = "0b001001100101101000";
        ram[53] = "0b001011100001111001";
        ram[54] = "0b001100111010000001";
        ram[55] = "0b001101110111101001";
        ram[56] = "0b001110100010011001";
        ram[57] = "0b001110111111111001";
        ram[58] = "0b001111010100001110";
        ram[59] = "0b001111100010000101";
        ram[60] = "0b001111101011100110";
        ram[61] = "0b001111110010000101";
        ram[62] = "0b001111110110100000";
        ram[63] = "0b001111111001100001";
        ram[64] = "0b001111111011100101";
        ram[65] = "0b001111111100111111";
        ram[66] = "0b001111111101111101";
        ram[67] = "0b001111111110100110";
        ram[68] = "0b001111111111000011";
        ram[69] = "0b001111111111010110";
        ram[70] = "0b001111111111100011";
        ram[71] = "0b001111111111101100";
        ram[72] = "0b001111111111110010";
        ram[73] = "0b001111111111110111";
        ram[74] = "0b001111111111111001";
        ram[75] = "0b001111111111111011";
        ram[76] = "0b001111111111111101";
        ram[77] = "0b001111111111111110";
        ram[78] = "0b001111111111111110";
        for (unsigned i = 79; i < 95 ; i = i + 1) {
            ram[i] = "0b001111111111111111";
        }
        ram[95] = "0b010000000000000000";


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


SC_MODULE(apply_rotary_pos_fYi) {


static const unsigned DataWidth = 18;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


apply_rotary_pos_fYi_ram* meminst;


SC_CTOR(apply_rotary_pos_fYi) {
meminst = new apply_rotary_pos_fYi_ram("apply_rotary_pos_fYi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~apply_rotary_pos_fYi() {
    delete meminst;
}


};//endmodule
#endif
