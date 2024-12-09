// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_k_weights_H__
#define __attention_k_weights_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_k_weights_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 144;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(attention_k_weights_ram) {
        ram[0] = "0b10010010";
        ram[1] = "0b00100101";
        ram[2] = "0b10100110";
        ram[3] = "0b01100001";
        ram[4] = "0b10100101";
        ram[5] = "0b00100000";
        ram[6] = "0b01100001";
        ram[7] = "0b00000100";
        ram[8] = "0b01010001";
        ram[9] = "0b00010100";
        ram[10] = "0b10100101";
        ram[11] = "0b01010101";
        ram[12] = "0b10001000";
        ram[13] = "0b10010110";
        ram[14] = "0b10100000";
        ram[15] = "0b00011010";
        ram[16] = "0b10001000";
        ram[17] = "0b01000001";
        ram[18] = "0b00010000";
        ram[19] = "0b01011010";
        ram[20] = "0b10100010";
        ram[21] = "0b01010010";
        ram[22] = "0b10101000";
        ram[23] = "0b10101010";
        ram[24] = "0b01001001";
        ram[25] = "0b10100010";
        ram[26] = "0b01011001";
        ram[27] = "0b10101010";
        ram[28] = "0b10100010";
        ram[29] = "0b10100110";
        ram[30] = "0b00100100";
        ram[31] = "0b10100100";
        ram[32] = "0b00100110";
        ram[33] = "0b10100010";
        ram[34] = "0b01000000";
        ram[35] = "0b00010100";
        ram[36] = "0b00101001";
        ram[37] = "0b10011001";
        ram[38] = "0b00000010";
        ram[39] = "0b01100010";
        ram[40] = "0b10001001";
        ram[41] = "0b10000110";
        ram[42] = "0b01001000";
        ram[43] = "0b10010100";
        ram[44] = "0b10000001";
        ram[45] = "0b10000001";
        ram[46] = "0b10100001";
        ram[47] = "0b01001010";
        ram[48] = "0b10000110";
        ram[49] = "0b01011010";
        ram[50] = "0b10000100";
        ram[51] = "0b01010000";
        ram[52] = "0b01101010";
        ram[53] = "0b01011000";
        ram[54] = "0b01000000";
        ram[55] = "0b00100001";
        ram[56] = "0b01101001";
        ram[57] = "0b01010110";
        ram[58] = "0b10100110";
        ram[59] = "0b01000000";
        ram[60] = "0b01010001";
        ram[61] = "0b01101001";
        ram[62] = "0b01100100";
        ram[63] = "0b00011001";
        ram[64] = "0b10100001";
        ram[65] = "0b00010110";
        ram[66] = "0b01100001";
        ram[67] = "0b10001001";
        ram[68] = "0b00100110";
        ram[69] = "0b10101010";
        ram[70] = "0b01011010";
        ram[71] = "0b01100100";
        ram[72] = "0b00000001";
        ram[73] = "0b10010100";
        ram[74] = "0b01101000";
        ram[75] = "0b00001001";
        ram[76] = "0b00010001";
        ram[77] = "0b00010000";
        ram[78] = "0b00100100";
        ram[79] = "0b10000000";
        ram[80] = "0b00000000";
        ram[81] = "0b00011010";
        ram[82] = "0b01010110";
        ram[83] = "0b00010101";
        ram[84] = "0b00001000";
        ram[85] = "0b00001010";
        ram[86] = "0b00101000";
        ram[87] = "0b00101010";
        ram[88] = "0b01010000";
        ram[89] = "0b00000101";
        ram[90] = "0b10011010";
        ram[91] = "0b01000101";
        ram[92] = "0b10101010";
        ram[93] = "0b01010101";
        ram[94] = "0b10100001";
        ram[95] = "0b01100000";
        ram[96] = "0b01100001";
        ram[97] = "0b10011001";
        ram[98] = "0b00100000";
        ram[99] = "0b10000110";
        ram[100] = "0b10010000";
        ram[101] = "0b10010000";
        ram[102] = "0b10000010";
        ram[103] = "0b10100110";
        ram[104] = "0b00000110";
        ram[105] = "0b01010000";
        ram[106] = "0b10100100";
        ram[107] = "0b01010110";
        ram[108] = "0b10000001";
        ram[109] = "0b00010000";
        ram[110] = "0b00001001";
        ram[111] = "0b01100110";
        ram[112] = "0b10010110";
        ram[113] = "0b10000101";
        ram[114] = "0b10001000";
        ram[115] = "0b01010010";
        ram[116] = "0b00010101";
        ram[117] = "0b01011010";
        ram[118] = "0b10000101";
        ram[119] = "0b01001001";
        ram[120] = "0b00000000";
        ram[121] = "0b00010001";
        ram[122] = "0b01000110";
        ram[123] = "0b00000000";
        ram[124] = "0b01000010";
        ram[125] = "0b10011010";
        ram[126] = "0b01010110";
        ram[127] = "0b10001001";
        ram[128] = "0b10001000";
        ram[129] = "0b10001010";
        ram[130] = "0b01000100";
        ram[131] = "0b00000100";
        ram[132] = "0b01000010";
        ram[133] = "0b00101001";
        ram[134] = "0b10001000";
        ram[135] = "0b01100101";
        ram[136] = "0b01101001";
        ram[137] = "0b10001001";
        ram[138] = "0b10001001";
        ram[139] = "0b01100000";
        ram[140] = "0b01001010";
        ram[141] = "0b00101001";
        ram[142] = "0b01100000";
        ram[143] = "0b10100110";


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


SC_MODULE(attention_k_weights) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 144;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_k_weights_ram* meminst;


SC_CTOR(attention_k_weights) {
meminst = new attention_k_weights_ram("attention_k_weights_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_k_weights() {
    delete meminst;
}


};//endmodule
#endif
