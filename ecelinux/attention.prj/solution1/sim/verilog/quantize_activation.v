// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module quantize_activation (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        input_0_V_address0,
        input_0_V_ce0,
        input_0_V_q0,
        input_0_V_address1,
        input_0_V_ce1,
        input_0_V_q1,
        output_states_0_V_address0,
        output_states_0_V_ce0,
        output_states_0_V_we0,
        output_states_0_V_d0,
        ap_return
);

parameter    ap_ST_fsm_state1 = 67'd1;
parameter    ap_ST_fsm_state2 = 67'd2;
parameter    ap_ST_fsm_state3 = 67'd4;
parameter    ap_ST_fsm_state4 = 67'd8;
parameter    ap_ST_fsm_state5 = 67'd16;
parameter    ap_ST_fsm_state6 = 67'd32;
parameter    ap_ST_fsm_state7 = 67'd64;
parameter    ap_ST_fsm_state8 = 67'd128;
parameter    ap_ST_fsm_state9 = 67'd256;
parameter    ap_ST_fsm_state10 = 67'd512;
parameter    ap_ST_fsm_state11 = 67'd1024;
parameter    ap_ST_fsm_state12 = 67'd2048;
parameter    ap_ST_fsm_state13 = 67'd4096;
parameter    ap_ST_fsm_state14 = 67'd8192;
parameter    ap_ST_fsm_state15 = 67'd16384;
parameter    ap_ST_fsm_state16 = 67'd32768;
parameter    ap_ST_fsm_state17 = 67'd65536;
parameter    ap_ST_fsm_state18 = 67'd131072;
parameter    ap_ST_fsm_state19 = 67'd262144;
parameter    ap_ST_fsm_state20 = 67'd524288;
parameter    ap_ST_fsm_state21 = 67'd1048576;
parameter    ap_ST_fsm_state22 = 67'd2097152;
parameter    ap_ST_fsm_state23 = 67'd4194304;
parameter    ap_ST_fsm_state24 = 67'd8388608;
parameter    ap_ST_fsm_state25 = 67'd16777216;
parameter    ap_ST_fsm_state26 = 67'd33554432;
parameter    ap_ST_fsm_state27 = 67'd67108864;
parameter    ap_ST_fsm_state28 = 67'd134217728;
parameter    ap_ST_fsm_state29 = 67'd268435456;
parameter    ap_ST_fsm_state30 = 67'd536870912;
parameter    ap_ST_fsm_state31 = 67'd1073741824;
parameter    ap_ST_fsm_state32 = 67'd2147483648;
parameter    ap_ST_fsm_state33 = 67'd4294967296;
parameter    ap_ST_fsm_state34 = 67'd8589934592;
parameter    ap_ST_fsm_state35 = 67'd17179869184;
parameter    ap_ST_fsm_state36 = 67'd34359738368;
parameter    ap_ST_fsm_state37 = 67'd68719476736;
parameter    ap_ST_fsm_state38 = 67'd137438953472;
parameter    ap_ST_fsm_state39 = 67'd274877906944;
parameter    ap_ST_fsm_state40 = 67'd549755813888;
parameter    ap_ST_fsm_state41 = 67'd1099511627776;
parameter    ap_ST_fsm_state42 = 67'd2199023255552;
parameter    ap_ST_fsm_state43 = 67'd4398046511104;
parameter    ap_ST_fsm_state44 = 67'd8796093022208;
parameter    ap_ST_fsm_state45 = 67'd17592186044416;
parameter    ap_ST_fsm_state46 = 67'd35184372088832;
parameter    ap_ST_fsm_state47 = 67'd70368744177664;
parameter    ap_ST_fsm_state48 = 67'd140737488355328;
parameter    ap_ST_fsm_state49 = 67'd281474976710656;
parameter    ap_ST_fsm_state50 = 67'd562949953421312;
parameter    ap_ST_fsm_state51 = 67'd1125899906842624;
parameter    ap_ST_fsm_state52 = 67'd2251799813685248;
parameter    ap_ST_fsm_state53 = 67'd4503599627370496;
parameter    ap_ST_fsm_state54 = 67'd9007199254740992;
parameter    ap_ST_fsm_state55 = 67'd18014398509481984;
parameter    ap_ST_fsm_state56 = 67'd36028797018963968;
parameter    ap_ST_fsm_state57 = 67'd72057594037927936;
parameter    ap_ST_fsm_state58 = 67'd144115188075855872;
parameter    ap_ST_fsm_state59 = 67'd288230376151711744;
parameter    ap_ST_fsm_state60 = 67'd576460752303423488;
parameter    ap_ST_fsm_state61 = 67'd1152921504606846976;
parameter    ap_ST_fsm_state62 = 67'd2305843009213693952;
parameter    ap_ST_fsm_state63 = 67'd4611686018427387904;
parameter    ap_ST_fsm_state64 = 67'd9223372036854775808;
parameter    ap_ST_fsm_state65 = 67'd18446744073709551616;
parameter    ap_ST_fsm_pp0_stage0 = 67'd36893488147419103232;
parameter    ap_ST_fsm_state71 = 67'd73786976294838206464;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [3:0] input_0_V_address0;
output   input_0_V_ce0;
input  [31:0] input_0_V_q0;
output  [3:0] input_0_V_address1;
output   input_0_V_ce1;
input  [31:0] input_0_V_q1;
output  [3:0] output_states_0_V_address0;
output   output_states_0_V_ce0;
output   output_states_0_V_we0;
output  [7:0] output_states_0_V_d0;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[3:0] input_0_V_address0;
reg input_0_V_ce0;
reg[3:0] input_0_V_address1;
reg input_0_V_ce1;
reg output_states_0_V_ce0;
reg output_states_0_V_we0;

