// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __cache_update_k_cakbM_H__
#define __cache_update_k_cakbM_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct cache_update_k_cakbM_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 20;
  static const unsigned AddressRange = 480;
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


   SC_CTOR(cache_update_k_cakbM_ram) {
        ram[0] = "0b00000000000101000010";
        ram[1] = "0b00000001010001111110";
        ram[2] = "0b11111101100100110111";
        ram[3] = "0b00000001000110101000";
        ram[4] = "0b11111111111101011110";
        ram[5] = "0b00000001000001100101";
        ram[6] = "0b11111010101010001101";
        ram[7] = "0b11111110000100011001";
        ram[8] = "0b11111110100010101010";
        ram[9] = "0b00000000001011010110";
        ram[10] = "0b11111111011101111100";
        ram[11] = "0b11111111101010100011";
        ram[12] = "0b11111111100001101110";
        ram[13] = "0b11111011111010111011";
        ram[14] = "0b11111011001011000000";
        ram[15] = "0b00000000011101000000";
        ram[16] = "0b00000001011001100010";
        ram[17] = "0b11111110110000100010";
        ram[18] = "0b11111001011100000001";
        ram[19] = "0b11111100110110001101";
        ram[20] = "0b11110110101011011101";
        ram[21] = "0b11110011100101011100";
        ram[22] = "0b11110111001001101110";
        ram[23] = "0b00000111101101001000";
        ram[24] = "0b00101001001001010110";
        ram[25] = "0b11010100011111110100";
        ram[26] = "0b00101000001110111010";
        ram[27] = "0b10111011101000110111";
        ram[28] = "0b11001011010011110101";
        ram[29] = "0b11010011011001001000";
        ram[30] = "0b11000101100100001101";
        ram[31] = "0b11111010001101100110";
        ram[32] = "0b11000111101100111110";
        ram[33] = "0b11011101000111011000";
        ram[34] = "0b00010000011110010010";
        ram[35] = "0b11100111000110010001";
        ram[36] = "0b11101010010001100110";
        ram[37] = "0b11111010001001101111";
        ram[38] = "0b11101110001110000111";
        ram[39] = "0b00000001000000011111";
        ram[40] = "0b11111100011100001101";
        ram[41] = "0b11100001001010101100";
        ram[42] = "0b11011010100001000110";
        ram[43] = "0b11010010101001000100";
        ram[44] = "0b11011000010001111111";
        ram[45] = "0b11011110101010111000";
        ram[46] = "0b11101000101101111110";
        ram[47] = "0b00100100111001110110";
        ram[48] = "0b00111100101101001101";
        ram[49] = "0b11100111010010000111";
        ram[50] = "0b11110010010010010101";
        ram[51] = "0b11010001111101010110";
        ram[52] = "0b11100001011111001101";
        ram[53] = "0b11100011001111100100";
        ram[54] = "0b11100010111000011101";
        ram[55] = "0b11101101000101100010";
        ram[56] = "0b00000100101000111111";
        ram[57] = "0b11111001011011011111";
        ram[58] = "0b00001110101110001000";
        ram[59] = "0b11100111111010000110";
        ram[60] = "0b11100101111001001111";
        ram[61] = "0b11110101100110110011";
        ram[62] = "0b11101111000000010010";
        ram[63] = "0b00010000111111011101";
        ram[64] = "0b00011101001011011000";
        ram[65] = "0b00000001110101001010";
        ram[66] = "0b11100011111110010101";
        ram[67] = "0b11100101100000110011";
        ram[68] = "0b11101111000010111000";
        ram[69] = "0b00001010000101100011";
        ram[70] = "0b11100101110111110001";
        ram[71] = "0b00010001000001101000";
        ram[72] = "0b00011000000001101001";
        ram[73] = "0b00001001010000111011";
        ram[74] = "0b00010010111110101001";
        ram[75] = "0b11111001101111001111";
        ram[76] = "0b11101111110111000110";
        ram[77] = "0b11110110100101111111";
        ram[78] = "0b11111100111000010011";
        ram[79] = "0b11110111010111010111";
        ram[80] = "0b11010001110000100111";
        ram[81] = "0b00010000001111101100";
        ram[82] = "0b00010011001000000100";
        ram[83] = "0b11101000010110101100";
        ram[84] = "0b11110000010101001111";
        ram[85] = "0b11111001001100111110";
        ram[86] = "0b11110100011110000111";
        ram[87] = "0b00001101100100001011";
        ram[88] = "0b11110110110011011011";
        ram[89] = "0b11011010011110101001";
        ram[90] = "0b11100010000001011010";
        ram[91] = "0b11101101011111011111";
        ram[92] = "0b11111101001111110011";
        ram[93] = "0b11010110011000110111";
        ram[94] = "0b11110000011001001111";
        ram[95] = "0b00100101110111110010";
        ram[96] = "0b11101011111101010010";
        ram[97] = "0b00011010000011010000";
        ram[98] = "0b11110011001000010001";
        ram[99] = "0b11101110101011010111";
        ram[100] = "0b00000010101100100100";
        ram[101] = "0b00001000110001100111";
        ram[102] = "0b11101000010001000110";
        ram[103] = "0b00011010100111001100";
        ram[104] = "0b00001100111010000110";
        ram[105] = "0b00000101110001100111";
        ram[106] = "0b00011011011110110000";
        ram[107] = "0b11110000011000111000";
        ram[108] = "0b11010111001000101010";
        ram[109] = "0b11110001101100000011";
        ram[110] = "0b11111101111101110010";
        ram[111] = "0b00011100001000011001";
        ram[112] = "0b00000010110101100011";
        ram[113] = "0b11100110011100101010";
        ram[114] = "0b11110010110001110011";
        ram[115] = "0b00001011011001111001";
        ram[116] = "0b11101010011010001101";
        ram[117] = "0b11101001001100100101";
        ram[118] = "0b11110110010110011011";
        ram[119] = "0b11111011100000100011";
        ram[120] = "0b00000010000001111001";
        ram[121] = "0b00000000010101011100";
        ram[122] = "0b00000000001111001000";
        ram[123] = "0b11111101110010101111";
        ram[124] = "0b11111010101111010000";
        ram[125] = "0b00000000111011010001";
        ram[126] = "0b11111111100000011110";
        ram[127] = "0b00000000010001101010";
        ram[128] = "0b11111110010011100010";
        ram[129] = "0b11111110000000100111";
        ram[130] = "0b00000011101011110101";
        ram[131] = "0b11111110100111101101";
        ram[132] = "0b00000000101101011001";
        ram[133] = "0b11111111011011011011";
        ram[134] = "0b00000001000010110101";
        ram[135] = "0b11111111110000110111";
        ram[136] = "0b11111111010010100110";
        ram[137] = "0b00000001001001001001";
        ram[138] = "0b00000001101011001100";
        ram[139] = "0b11111010000001110110";
        ram[140] = "0b11111110101011011111";
        ram[141] = "0b11111010000000100110";
        ram[142] = "0b11101110111101000100";
        ram[143] = "0b00000101001100111101";
        ram[144] = "0b11010110101101110011";
        ram[145] = "0b11111000101010001000";
        ram[146] = "0b00011111100000101010";
        ram[147] = "0b00010100100101111011";
        ram[148] = "0b11110100100101010001";
        ram[149] = "0b11101110010010101111";
        ram[150] = "0b00110110001001100100";
        ram[151] = "0b11110010111011010111";
        ram[152] = "0b00010000100011001101";
        ram[153] = "0b11110011111101101011";
        ram[154] = "0b11011100010101101111";
        ram[155] = "0b11110010100111101110";
        ram[156] = "0b00001011010000110110";
        ram[157] = "0b00101010011111100110";
        ram[158] = "0b11100111001010111101";
        ram[159] = "0b11011110100010111010";
        ram[160] = "0b00010100101010001010";
        ram[161] = "0b00011110101011101110";
        ram[162] = "0b11011010010001000110";
        ram[163] = "0b00000101001111001000";
        ram[164] = "0b00011111001110011000";
        ram[165] = "0b11011000011001000100";
        ram[166] = "0b00000101110010001010";
        ram[167] = "0b00011001100010100000";
        ram[168] = "0b11011010000100101110";
        ram[169] = "0b11100001110010101010";
        ram[170] = "0b01000110010100010101";
        ram[171] = "0b00100100111100001011";
        ram[172] = "0b00001010001100100010";
        ram[173] = "0b11001000001000111010";
        ram[174] = "0b00101001010101111110";
        ram[175] = "0b11100000100001000010";
        ram[176] = "0b00010011110101000001";
        ram[177] = "0b11110111000100101111";
        ram[178] = "0b11001100101101111110";
        ram[179] = "0b11010111000111111111";
        ram[180] = "0b00010000111100100111";
        ram[181] = "0b00011011101010110001";
        ram[182] = "0b11101110101010011000";
        ram[183] = "0b11101101010000111010";
        ram[184] = "0b00000011001011011110";
        ram[185] = "0b00011101001010010110";
        ram[186] = "0b11101001000110000000";
        ram[187] = "0b11101101111100111011";
        ram[188] = "0b00001110011111100101";
        ram[189] = "0b11001100100111111101";
        ram[190] = "0b11101000010011001000";
        ram[191] = "0b00011001011101011000";
        ram[192] = "0b00000111101110111010";
        ram[193] = "0b11010110110110010110";
        ram[194] = "0b00101101011110011010";
        ram[195] = "0b11111011000011010001";
        ram[196] = "0b11110100000000010011";
        ram[197] = "0b11101001110100001011";
        ram[198] = "0b00001100010100101011";
        ram[199] = "0b11101011111011001000";
        ram[200] = "0b11111011010101101000";
        ram[201] = "0b11101101101010011100";
        ram[202] = "0b11011101000111001111";
        ram[203] = "0b11101001011100111011";
        ram[204] = "0b00100001101001011001";
        ram[205] = "0b00100001100011000010";
        ram[206] = "0b11101101000101111001";
        ram[207] = "0b11011101110110111110";
        ram[208] = "0b11110100110110001011";
        ram[209] = "0b11111010110000101101";
        ram[210] = "0b11010110010100010111";
        ram[211] = "0b11101001101001110010";
        ram[212] = "0b00010010010101110110";
        ram[213] = "0b11100001001000110010";
        ram[214] = "0b11111001010011100000";
        ram[215] = "0b00000100101001111101";
        ram[216] = "0b00010101001000100100";
        ram[217] = "0b11101001100010000100";
        ram[218] = "0b00000011011111010110";
        ram[219] = "0b11101111001111111001";
        ram[220] = "0b11110001110100111001";
        ram[221] = "0b00010110011111110010";
        ram[222] = "0b00000101111111100100";
        ram[223] = "0b00001111011010101110";
        ram[224] = "0b11110000111110010100";
        ram[225] = "0b11101001001110000010";
        ram[226] = "0b00000000011100001001";
        ram[227] = "0b11101101011110101011";
        ram[228] = "0b00001110110000110100";
        ram[229] = "0b00001101011001011110";
        ram[230] = "0b00000011110010010000";
        ram[231] = "0b11101111001100110110";
        ram[232] = "0b00001011111100111110";
        ram[233] = "0b11111110001110011111";
        ram[234] = "0b11101101000011010110";
        ram[235] = "0b00000001000100011011";
        ram[236] = "0b00000111010111101111";
        ram[237] = "0b11101101010010110001";
        ram[238] = "0b11110010001001111011";
        ram[239] = "0b00100001001011110011";
        ram[240] = "0b00000010110011000101";
        ram[241] = "0b11111111010101000111";
        ram[242] = "0b00000001001001001001";
        ram[243] = "0b11111111010011110110";
        ram[244] = "0b11111101100001000101";
        ram[245] = "0b11111111110101111010";
        ram[246] = "0b11111111101111100110";
        ram[247] = "0b00000000010100001011";
        ram[248] = "0b11111101111010010100";
        ram[249] = "0b11111010001011111100";
        ram[250] = "0b00000010110001110101";
        ram[251] = "0b00000001001110001100";
        ram[252] = "0b11111101000101010101";
        ram[253] = "0b11111110100101001100";
        ram[254] = "0b11111101110001011111";
        ram[255] = "0b00000010100001011011";
        ram[256] = "0b11111111100010111111";
        ram[257] = "0b11111100011010011101";
        ram[258] = "0b11111001010110111110";
        ram[259] = "0b00000010010111010101";
        ram[260] = "0b11111111100000011110";
        ram[261] = "0b11111100111111000010";
        ram[262] = "0b11111111110111001010";
        ram[263] = "0b00000010100111101111";
        ram[264] = "0b11100000010011111010";
        ram[265] = "0b00010000100001011101";
        ram[266] = "0b00010111101010111111";
        ram[267] = "0b00100000100000111010";
        ram[268] = "0b00010101110110010100";
        ram[269] = "0b11100101110011110010";
        ram[270] = "0b00010100011011010111";
        ram[271] = "0b00011110110001011010";
        ram[272] = "0b11001100111000100110";
        ram[273] = "0b00011000100110010011";
        ram[274] = "0b00001110111010010110";
        ram[275] = "0b11101001010110011101";
        ram[276] = "0b00011100110011001100";
        ram[277] = "0b11010111010000010101";
        ram[278] = "0b00000010111010000001";
        ram[279] = "0b11011101101001000111";
        ram[280] = "0b00001110000001110100";
        ram[281] = "0b11111011011001001100";
        ram[282] = "0b11111100111100110010";
        ram[283] = "0b11111001110011111000";
        ram[284] = "0b00001010100001011110";
        ram[285] = "0b00000011100010011111";
        ram[286] = "0b00010101101111011010";
        ram[287] = "0b00001000001000000100";
        ram[288] = "0b00011100100100010101";
        ram[289] = "0b00100011111111110100";
        ram[290] = "0b11100101000101001011";
        ram[291] = "0b00111011010000110111";
        ram[292] = "0b00011000111101111001";
        ram[293] = "0b11011111001101001010";
        ram[294] = "0b00011110111101110100";
        ram[295] = "0b00010110011110001001";
        ram[296] = "0b11000000010010100010";
        ram[297] = "0b00110000101111010100";
        ram[298] = "0b00000010100010100000";
        ram[299] = "0b11110100100001110001";
        ram[300] = "0b00001000110011010110";
        ram[301] = "0b11100011000101100100";
        ram[302] = "0b11011110001011101011";
        ram[303] = "0b11101110001001011101";
        ram[304] = "0b00010101010000011011";
        ram[305] = "0b00011101000001001001";
        ram[306] = "0b11100100000101010111";
        ram[307] = "0b11101101111001101010";
        ram[308] = "0b11111110001100001110";
        ram[309] = "0b11100110010011101001";
        ram[310] = "0b00000001100000110110";
        ram[311] = "0b00101101010000111010";
        ram[312] = "0b00011001101011011001";
        ram[313] = "0b11100011000101110001";
        ram[314] = "0b11001011000001100000";
        ram[315] = "0b00101011101111100011";
        ram[316] = "0b00101010011001011111";
        ram[317] = "0b00100011111000001001";
        ram[318] = "0b11111100100100100011";
        ram[319] = "0b11111110001011101111";
        ram[320] = "0b11001110011101111100";
        ram[321] = "0b00011100001011000110";
        ram[322] = "0b11110101111011111111";
        ram[323] = "0b11010000100100111011";
        ram[324] = "0b11111101001111100001";
        ram[325] = "0b11010110011100111101";
        ram[326] = "0b00100000110101010001";
        ram[327] = "0b11100001001101000011";
        ram[328] = "0b00001010011110011001";
        ram[329] = "0b00110101001011111000";
        ram[330] = "0b11101001011011000001";
        ram[331] = "0b11110110111110100000";
        ram[332] = "0b00010101101101001010";
        ram[333] = "0b11001011110000010110";
        ram[334] = "0b00011111100001000010";
        ram[335] = "0b00000101000001010100";
        ram[336] = "0b00001110001111000011";
        ram[337] = "0b11111011000000011111";
        ram[338] = "0b00001101011010101000";
        ram[339] = "0b11110101001100110101";
        ram[340] = "0b11110011110101100000";
        ram[341] = "0b11111110101000000111";
        ram[342] = "0b00001100010101110110";
        ram[343] = "0b00000010100111001011";
        ram[344] = "0b00000101110101001011";
        ram[345] = "0b11111001111100010000";
        ram[346] = "0b00001000001001101001";
        ram[347] = "0b00011100000011100011";
        ram[348] = "0b00001000101100001000";
        ram[349] = "0b00000001111011011010";
        ram[350] = "0b11111010010101100010";
        ram[351] = "0b00001110000101101000";
        ram[352] = "0b00000011010011100000";
        ram[353] = "0b00000100001110000101";
        ram[354] = "0b11110011110001010011";
        ram[355] = "0b11101100000010100011";
        ram[356] = "0b00010100011101010011";
        ram[357] = "0b11110000110001101001";
        ram[358] = "0b00010001110110001101";
        ram[359] = "0b00010000010000111000";
        ram[360] = "0b00000000001100100111";
        ram[361] = "0b11111111101111100110";
        ram[362] = "0b00000000011011101111";
        ram[363] = "0b11111100111111000010";
        ram[364] = "0b11111111001000100000";
        ram[365] = "0b00000001101110111111";
        ram[366] = "0b11111111111100001101";
        ram[367] = "0b00000010010011100011";
        ram[368] = "0b00000001101100011101";
        ram[369] = "0b11111110011110111000";
        ram[370] = "0b00000001011000010010";
        ram[371] = "0b11111110001111110000";
        ram[372] = "0b00000001011000010010";
        ram[373] = "0b11111110111001010111";
        ram[374] = "0b00000011010011111000";
        ram[375] = "0b00000001010000101101";
        ram[376] = "0b00000010001001011110";
        ram[377] = "0b11111001001010010111";
        ram[378] = "0b11111010110011000010";
        ram[379] = "0b00000101001010011011";
        ram[380] = "0b00000100110011101110";
        ram[381] = "0b11110111001001101110";
        ram[382] = "0b11110101100010010011";
        ram[383] = "0b00000110110011000111";
        ram[384] = "0b11110010000011101100";
        ram[385] = "0b11110011010101110011";
        ram[386] = "0b00011110000011010100";
        ram[387] = "0b00001000001000001000";
        ram[388] = "0b00010100101000010100";
        ram[389] = "0b11111100010101110000";
        ram[390] = "0b11011011000011100010";
        ram[391] = "0b00001000000100110011";
        ram[392] = "0b00000001000110100111";
        ram[393] = "0b00010111010101010000";
        ram[394] = "0b11010100100010000110";
        ram[395] = "0b00010011110100111011";
        ram[396] = "0b11101011111110111000";
        ram[397] = "0b11110001100110010111";
        ram[398] = "0b11101100110011101000";
        ram[399] = "0b11101100100000010001";
        ram[400] = "0b11101111011010010001";
        ram[401] = "0b11100110100100110001";
        ram[402] = "0b11111100000000001001";
        ram[403] = "0b00100010011000100111";
        ram[404] = "0b00010011110101110011";
        ram[405] = "0b11101101010101101011";
        ram[406] = "0b11101101010001001011";
        ram[407] = "0b00110110011111001101";
        ram[408] = "0b11011111110111000100";
        ram[409] = "0b11110110111110100110";
        ram[410] = "0b00011001111000110101";
        ram[411] = "0b11110110001001010010";
        ram[412] = "0b00010001111001000111";
        ram[413] = "0b00010111011011010100";
        ram[414] = "0b11010110010010001100";
        ram[415] = "0b11111001100100001111";
        ram[416] = "0b00000110111110100101";
        ram[417] = "0b00011111100001001011";
        ram[418] = "0b00001101000000101101";
        ram[419] = "0b00010011110101110011";
        ram[420] = "0b11110011100101101101";
        ram[421] = "0b00001011011010101011";
        ram[422] = "0b11010000010001111100";
        ram[423] = "0b11110111010001001100";
        ram[424] = "0b11111011100111001101";
        ram[425] = "0b11100110110000011001";
        ram[426] = "0b11100010001100101011";
        ram[427] = "0b00101010001011011101";
        ram[428] = "0b00010100101011011010";
        ram[429] = "0b11110111100100100001";
        ram[430] = "0b11110000010011110000";
        ram[431] = "0b00011110111110000101";
        ram[432] = "0b11100111011010000000";
        ram[433] = "0b00001000001101111011";
        ram[434] = "0b00011101001111110100";
        ram[435] = "0b11001100001011111111";
        ram[436] = "0b00000111110111111100";
        ram[437] = "0b00100000000001000001";
        ram[438] = "0b11111100000010100010";
        ram[439] = "0b11101001011010010001";
        ram[440] = "0b11111110001110110000";
        ram[441] = "0b00000001100100101101";
        ram[442] = "0b11110110110101111010";
        ram[443] = "0b00110000010001100110";
        ram[444] = "0b11100000001110110010";
        ram[445] = "0b00001010000001011011";
        ram[446] = "0b11100110000011101101";
        ram[447] = "0b11111100001010110101";
        ram[448] = "0b11110010111111000001";
        ram[449] = "0b11100011111000000111";
        ram[450] = "0b11101101011111101001";
        ram[451] = "0b11111110111110011100";
        ram[452] = "0b00100110010000011101";
        ram[453] = "0b11101101110010100111";
        ram[454] = "0b11001011011000111001";
        ram[455] = "0b00010000101100010111";
        ram[456] = "0b00000010011111111111";
        ram[457] = "0b00001000110110111110";
        ram[458] = "0b00001010000101110110";
        ram[459] = "0b11101010111001011001";
        ram[460] = "0b00000100101110100011";
        ram[461] = "0b11111110011100111101";
        ram[462] = "0b00000111001001100011";
        ram[463] = "0b11101111010101010111";
        ram[464] = "0b11110111000011011010";
        ram[465] = "0b00000110101111100101";
        ram[466] = "0b00000101011011000110";
        ram[467] = "0b00000011000101000111";
        ram[468] = "0b11111011011011000100";
        ram[469] = "0b11111010010110011011";
        ram[470] = "0b11100111100100111000";
        ram[471] = "0b00010010111101000011";
        ram[472] = "0b00000100011101111100";
        ram[473] = "0b11110100101101010101";
        ram[474] = "0b11100111111001001100";
        ram[475] = "0b00000110011110110110";
        ram[476] = "0b00000000000010000010";
        ram[477] = "0b00000101011110101100";
        ram[478] = "0b00000100101100000000";
        ram[479] = "0b00010111110100001101";


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


SC_MODULE(cache_update_k_cakbM) {


static const unsigned DataWidth = 20;
static const unsigned AddressRange = 480;
static const unsigned AddressWidth = 9;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


cache_update_k_cakbM_ram* meminst;


SC_CTOR(cache_update_k_cakbM) {
meminst = new cache_update_k_cakbM_ram("cache_update_k_cakbM_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~cache_update_k_cakbM() {
    delete meminst;
}


};//endmodule
#endif