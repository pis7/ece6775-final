// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __attention_ln_weigqcK_H__
#define __attention_ln_weigqcK_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct attention_ln_weigqcK_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 40;
  static const unsigned AddressRange = 384;
  static const unsigned AddressWidth = 9;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(attention_ln_weigqcK_ram) {
        ram[0] = "0b0000000000000000000000000111100010100000";
        ram[1] = "0b0000000000000000000000000111010100100000";
        ram[2] = "0b0000000000000000000000001000000101000000";
        ram[3] = "0b0000000000000000000000000111000100100000";
        ram[4] = "0b0000000000000000000000000111001100100000";
        ram[5] = "0b0000000000000000000000001000000111100000";
        ram[6] = "0b0000000000000000000000000111011000110000";
        ram[7] = "0b0000000000000000000000001000001011000000";
        ram[8] = "0b0000000000000000000000000111111101000000";
        ram[9] = "0b0000000000000000000000000111000100000000";
        ram[10] = "0b0000000000000000000000000111100001010000";
        ram[11] = "0b0000000000000000000000001000011101100000";
        ram[12] = "0b0000000000000000000000000111011111100000";
        ram[13] = "0b0000000000000000000000000111100010100000";
        ram[14] = "0b0000000000000000000000001000001110100000";
        ram[15] = "0b0000000000000000000000001000010011100000";
        ram[16] = "0b0000000000000000000000001000010100000000";
        ram[17] = "0b0000000000000000000000001000000011100000";
        ram[18] = "0b0000000000000000000000001000100010000000";
        ram[19] = "0b0000000000000000000000000111010101100000";
        ram[20] = "0b0000000000000000000000001000010011100000";
        ram[21] = "0b0000000000000000000000001000000011100000";
        ram[22] = "0b0000000000000000000000000111101001110000";
        ram[23] = "0b0000000000000000000000000111011111010000";
        ram[24] = "0b0000000000000000000000001000010001000000";
        ram[25] = "0b0000000000000000000000000111100011000000";
        ram[26] = "0b0000000000000000000000001000000111100000";
        ram[27] = "0b0000000000000000000000000111100010000000";
        ram[28] = "0b0000000000000000000000000111100011100000";
        ram[29] = "0b0000000000000000000000001000001000100000";
        ram[30] = "0b0000000000000000000000000110110101110000";
        ram[31] = "0b0000000000000000000000000111100110100000";
        ram[32] = "0b0000000000000000000000000111010101100000";
        ram[33] = "0b0000000000000000000000000111101000100000";
        ram[34] = "0b0000000000000000000000000111000111000000";
        ram[35] = "0b0000000000000000000000001000000010000000";
        ram[36] = "0b0000000000000000000000000111110101010000";
        ram[37] = "0b0000000000000000000000001000000001000000";
        ram[38] = "0b0000000000000000000000001000000110000000";
        ram[39] = "0b0000000000000000000000000110011000010000";
        ram[40] = "0b0000000000000000000000001000001110000000";
        ram[41] = "0b0000000000000000000000001000000000100000";
        ram[42] = "0b0000000000000000000000000111101101100000";
        ram[43] = "0b0000000000000000000000001000000000100000";
        ram[44] = "0b0000000000000000000000001000001110000000";
        ram[45] = "0b0000000000000000000000001000000011100000";
        ram[46] = "0b0000000000000000000000000111010000110000";
        ram[47] = "0b0000000000000000000000000111111011110000";
        ram[48] = "0b0000000000000000000000000111010101000000";
        ram[49] = "0b0000000000000000000000001000000110100000";
        ram[50] = "0b0000000000000000000000000111100010100000";
        ram[51] = "0b0000000000000000000000001000001111100000";
        ram[52] = "0b0000000000000000000000000111111000110000";
        ram[53] = "0b0000000000000000000000001000010011100000";
        ram[54] = "0b0000000000000000000000001000001011100000";
        ram[55] = "0b0000000000000000000000000111101010100000";
        ram[56] = "0b0000000000000000000000001000000101000000";
        ram[57] = "0b0000000000000000000000001000000110000000";
        ram[58] = "0b0000000000000000000000000111011000000000";
        ram[59] = "0b0000000000000000000000001000000110000000";
        ram[60] = "0b0000000000000000000000000110011010110000";
        ram[61] = "0b0000000000000000000000001000111001100000";
        ram[62] = "0b0000000000000000000000000111111000110000";
        ram[63] = "0b0000000000000000000000000101111111000000";
        ram[64] = "0b0000000000000000000000000111111010000000";
        ram[65] = "0b0000000000000000000000000111011001110000";
        ram[66] = "0b0000000000000000000000001000001000000000";
        ram[67] = "0b0000000000000000000000000111001111100000";
        ram[68] = "0b0000000000000000000000000111101001000000";
        ram[69] = "0b0000000000000000000000001000011000000000";
        ram[70] = "0b0000000000000000000000000111100100100000";
        ram[71] = "0b0000000000000000000000000111100100000000";
        ram[72] = "0b0000000000000000000000000110110010010000";
        ram[73] = "0b0000000000000000000000001000001111000000";
        ram[74] = "0b0000000000000000000000000111100101010000";
        ram[75] = "0b0000000000000000000000001000000100100000";
        ram[76] = "0b0000000000000000000000000110111100100000";
        ram[77] = "0b0000000000000000000000000111011101100000";
        ram[78] = "0b0000000000000000000000000111100101110000";
        ram[79] = "0b0000000000000000000000000110111000110000";
        ram[80] = "0b0000000000000000000000000111100100000000";
        ram[81] = "0b0000000000000000000000001000100100100000";
        ram[82] = "0b0000000000000000000000001000011011000000";
        ram[83] = "0b0000000000000000000000001000001101100000";
        ram[84] = "0b0000000000000000000000001000001010100000";
        ram[85] = "0b0000000000000000000000001000000100100000";
        ram[86] = "0b0000000000000000000000000111010111110000";
        ram[87] = "0b0000000000000000000000000111000000100000";
        ram[88] = "0b0000000000000000000000000111011001100000";
        ram[89] = "0b0000000000000000000000001000000000100000";
        ram[90] = "0b0000000000000000000000000111011010010000";
        ram[91] = "0b0000000000000000000000000111011111000000";
        ram[92] = "0b0000000000000000000000001000010101000000";
        ram[93] = "0b0000000000000000000000001000001100000000";
        ram[94] = "0b0000000000000000000000000111101111110000";
        ram[95] = "0b0000000000000000000000000110100011000000";
        ram[96] = "0b0000000000000000000000000111010011100000";
        ram[97] = "0b0000000000000000000000001000001010100000";
        ram[98] = "0b0000000000000000000000001000101111100000";
        ram[99] = "0b0000000000000000000000001000000001000000";
        ram[100] = "0b0000000000000000000000000110110011110000";
        ram[101] = "0b0000000000000000000000000111101010110000";
        ram[102] = "0b0000000000000000000000000111011101000000";
        ram[103] = "0b0000000000000000000000001000001001000000";
        ram[104] = "0b0000000000000000000000000110101011110000";
        ram[105] = "0b0000000000000000000000001001000100100000";
        ram[106] = "0b0000000000000000000000001000001011000000";
        ram[107] = "0b0000000000000000000000000111010100010000";
        ram[108] = "0b0000000000000000000000000111100011100000";
        ram[109] = "0b0000000000000000000000000111101100110000";
        ram[110] = "0b0000000000000000000000001000001111100000";
        ram[111] = "0b0000000000000000000000001000001101000000";
        ram[112] = "0b0000000000000000000000001000010011100000";
        ram[113] = "0b0000000000000000000000000111100000110000";
        ram[114] = "0b0000000000000000000000001000010001100000";
        ram[115] = "0b0000000000000000000000001000100101000000";
        ram[116] = "0b0000000000000000000000001000000100100000";
        ram[117] = "0b0000000000000000000000000111010011110000";
        ram[118] = "0b0000000000000000000000001000000010000000";
        ram[119] = "0b0000000000000000000000000111101000100000";
        ram[120] = "0b0000000000000000000000000111011010100000";
        ram[121] = "0b0000000000000000000000001000000101000000";
        ram[122] = "0b0000000000000000000000000111100011100000";
        ram[123] = "0b0000000000000000000000000111110011010000";
        ram[124] = "0b0000000000000000000000001000001001000000";
        ram[125] = "0b0000000000000000000000000111100010110000";
        ram[126] = "0b0000000000000000000000000111011010100000";
        ram[127] = "0b0000000000000000000000001000001001100000";
        ram[128] = "0b0000000000000000000000001010001010100000";
        ram[129] = "0b0000000000000000000000000111110000000000";
        ram[130] = "0b0000000000000000000000001000000110100000";
        ram[131] = "0b0000000000000000000000000111111100010000";
        ram[132] = "0b0000000000000000000000000111010100000000";
        ram[133] = "0b0000000000000000000000001000000011000000";
        ram[134] = "0b0000000000000000000000001000010101000000";
        ram[135] = "0b0000000000000000000000000111001000000000";
        ram[136] = "0b0000000000000000000000000110110110110000";
        ram[137] = "0b0000000000000000000000001000010010000000";
        ram[138] = "0b0000000000000000000000000111001011110000";
        ram[139] = "0b0000000000000000000000000111110000000000";
        ram[140] = "0b0000000000000000000000001000001011100000";
        ram[141] = "0b0000000000000000000000000111001101110000";
        ram[142] = "0b0000000000000000000000001000000101000000";
        ram[143] = "0b0000000000000000000000001000000000100000";
        ram[144] = "0b0000000000000000000000001000010011100000";
        ram[145] = "0b0000000000000000000000001000000001000000";
        ram[146] = "0b0000000000000000000000000111110000100000";
        ram[147] = "0b0000000000000000000000000111011101100000";
        ram[148] = "0b0000000000000000000000000111101111110000";
        ram[149] = "0b0000000000000000000000001000000111100000";
        ram[150] = "0b0000000000000000000000000111110111110000";
        ram[151] = "0b0000000000000000000000001000000100100000";
        ram[152] = "0b0000000000000000000000000111001110110000";
        ram[153] = "0b0000000000000000000000000111110000100000";
        ram[154] = "0b0000000000000000000000001000001101100000";
        ram[155] = "0b0000000000000000000000001000000101000000";
        ram[156] = "0b0000000000000000000000000111110001000000";
        ram[157] = "0b0000000000000000000000000111100110010000";
        ram[158] = "0b0000000000000000000000000111010110110000";
        ram[159] = "0b0000000000000000000000001000001101100000";
        ram[160] = "0b0000000000000000000000001000000100100000";
        ram[161] = "0b0000000000000000000000001000000001100000";
        ram[162] = "0b0000000000000000000000000111100011010000";
        ram[163] = "0b0000000000000000000000001000001001100000";
        ram[164] = "0b0000000000000000000000000111111011010000";
        ram[165] = "0b0000000000000000000000000111110111000000";
        ram[166] = "0b0000000000000000000000000111011000100000";
        ram[167] = "0b0000000000000000000000001000011001000000";
        ram[168] = "0b0000000000000000000000000101111000100000";
        ram[169] = "0b0000000000000000000000000111101101100000";
        ram[170] = "0b0000000000000000000000001000000010100000";
        ram[171] = "0b0000000000000000000000001000000001000000";
        ram[172] = "0b0000000000000000000000000111000111110000";
        ram[173] = "0b0000000000000000000000000111100011010000";
        ram[174] = "0b0000000000000000000000000111111000100000";
        ram[175] = "0b0000000000000000000000000111001000110000";
        ram[176] = "0b0000000000000000000000000111101000100000";
        ram[177] = "0b0000000000000000000000001000001000100000";
        ram[178] = "0b0000000000000000000000000111101011110000";
        ram[179] = "0b0000000000000000000000001000101010000000";
        ram[180] = "0b0000000000000000000000001000000101000000";
        ram[181] = "0b0000000000000000000000000111110001100000";
        ram[182] = "0b0000000000000000000000000111011011100000";
        ram[183] = "0b0000000000000000000000000111010100000000";
        ram[184] = "0b0000000000000000000000000111101111000000";
        ram[185] = "0b0000000000000000000000000111001000010000";
        ram[186] = "0b0000000000000000000000001000011000000000";
        ram[187] = "0b0000000000000000000000000111100101110000";
        ram[188] = "0b0000000000000000000000000111000011010000";
        ram[189] = "0b0000000000000000000000000110110111110000";
        ram[190] = "0b0000000000000000000000000111010101100000";
        ram[191] = "0b0000000000000000000000001000001000100000";
        ram[192] = "0b0000000000000000000000000111000010010000";
        ram[193] = "0b0000000000000000000000001000000111100000";
        ram[194] = "0b0000000000000000000000001000001000100000";
        ram[195] = "0b0000000000000000000000000111011100100000";
        ram[196] = "0b0000000000000000000000000111100010110000";
        ram[197] = "0b0000000000000000000000001000000100100000";
        ram[198] = "0b0000000000000000000000000111101001010000";
        ram[199] = "0b0000000000000000000000000111101010010000";
        ram[200] = "0b0000000000000000000000000111110100000000";
        ram[201] = "0b0000000000000000000000000111011100010000";
        ram[202] = "0b0000000000000000000000000111110010100000";
        ram[203] = "0b0000000000000000000000000111011101110000";
        ram[204] = "0b0000000000000000000000001000010101000000";
        ram[205] = "0b0000000000000000000000000111010001100000";
        ram[206] = "0b0000000000000000000000001000001100000000";
        ram[207] = "0b0000000000000000000000000111110000110000";
        ram[208] = "0b0000000000000000000000000110111001100000";
        ram[209] = "0b0000000000000000000000001000000011000000";
        ram[210] = "0b0000000000000000000000000111000010000000";
        ram[211] = "0b0000000000000000000000001000000001100000";
        ram[212] = "0b0000000000000000000000001000011010100000";
        ram[213] = "0b0000000000000000000000001000001011000000";
        ram[214] = "0b0000000000000000000000000111011100110000";
        ram[215] = "0b0000000000000000000000000111000100100000";
        ram[216] = "0b0000000000000000000000000111101000100000";
        ram[217] = "0b0000000000000000000000000111101011000000";
        ram[218] = "0b0000000000000000000000000111011100010000";
        ram[219] = "0b0000000000000000000000001000000001100000";
        ram[220] = "0b0000000000000000000000000111101001110000";
        ram[221] = "0b0000000000000000000000000111101010100000";
        ram[222] = "0b0000000000000000000000001000011011000000";
        ram[223] = "0b0000000000000000000000001000000111100000";
        ram[224] = "0b0000000000000000000000000111110101000000";
        ram[225] = "0b0000000000000000000000000111111001100000";
        ram[226] = "0b0000000000000000000000001000100100100000";
        ram[227] = "0b0000000000000000000000001000001110000000";
        ram[228] = "0b0000000000000000000000000111011011100000";
        ram[229] = "0b0000000000000000000000001000000101100000";
        ram[230] = "0b0000000000000000000000001000001011100000";
        ram[231] = "0b0000000000000000000000001000001010000000";
        ram[232] = "0b0000000000000000000000000111101001100000";
        ram[233] = "0b0000000000000000000000001000011100100000";
        ram[234] = "0b0000000000000000000000000111110001000000";
        ram[235] = "0b0000000000000000000000000111100001110000";
        ram[236] = "0b0000000000000000000000001000011101000000";
        ram[237] = "0b0000000000000000000000001000010010100000";
        ram[238] = "0b0000000000000000000000001000001110100000";
        ram[239] = "0b0000000000000000000000000111010010110000";
        ram[240] = "0b0000000000000000000000000111010111100000";
        ram[241] = "0b0000000000000000000000000111010100110000";
        ram[242] = "0b0000000000000000000000000110101010110000";
        ram[243] = "0b0000000000000000000000001000000101100000";
        ram[244] = "0b0000000000000000000000000111100011100000";
        ram[245] = "0b0000000000000000000000001000000101100000";
        ram[246] = "0b0000000000000000000000000111101100010000";
        ram[247] = "0b0000000000000000000000000111101001010000";
        ram[248] = "0b0000000000000000000000001000100000000000";
        ram[249] = "0b0000000000000000000000001000000110100000";
        ram[250] = "0b0000000000000000000000000111010011000000";
        ram[251] = "0b0000000000000000000000001000001000000000";
        ram[252] = "0b0000000000000000000000000111111001010000";
        ram[253] = "0b0000000000000000000000000111101111010000";
        ram[254] = "0b0000000000000000000000001000001111000000";
        ram[255] = "0b0000000000000000000000000111100110000000";
        ram[256] = "0b0000000000000000000000001000001110000000";
        ram[257] = "0b0000000000000000000000001000000111100000";
        ram[258] = "0b0000000000000000000000001000001000100000";
        ram[259] = "0b0000000000000000000000001000011011100000";
        ram[260] = "0b0000000000000000000000001000001100100000";
        ram[261] = "0b0000000000000000000000001000001100100000";
        ram[262] = "0b0000000000000000000000000111011001000000";
        ram[263] = "0b0000000000000000000000000111101011100000";
        ram[264] = "0b0000000000000000000000000111100101000000";
        ram[265] = "0b0000000000000000000000001000000010100000";
        ram[266] = "0b0000000000000000000000000111100101110000";
        ram[267] = "0b0000000000000000000000000111100011000000";
        ram[268] = "0b0000000000000000000000000110010001110000";
        ram[269] = "0b0000000000000000000000001000000011100000";
        ram[270] = "0b0000000000000000000000000111010111010000";
        ram[271] = "0b0000000000000000000000000111001110110000";
        ram[272] = "0b0000000000000000000000000111011101000000";
        ram[273] = "0b0000000000000000000000000111100001100000";
        ram[274] = "0b0000000000000000000000001000000011000000";
        ram[275] = "0b0000000000000000000000001000000011000000";
        ram[276] = "0b0000000000000000000000000111110111100000";
        ram[277] = "0b0000000000000000000000001000000010100000";
        ram[278] = "0b0000000000000000000000000111110100100000";
        ram[279] = "0b0000000000000000000000001000000010000000";
        ram[280] = "0b0000000000000000000000000111010111100000";
        ram[281] = "0b0000000000000000000000000110101010000000";
        ram[282] = "0b0000000000000000000000000111010001110000";
        ram[283] = "0b0000000000000000000000000111110010000000";
        ram[284] = "0b0000000000000000000000001000010101100000";
        ram[285] = "0b0000000000000000000000001000110000000000";
        ram[286] = "0b0000000000000000000000001000000110000000";
        ram[287] = "0b0000000000000000000000000111100000100000";
        ram[288] = "0b0000000000000000000000000111100100010000";
        ram[289] = "0b0000000000000000000000000111110000000000";
        ram[290] = "0b0000000000000000000000001000001000100000";
        ram[291] = "0b0000000000000000000000000111110011000000";
        ram[292] = "0b0000000000000000000000001000000110100000";
        ram[293] = "0b0000000000000000000000000111110011100000";
        ram[294] = "0b0000000000000000000000000111001110100000";
        ram[295] = "0b0000000000000000000000000110110001100000";
        ram[296] = "0b0000000000000000000000001000000011000000";
        ram[297] = "0b0000000000000000000000000111100000010000";
        ram[298] = "0b0000000000000000000000000111110001000000";
        ram[299] = "0b0000000000000000000000000111011100110000";
        ram[300] = "0b0000000000000000000000000111011001110000";
        ram[301] = "0b0000000000000000000000000111110010100000";
        ram[302] = "0b0000000000000000000000000111100100100000";
        ram[303] = "0b0000000000000000000000000111110001010000";
        ram[304] = "0b0000000000000000000000001000001111100000";
        ram[305] = "0b0000000000000000000000000111010100010000";
        ram[306] = "0b0000000000000000000000000110011101100000";
        ram[307] = "0b0000000000000000000000001000000001000000";
        ram[308] = "0b0000000000000000000000000111110111010000";
        ram[309] = "0b0000000000000000000000000111010101110000";
        ram[310] = "0b0000000000000000000000000111001111000000";
        ram[311] = "0b0000000000000000000000000111101011100000";
        ram[312] = "0b0000000000000000000000001000001000000000";
        ram[313] = "0b0000000000000000000000000111100100010000";
        ram[314] = "0b0000000000000000000000001000011101000000";
        ram[315] = "0b0000000000000000000000000111000100110000";
        ram[316] = "0b0000000000000000000000001000001010000000";
        ram[317] = "0b0000000000000000000000000111101001100000";
        ram[318] = "0b0000000000000000000000001000001000100000";
        ram[319] = "0b0000000000000000000000001000000011000000";
        ram[320] = "0b0000000000000000000000000111001101010000";
        ram[321] = "0b0000000000000000000000000111011111000000";
        ram[322] = "0b0000000000000000000000000111011001110000";
        ram[323] = "0b0000000000000000000000000111110110110000";
        ram[324] = "0b0000000000000000000000001000001010000000";
        ram[325] = "0b0000000000000000000000001000000111000000";
        ram[326] = "0b0000000000000000000000001000000000100000";
        ram[327] = "0b0000000000000000000000000111101010010000";
        ram[328] = "0b0000000000000000000000000111101010100000";
        ram[329] = "0b0000000000000000000000000111010100000000";
        ram[330] = "0b0000000000000000000000000111101101110000";
        ram[331] = "0b0000000000000000000000001000001001100000";
        ram[332] = "0b0000000000000000000000000111011000100000";
        ram[333] = "0b0000000000000000000000001000000100000000";
        ram[334] = "0b0000000000000000000000000111111101110000";
        ram[335] = "0b0000000000000000000000000111111010100000";
        ram[336] = "0b0000000000000000000000001000000010000000";
        ram[337] = "0b0000000000000000000000000110110110010000";
        ram[338] = "0b0000000000000000000000001000000011100000";
        ram[339] = "0b0000000000000000000000000111101110110000";
        ram[340] = "0b0000000000000000000000000111010011010000";
        ram[341] = "0b0000000000000000000000000110110110010000";
        ram[342] = "0b0000000000000000000000001000001100100000";
        ram[343] = "0b0000000000000000000000000111101110000000";
        ram[344] = "0b0000000000000000000000001000000101100000";
        ram[345] = "0b0000000000000000000000000111100001100000";
        ram[346] = "0b0000000000000000000000000111010001010000";
        ram[347] = "0b0000000000000000000000000111101001010000";
        ram[348] = "0b0000000000000000000000000111100101100000";
        ram[349] = "0b0000000000000000000000000111011111110000";
        ram[350] = "0b0000000000000000000000000111000010000000";
        ram[351] = "0b0000000000000000000000001000010110000000";
        ram[352] = "0b0000000000000000000000000111011001000000";
        ram[353] = "0b0000000000000000000000000111001111110000";
        ram[354] = "0b0000000000000000000000001000010001000000";
        ram[355] = "0b0000000000000000000000001000001110100000";
        ram[356] = "0b0000000000000000000000001000010000000000";
        ram[357] = "0b0000000000000000000000000111100000010000";
        ram[358] = "0b0000000000000000000000000111110011100000";
        ram[359] = "0b0000000000000000000000001000100010000000";
        ram[360] = "0b0000000000000000000000000111010001110000";
        ram[361] = "0b0000000000000000000000001000000011100000";
        ram[362] = "0b0000000000000000000000000110101010000000";
        ram[363] = "0b0000000000000000000000000111010011000000";
        ram[364] = "0b0000000000000000000000001000011000000000";
        ram[365] = "0b0000000000000000000000000111010111000000";
        ram[366] = "0b0000000000000000000000000111100111110000";
        ram[367] = "0b0000000000000000000000000111000011100000";
        ram[368] = "0b0000000000000000000000000111100111100000";
        ram[369] = "0b0000000000000000000000001000000111100000";
        ram[370] = "0b0000000000000000000000000111010110000000";
        ram[371] = "0b0000000000000000000000000110101110110000";
        ram[372] = "0b0000000000000000000000000111011111110000";
        ram[373] = "0b0000000000000000000000000111011010010000";
        ram[374] = "0b0000000000000000000000001000100010000000";
        ram[375] = "0b0000000000000000000000001000110111000000";
        ram[376] = "0b0000000000000000000000000111100110100000";
        ram[377] = "0b0000000000000000000000000111110110000000";
        ram[378] = "0b0000000000000000000000001000010100000000";
        ram[379] = "0b0000000000000000000000000111101010100000";
        ram[380] = "0b0000000000000000000000000111110101010000";
        ram[381] = "0b0000000000000000000000000111011011010000";
        ram[382] = "0b0000000000000000000000000111100100000000";
        ram[383] = "0b0000000000000000000000001000000010000000";


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


SC_MODULE(attention_ln_weigqcK) {


static const unsigned DataWidth = 40;
static const unsigned AddressRange = 384;
static const unsigned AddressWidth = 9;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


attention_ln_weigqcK_ram* meminst;


SC_CTOR(attention_ln_weigqcK) {
meminst = new attention_ln_weigqcK_ram("attention_ln_weigqcK_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~attention_ln_weigqcK() {
    delete meminst;
}


};//endmodule
#endif