(* fsm_encoding = "none" *) reg   [66:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [4:0] j1_0_0_reg_280;
wire   [31:0] grp_fu_305_p3;
reg   [31:0] reg_335;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state9;
wire   [30:0] select_ln100_fu_351_p3;
reg   [30:0] select_ln100_reg_842;
wire    ap_CS_fsm_state2;
wire   [30:0] trunc_ln58_1_fu_362_p1;
reg   [30:0] trunc_ln58_1_reg_858;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln1494_fu_366_p2;
reg   [0:0] icmp_ln1494_reg_863;
wire   [31:0] grp_fu_327_p3;
reg   [31:0] p_Val2_15_reg_868;
wire   [30:0] trunc_ln58_2_fu_372_p1;
reg   [30:0] trunc_ln58_2_reg_873;
wire   [30:0] select_ln100_3_fu_390_p3;
reg   [30:0] select_ln100_3_reg_888;
wire   [30:0] trunc_ln58_3_fu_401_p1;
reg   [30:0] trunc_ln58_3_reg_893;
wire   [0:0] icmp_ln1494_3_fu_405_p2;
reg   [0:0] icmp_ln1494_3_reg_898;
wire   [30:0] trunc_ln58_4_fu_411_p1;
reg   [30:0] trunc_ln58_4_reg_903;
wire   [30:0] select_ln100_5_fu_430_p3;
reg   [30:0] select_ln100_5_reg_918;
wire   [30:0] trunc_ln58_5_fu_441_p1;
reg   [30:0] trunc_ln58_5_reg_923;
wire   [0:0] icmp_ln1494_5_fu_445_p2;
reg   [0:0] icmp_ln1494_5_reg_928;
wire   [30:0] trunc_ln58_6_fu_451_p1;
reg   [30:0] trunc_ln58_6_reg_933;
wire   [30:0] select_ln100_7_fu_470_p3;
reg   [30:0] select_ln100_7_reg_948;
wire   [30:0] trunc_ln58_7_fu_481_p1;
reg   [30:0] trunc_ln58_7_reg_953;
wire   [0:0] icmp_ln1494_7_fu_485_p2;
reg   [0:0] icmp_ln1494_7_reg_958;
wire   [30:0] trunc_ln58_8_fu_491_p1;
reg   [30:0] trunc_ln58_8_reg_963;
wire   [30:0] select_ln100_9_fu_510_p3;
reg   [30:0] select_ln100_9_reg_978;
wire   [30:0] trunc_ln58_9_fu_521_p1;
reg   [30:0] trunc_ln58_9_reg_983;
wire   [0:0] icmp_ln1494_9_fu_525_p2;
reg   [0:0] icmp_ln1494_9_reg_988;
wire   [30:0] trunc_ln58_10_fu_531_p1;
reg   [30:0] trunc_ln58_10_reg_993;
wire   [30:0] select_ln100_11_fu_550_p3;
reg   [30:0] select_ln100_11_reg_1008;
wire   [30:0] trunc_ln58_11_fu_561_p1;
reg   [30:0] trunc_ln58_11_reg_1013;
wire   [0:0] icmp_ln1494_11_fu_565_p2;
reg   [0:0] icmp_ln1494_11_reg_1018;
wire   [30:0] trunc_ln58_12_fu_571_p1;
reg   [30:0] trunc_ln58_12_reg_1023;
wire   [30:0] select_ln100_13_fu_590_p3;
reg   [30:0] select_ln100_13_reg_1038;
wire   [30:0] trunc_ln58_13_fu_601_p1;
reg   [30:0] trunc_ln58_13_reg_1043;
wire   [0:0] icmp_ln1494_13_fu_605_p2;
reg   [0:0] icmp_ln1494_13_reg_1048;
wire   [30:0] trunc_ln58_14_fu_611_p1;
reg   [30:0] trunc_ln58_14_reg_1053;
wire   [30:0] select_ln100_15_fu_630_p3;
reg   [30:0] select_ln100_15_reg_1063;
wire    ap_CS_fsm_state10;
wire   [30:0] trunc_ln58_15_fu_641_p1;
reg   [30:0] trunc_ln58_15_reg_1068;
wire   [0:0] icmp_ln1494_15_fu_645_p2;
reg   [0:0] icmp_ln1494_15_reg_1073;
wire    ap_CS_fsm_state11;
wire  signed [31:0] trunc_ln703_fu_680_p1;
reg  signed [31:0] trunc_ln703_reg_1083;
wire    ap_CS_fsm_state65;
wire  signed [53:0] sext_ln134_fu_684_p1;
reg  signed [53:0] sext_ln134_reg_1087;
wire   [0:0] icmp_ln134_fu_688_p2;
reg   [0:0] icmp_ln134_reg_1092;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state66_pp0_stage0_iter0;
wire    ap_block_state67_pp0_stage0_iter1;
wire    ap_block_state68_pp0_stage0_iter2;
wire    ap_block_state69_pp0_stage0_iter3;
wire    ap_block_state70_pp0_stage0_iter4;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln134_reg_1092_pp0_iter1_reg;
reg   [0:0] icmp_ln134_reg_1092_pp0_iter2_reg;
reg   [0:0] icmp_ln134_reg_1092_pp0_iter3_reg;
wire   [4:0] add_ln134_fu_694_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [63:0] zext_ln135_fu_700_p1;
reg   [63:0] zext_ln135_reg_1101;
reg   [63:0] zext_ln135_reg_1101_pp0_iter1_reg;
reg   [63:0] zext_ln135_reg_1101_pp0_iter2_reg;
reg   [63:0] zext_ln135_reg_1101_pp0_iter3_reg;
reg   [31:0] input_0_V_load_reg_1111;
reg    ap_enable_reg_pp0_iter1;
reg   [31:0] p_Val2_42_reg_1116;
wire   [9:0] select_ln850_fu_783_p3;
reg   [9:0] select_ln850_reg_1122;
reg   [2:0] tmp_27_reg_1128;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state66;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
wire    ap_block_pp0_stage0;
wire   [0:0] grp_fu_291_p3;
wire   [31:0] grp_fu_299_p2;
wire   [0:0] grp_fu_313_p3;
wire   [31:0] grp_fu_321_p2;
wire   [0:0] tmp_10_fu_343_p3;
wire   [30:0] trunc_ln58_fu_339_p1;
wire   [31:0] zext_ln100_fu_359_p1;
wire   [30:0] select_ln100_2_fu_376_p3;
wire   [31:0] zext_ln100_1_fu_381_p1;
wire   [0:0] icmp_ln1494_2_fu_385_p2;
wire   [31:0] zext_ln100_2_fu_397_p1;
wire   [30:0] select_ln100_4_fu_415_p3;
wire   [31:0] zext_ln100_3_fu_420_p1;
wire   [0:0] icmp_ln1494_4_fu_424_p2;
wire   [31:0] zext_ln100_4_fu_437_p1;
wire   [30:0] select_ln100_6_fu_455_p3;
wire   [31:0] zext_ln100_5_fu_460_p1;
wire   [0:0] icmp_ln1494_6_fu_464_p2;
wire   [31:0] zext_ln100_6_fu_477_p1;
wire   [30:0] select_ln100_8_fu_495_p3;
wire   [31:0] zext_ln100_7_fu_500_p1;
wire   [0:0] icmp_ln1494_8_fu_504_p2;
wire   [31:0] zext_ln100_8_fu_517_p1;
wire   [30:0] select_ln100_10_fu_535_p3;
wire   [31:0] zext_ln100_9_fu_540_p1;
wire   [0:0] icmp_ln1494_10_fu_544_p2;
wire   [31:0] zext_ln100_10_fu_557_p1;
wire   [30:0] select_ln100_12_fu_575_p3;
wire   [31:0] zext_ln100_11_fu_580_p1;
wire   [0:0] icmp_ln1494_12_fu_584_p2;
wire   [31:0] zext_ln100_12_fu_597_p1;
wire   [30:0] select_ln100_14_fu_615_p3;
wire   [31:0] zext_ln100_13_fu_620_p1;
wire   [0:0] icmp_ln1494_14_fu_624_p2;
wire   [31:0] zext_ln100_14_fu_637_p1;
wire   [30:0] select_ln100_16_fu_651_p3;
wire   [0:0] icmp_ln1494_16_fu_656_p2;
wire   [30:0] select_ln100_17_fu_662_p3;
wire   [30:0] grp_fu_674_p1;
wire   [31:0] grp_fu_674_p2;
wire  signed [31:0] mul_ln1118_fu_708_p0;
wire  signed [31:0] mul_ln1118_fu_708_p1;
wire   [53:0] mul_ln1118_fu_708_p2;
wire   [0:0] icmp_ln1494_17_fu_723_p2;
wire   [31:0] select_ln107_fu_728_p3;
wire   [31:0] add_ln107_fu_736_p2;
wire   [21:0] trunc_ln851_fu_759_p1;
wire   [9:0] p_Result_s_fu_741_p4;
wire   [0:0] icmp_ln851_fu_763_p2;
wire   [9:0] add_ln700_fu_769_p2;
wire   [0:0] tmp_26_fu_751_p3;
wire   [9:0] select_ln851_fu_775_p3;
wire   [0:0] icmp_ln887_fu_801_p2;
wire   [0:0] icmp_ln895_fu_806_p2;
wire   [0:0] or_ln887_fu_822_p2;
wire   [7:0] select_ln887_fu_814_p3;
wire   [7:0] trunc_ln136_fu_811_p1;
reg    grp_fu_674_ap_start;
wire    grp_fu_674_ap_done;
wire    ap_CS_fsm_state71;
reg   [66:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [50:0] grp_fu_674_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 67'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
end

dut_udiv_51s_31nseOg #(
    .ID( 1 ),
    .NUM_STAGE( 55 ),
    .din0_WIDTH( 51 ),
    .din1_WIDTH( 31 ),
    .dout_WIDTH( 32 ))
dut_udiv_51s_31nseOg_U9(
    .clk(ap_clk),
    .reset(ap_rst),
    .start(grp_fu_674_ap_start),
    .done(grp_fu_674_ap_done),
    .din0(51'd2234207627640832),
    .din1(grp_fu_674_p1),
    .ce(1'b1),
    .dout(grp_fu_674_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state66) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state65)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state66)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state66);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end else if ((1'b1 == ap_CS_fsm_state65)) begin
            ap_enable_reg_pp0_iter4 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln134_fu_688_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        j1_0_0_reg_280 <= add_ln134_fu_694_p2;
    end else if ((1'b1 == ap_CS_fsm_state65)) begin
        j1_0_0_reg_280 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln134_reg_1092 <= icmp_ln134_fu_688_p2;
        icmp_ln134_reg_1092_pp0_iter1_reg <= icmp_ln134_reg_1092;
        zext_ln135_reg_1101_pp0_iter1_reg[4 : 0] <= zext_ln135_reg_1101[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        icmp_ln134_reg_1092_pp0_iter2_reg <= icmp_ln134_reg_1092_pp0_iter1_reg;
        icmp_ln134_reg_1092_pp0_iter3_reg <= icmp_ln134_reg_1092_pp0_iter2_reg;
        zext_ln135_reg_1101_pp0_iter2_reg[4 : 0] <= zext_ln135_reg_1101_pp0_iter1_reg[4 : 0];
        zext_ln135_reg_1101_pp0_iter3_reg[4 : 0] <= zext_ln135_reg_1101_pp0_iter2_reg[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        icmp_ln1494_11_reg_1018 <= icmp_ln1494_11_fu_565_p2;
        select_ln100_11_reg_1008 <= select_ln100_11_fu_550_p3;
        trunc_ln58_11_reg_1013 <= trunc_ln58_11_fu_561_p1;
        trunc_ln58_12_reg_1023 <= trunc_ln58_12_fu_571_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        icmp_ln1494_13_reg_1048 <= icmp_ln1494_13_fu_605_p2;
        select_ln100_13_reg_1038 <= select_ln100_13_fu_590_p3;
        trunc_ln58_13_reg_1043 <= trunc_ln58_13_fu_601_p1;
        trunc_ln58_14_reg_1053 <= trunc_ln58_14_fu_611_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        icmp_ln1494_15_reg_1073 <= icmp_ln1494_15_fu_645_p2;
        select_ln100_15_reg_1063 <= select_ln100_15_fu_630_p3;
        trunc_ln58_15_reg_1068 <= trunc_ln58_15_fu_641_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        icmp_ln1494_3_reg_898 <= icmp_ln1494_3_fu_405_p2;
        select_ln100_3_reg_888 <= select_ln100_3_fu_390_p3;
        trunc_ln58_3_reg_893 <= trunc_ln58_3_fu_401_p1;
        trunc_ln58_4_reg_903 <= trunc_ln58_4_fu_411_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        icmp_ln1494_5_reg_928 <= icmp_ln1494_5_fu_445_p2;
        select_ln100_5_reg_918 <= select_ln100_5_fu_430_p3;
        trunc_ln58_5_reg_923 <= trunc_ln58_5_fu_441_p1;
        trunc_ln58_6_reg_933 <= trunc_ln58_6_fu_451_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        icmp_ln1494_7_reg_958 <= icmp_ln1494_7_fu_485_p2;
        select_ln100_7_reg_948 <= select_ln100_7_fu_470_p3;
        trunc_ln58_7_reg_953 <= trunc_ln58_7_fu_481_p1;
        trunc_ln58_8_reg_963 <= trunc_ln58_8_fu_491_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        icmp_ln1494_9_reg_988 <= icmp_ln1494_9_fu_525_p2;
        select_ln100_9_reg_978 <= select_ln100_9_fu_510_p3;
        trunc_ln58_10_reg_993 <= trunc_ln58_10_fu_531_p1;
        trunc_ln58_9_reg_983 <= trunc_ln58_9_fu_521_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        icmp_ln1494_reg_863 <= icmp_ln1494_fu_366_p2;
        p_Val2_15_reg_868 <= grp_fu_327_p3;
        trunc_ln58_1_reg_858 <= trunc_ln58_1_fu_362_p1;
        trunc_ln58_2_reg_873 <= trunc_ln58_2_fu_372_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln134_reg_1092 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        input_0_V_load_reg_1111 <= input_0_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln134_reg_1092_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        p_Val2_42_reg_1116 <= {{mul_ln1118_fu_708_p2[53:22]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4))) begin
        reg_335 <= grp_fu_305_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        select_ln100_reg_842 <= select_ln100_fu_351_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln134_reg_1092_pp0_iter2_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        select_ln850_reg_1122 <= select_ln850_fu_783_p3;
        tmp_27_reg_1128 <= {{select_ln850_fu_783_p3[9:7]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state65)) begin
        sext_ln134_reg_1087 <= sext_ln134_fu_684_p1;
        trunc_ln703_reg_1083 <= trunc_ln703_fu_680_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln134_fu_688_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        zext_ln135_reg_1101[4 : 0] <= zext_ln135_fu_700_p1[4 : 0];
    end
end

always @ (*) begin
    if ((icmp_ln134_fu_688_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state66 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state66 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state71) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state71)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_fu_674_ap_start = 1'b1;
    end else begin
        grp_fu_674_ap_start = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        input_0_V_address0 = zext_ln135_fu_700_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        input_0_V_address0 = 64'd14;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        input_0_V_address0 = 64'd12;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        input_0_V_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        input_0_V_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        input_0_V_address0 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        input_0_V_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        input_0_V_address0 = 64'd1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        input_0_V_address0 = 64'd0;
    end else begin
        input_0_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        input_0_V_address1 = 64'd15;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        input_0_V_address1 = 64'd13;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        input_0_V_address1 = 64'd11;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        input_0_V_address1 = 64'd9;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        input_0_V_address1 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        input_0_V_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        input_0_V_address1 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        input_0_V_address1 = 64'd2;
    end else begin
        input_0_V_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        input_0_V_ce0 = 1'b1;
    end else begin
        input_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4))) begin
        input_0_V_ce1 = 1'b1;
    end else begin
        input_0_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        output_states_0_V_ce0 = 1'b1;
    end else begin
        output_states_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln134_reg_1092_pp0_iter3_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        output_states_0_V_we0 = 1'b1;
    end else begin
        output_states_0_V_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        ap_ST_fsm_state47 : begin
            ap_NS_fsm = ap_ST_fsm_state48;
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state50;
        end
        ap_ST_fsm_state50 : begin
            ap_NS_fsm = ap_ST_fsm_state51;
        end
        ap_ST_fsm_state51 : begin
            ap_NS_fsm = ap_ST_fsm_state52;
        end
        ap_ST_fsm_state52 : begin
            ap_NS_fsm = ap_ST_fsm_state53;
        end
        ap_ST_fsm_state53 : begin
            ap_NS_fsm = ap_ST_fsm_state54;
        end
        ap_ST_fsm_state54 : begin
            ap_NS_fsm = ap_ST_fsm_state55;
        end
        ap_ST_fsm_state55 : begin
            ap_NS_fsm = ap_ST_fsm_state56;
        end
        ap_ST_fsm_state56 : begin
            ap_NS_fsm = ap_ST_fsm_state57;
        end
        ap_ST_fsm_state57 : begin
            ap_NS_fsm = ap_ST_fsm_state58;
        end
        ap_ST_fsm_state58 : begin
            ap_NS_fsm = ap_ST_fsm_state59;
        end
        ap_ST_fsm_state59 : begin
            ap_NS_fsm = ap_ST_fsm_state60;
        end
        ap_ST_fsm_state60 : begin
            ap_NS_fsm = ap_ST_fsm_state61;
        end
        ap_ST_fsm_state61 : begin
            ap_NS_fsm = ap_ST_fsm_state62;
        end
        ap_ST_fsm_state62 : begin
            ap_NS_fsm = ap_ST_fsm_state63;
        end
        ap_ST_fsm_state63 : begin
            ap_NS_fsm = ap_ST_fsm_state64;
        end
        ap_ST_fsm_state64 : begin
            ap_NS_fsm = ap_ST_fsm_state65;
        end
        ap_ST_fsm_state65 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (icmp_ln134_fu_688_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1)) & ~((ap_enable_reg_pp0_iter3 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter4 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter3 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter4 == 1'b1)) | ((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (icmp_ln134_fu_688_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_state71;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state71 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln107_fu_736_p2 = (p_Val2_42_reg_1116 + select_ln107_fu_728_p3);

assign add_ln134_fu_694_p2 = (j1_0_0_reg_280 + 5'd1);

assign add_ln700_fu_769_p2 = (10'd1 + p_Result_s_fu_741_p4);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd65];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state65 = ap_CS_fsm[32'd64];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state71 = ap_CS_fsm[32'd66];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state66_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state67_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state68_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state69_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state70_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_return = trunc_ln703_reg_1083;

assign grp_fu_291_p3 = input_0_V_q0[32'd31];

assign grp_fu_299_p2 = (32'd0 - input_0_V_q0);

assign grp_fu_305_p3 = ((grp_fu_291_p3[0:0] === 1'b1) ? grp_fu_299_p2 : input_0_V_q0);

assign grp_fu_313_p3 = input_0_V_q1[32'd31];

assign grp_fu_321_p2 = (32'd0 - input_0_V_q1);

assign grp_fu_327_p3 = ((grp_fu_313_p3[0:0] === 1'b1) ? grp_fu_321_p2 : input_0_V_q1);

assign grp_fu_674_p1 = grp_fu_674_p10;

assign grp_fu_674_p10 = select_ln100_17_fu_662_p3;

assign icmp_ln134_fu_688_p2 = ((j1_0_0_reg_280 == 5'd16) ? 1'b1 : 1'b0);

assign icmp_ln1494_10_fu_544_p2 = (($signed(zext_ln100_9_fu_540_p1) > $signed(reg_335)) ? 1'b1 : 1'b0);

assign icmp_ln1494_11_fu_565_p2 = (($signed(zext_ln100_10_fu_557_p1) > $signed(grp_fu_327_p3)) ? 1'b1 : 1'b0);

assign icmp_ln1494_12_fu_584_p2 = (($signed(zext_ln100_11_fu_580_p1) > $signed(reg_335)) ? 1'b1 : 1'b0);

assign icmp_ln1494_13_fu_605_p2 = (($signed(zext_ln100_12_fu_597_p1) > $signed(grp_fu_327_p3)) ? 1'b1 : 1'b0);

assign icmp_ln1494_14_fu_624_p2 = (($signed(zext_ln100_13_fu_620_p1) > $signed(reg_335)) ? 1'b1 : 1'b0);

assign icmp_ln1494_15_fu_645_p2 = (($signed(zext_ln100_14_fu_637_p1) > $signed(grp_fu_327_p3)) ? 1'b1 : 1'b0);

assign icmp_ln1494_16_fu_656_p2 = ((select_ln100_16_fu_651_p3 > 31'd41) ? 1'b1 : 1'b0);

assign icmp_ln1494_17_fu_723_p2 = (($signed(p_Val2_42_reg_1116) > $signed(32'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_2_fu_385_p2 = (($signed(zext_ln100_1_fu_381_p1) > $signed(p_Val2_15_reg_868)) ? 1'b1 : 1'b0);

assign icmp_ln1494_3_fu_405_p2 = (($signed(zext_ln100_2_fu_397_p1) > $signed(grp_fu_327_p3)) ? 1'b1 : 1'b0);

assign icmp_ln1494_4_fu_424_p2 = (($signed(zext_ln100_3_fu_420_p1) > $signed(reg_335)) ? 1'b1 : 1'b0);

assign icmp_ln1494_5_fu_445_p2 = (($signed(zext_ln100_4_fu_437_p1) > $signed(grp_fu_327_p3)) ? 1'b1 : 1'b0);

assign icmp_ln1494_6_fu_464_p2 = (($signed(zext_ln100_5_fu_460_p1) > $signed(reg_335)) ? 1'b1 : 1'b0);

assign icmp_ln1494_7_fu_485_p2 = (($signed(zext_ln100_6_fu_477_p1) > $signed(grp_fu_327_p3)) ? 1'b1 : 1'b0);

assign icmp_ln1494_8_fu_504_p2 = (($signed(zext_ln100_7_fu_500_p1) > $signed(reg_335)) ? 1'b1 : 1'b0);

assign icmp_ln1494_9_fu_525_p2 = (($signed(zext_ln100_8_fu_517_p1) > $signed(grp_fu_327_p3)) ? 1'b1 : 1'b0);

assign icmp_ln1494_fu_366_p2 = (($signed(zext_ln100_fu_359_p1) > $signed(grp_fu_305_p3)) ? 1'b1 : 1'b0);

assign icmp_ln851_fu_763_p2 = ((trunc_ln851_fu_759_p1 == 22'd0) ? 1'b1 : 1'b0);

assign icmp_ln887_fu_801_p2 = (($signed(select_ln850_reg_1122) < $signed(10'd896)) ? 1'b1 : 1'b0);

assign icmp_ln895_fu_806_p2 = (($signed(tmp_27_reg_1128) > $signed(3'd0)) ? 1'b1 : 1'b0);

assign mul_ln1118_fu_708_p0 = sext_ln134_reg_1087;

assign mul_ln1118_fu_708_p1 = input_0_V_load_reg_1111;

assign mul_ln1118_fu_708_p2 = ($signed(mul_ln1118_fu_708_p0) * $signed(mul_ln1118_fu_708_p1));

assign or_ln887_fu_822_p2 = (icmp_ln895_fu_806_p2 | icmp_ln887_fu_801_p2);

assign output_states_0_V_address0 = zext_ln135_reg_1101_pp0_iter3_reg;

assign output_states_0_V_d0 = ((or_ln887_fu_822_p2[0:0] === 1'b1) ? select_ln887_fu_814_p3 : trunc_ln136_fu_811_p1);

assign p_Result_s_fu_741_p4 = {{add_ln107_fu_736_p2[31:22]}};

assign select_ln100_10_fu_535_p3 = ((icmp_ln1494_9_reg_988[0:0] === 1'b1) ? select_ln100_9_reg_978 : trunc_ln58_9_reg_983);

assign select_ln100_11_fu_550_p3 = ((icmp_ln1494_10_fu_544_p2[0:0] === 1'b1) ? select_ln100_10_fu_535_p3 : trunc_ln58_10_reg_993);

assign select_ln100_12_fu_575_p3 = ((icmp_ln1494_11_reg_1018[0:0] === 1'b1) ? select_ln100_11_reg_1008 : trunc_ln58_11_reg_1013);

assign select_ln100_13_fu_590_p3 = ((icmp_ln1494_12_fu_584_p2[0:0] === 1'b1) ? select_ln100_12_fu_575_p3 : trunc_ln58_12_reg_1023);

assign select_ln100_14_fu_615_p3 = ((icmp_ln1494_13_reg_1048[0:0] === 1'b1) ? select_ln100_13_reg_1038 : trunc_ln58_13_reg_1043);

assign select_ln100_15_fu_630_p3 = ((icmp_ln1494_14_fu_624_p2[0:0] === 1'b1) ? select_ln100_14_fu_615_p3 : trunc_ln58_14_reg_1053);

assign select_ln100_16_fu_651_p3 = ((icmp_ln1494_15_reg_1073[0:0] === 1'b1) ? select_ln100_15_reg_1063 : trunc_ln58_15_reg_1068);

assign select_ln100_17_fu_662_p3 = ((icmp_ln1494_16_fu_656_p2[0:0] === 1'b1) ? select_ln100_16_fu_651_p3 : 31'd41);

assign select_ln100_2_fu_376_p3 = ((icmp_ln1494_reg_863[0:0] === 1'b1) ? select_ln100_reg_842 : trunc_ln58_1_reg_858);

assign select_ln100_3_fu_390_p3 = ((icmp_ln1494_2_fu_385_p2[0:0] === 1'b1) ? select_ln100_2_fu_376_p3 : trunc_ln58_2_reg_873);

assign select_ln100_4_fu_415_p3 = ((icmp_ln1494_3_reg_898[0:0] === 1'b1) ? select_ln100_3_reg_888 : trunc_ln58_3_reg_893);

assign select_ln100_5_fu_430_p3 = ((icmp_ln1494_4_fu_424_p2[0:0] === 1'b1) ? select_ln100_4_fu_415_p3 : trunc_ln58_4_reg_903);

assign select_ln100_6_fu_455_p3 = ((icmp_ln1494_5_reg_928[0:0] === 1'b1) ? select_ln100_5_reg_918 : trunc_ln58_5_reg_923);

assign select_ln100_7_fu_470_p3 = ((icmp_ln1494_6_fu_464_p2[0:0] === 1'b1) ? select_ln100_6_fu_455_p3 : trunc_ln58_6_reg_933);

assign select_ln100_8_fu_495_p3 = ((icmp_ln1494_7_reg_958[0:0] === 1'b1) ? select_ln100_7_reg_948 : trunc_ln58_7_reg_953);

assign select_ln100_9_fu_510_p3 = ((icmp_ln1494_8_fu_504_p2[0:0] === 1'b1) ? select_ln100_8_fu_495_p3 : trunc_ln58_8_reg_963);

assign select_ln100_fu_351_p3 = ((tmp_10_fu_343_p3[0:0] === 1'b1) ? 31'd0 : trunc_ln58_fu_339_p1);

assign select_ln107_fu_728_p3 = ((icmp_ln1494_17_fu_723_p2[0:0] === 1'b1) ? 32'd2097152 : 32'd4292870144);

assign select_ln850_fu_783_p3 = ((tmp_26_fu_751_p3[0:0] === 1'b1) ? select_ln851_fu_775_p3 : p_Result_s_fu_741_p4);

assign select_ln851_fu_775_p3 = ((icmp_ln851_fu_763_p2[0:0] === 1'b1) ? p_Result_s_fu_741_p4 : add_ln700_fu_769_p2);

assign select_ln887_fu_814_p3 = ((icmp_ln887_fu_801_p2[0:0] === 1'b1) ? 8'd128 : 8'd127);

assign sext_ln134_fu_684_p1 = trunc_ln703_fu_680_p1;

assign tmp_10_fu_343_p3 = grp_fu_305_p3[32'd31];

assign tmp_26_fu_751_p3 = add_ln107_fu_736_p2[32'd31];

assign trunc_ln136_fu_811_p1 = select_ln850_reg_1122[7:0];

assign trunc_ln58_10_fu_531_p1 = grp_fu_305_p3[30:0];

assign trunc_ln58_11_fu_561_p1 = grp_fu_327_p3[30:0];

assign trunc_ln58_12_fu_571_p1 = grp_fu_305_p3[30:0];

assign trunc_ln58_13_fu_601_p1 = grp_fu_327_p3[30:0];

assign trunc_ln58_14_fu_611_p1 = grp_fu_305_p3[30:0];

assign trunc_ln58_15_fu_641_p1 = grp_fu_327_p3[30:0];

assign trunc_ln58_1_fu_362_p1 = grp_fu_305_p3[30:0];

assign trunc_ln58_2_fu_372_p1 = grp_fu_327_p3[30:0];

assign trunc_ln58_3_fu_401_p1 = grp_fu_327_p3[30:0];

assign trunc_ln58_4_fu_411_p1 = grp_fu_305_p3[30:0];

assign trunc_ln58_5_fu_441_p1 = grp_fu_327_p3[30:0];

assign trunc_ln58_6_fu_451_p1 = grp_fu_305_p3[30:0];

assign trunc_ln58_7_fu_481_p1 = grp_fu_327_p3[30:0];

assign trunc_ln58_8_fu_491_p1 = grp_fu_305_p3[30:0];

assign trunc_ln58_9_fu_521_p1 = grp_fu_327_p3[30:0];

assign trunc_ln58_fu_339_p1 = grp_fu_305_p3[30:0];

assign trunc_ln703_fu_680_p1 = grp_fu_674_p2[31:0];

assign trunc_ln851_fu_759_p1 = add_ln107_fu_736_p2[21:0];

assign zext_ln100_10_fu_557_p1 = select_ln100_11_fu_550_p3;

assign zext_ln100_11_fu_580_p1 = select_ln100_12_fu_575_p3;

assign zext_ln100_12_fu_597_p1 = select_ln100_13_fu_590_p3;

assign zext_ln100_13_fu_620_p1 = select_ln100_14_fu_615_p3;

assign zext_ln100_14_fu_637_p1 = select_ln100_15_fu_630_p3;

assign zext_ln100_1_fu_381_p1 = select_ln100_2_fu_376_p3;

assign zext_ln100_2_fu_397_p1 = select_ln100_3_fu_390_p3;

assign zext_ln100_3_fu_420_p1 = select_ln100_4_fu_415_p3;

assign zext_ln100_4_fu_437_p1 = select_ln100_5_fu_430_p3;

assign zext_ln100_5_fu_460_p1 = select_ln100_6_fu_455_p3;

assign zext_ln100_6_fu_477_p1 = select_ln100_7_fu_470_p3;

assign zext_ln100_7_fu_500_p1 = select_ln100_8_fu_495_p3;

assign zext_ln100_8_fu_517_p1 = select_ln100_9_fu_510_p3;

assign zext_ln100_9_fu_540_p1 = select_ln100_10_fu_535_p3;

assign zext_ln100_fu_359_p1 = select_ln100_reg_842;

assign zext_ln135_fu_700_p1 = j1_0_0_reg_280;

always @ (posedge ap_clk) begin
    zext_ln135_reg_1101[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    zext_ln135_reg_1101_pp0_iter1_reg[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    zext_ln135_reg_1101_pp0_iter2_reg[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
    zext_ln135_reg_1101_pp0_iter3_reg[63:5] <= 59'b00000000000000000000000000000000000000000000000000000000000;
end

endmodule //quantize_activation