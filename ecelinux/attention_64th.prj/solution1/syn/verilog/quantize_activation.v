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
        output_states_0_0_V_address0,
        output_states_0_0_V_ce0,
        output_states_0_0_V_we0,
        output_states_0_0_V_d0,
        output_states_1_0_V_address0,
        output_states_1_0_V_ce0,
        output_states_1_0_V_we0,
        output_states_1_0_V_d0,
        output_states_2_0_V_address0,
        output_states_2_0_V_ce0,
        output_states_2_0_V_we0,
        output_states_2_0_V_d0,
        output_states_3_0_V_address0,
        output_states_3_0_V_ce0,
        output_states_3_0_V_we0,
        output_states_3_0_V_d0,
        ap_return
);

parameter    ap_ST_fsm_state1 = 54'd1;
parameter    ap_ST_fsm_state2 = 54'd2;
parameter    ap_ST_fsm_state3 = 54'd4;
parameter    ap_ST_fsm_state4 = 54'd8;
parameter    ap_ST_fsm_state5 = 54'd16;
parameter    ap_ST_fsm_state6 = 54'd32;
parameter    ap_ST_fsm_state7 = 54'd64;
parameter    ap_ST_fsm_state8 = 54'd128;
parameter    ap_ST_fsm_state9 = 54'd256;
parameter    ap_ST_fsm_state10 = 54'd512;
parameter    ap_ST_fsm_state11 = 54'd1024;
parameter    ap_ST_fsm_state12 = 54'd2048;
parameter    ap_ST_fsm_state13 = 54'd4096;
parameter    ap_ST_fsm_state14 = 54'd8192;
parameter    ap_ST_fsm_state15 = 54'd16384;
parameter    ap_ST_fsm_state16 = 54'd32768;
parameter    ap_ST_fsm_state17 = 54'd65536;
parameter    ap_ST_fsm_state18 = 54'd131072;
parameter    ap_ST_fsm_state19 = 54'd262144;
parameter    ap_ST_fsm_state20 = 54'd524288;
parameter    ap_ST_fsm_state21 = 54'd1048576;
parameter    ap_ST_fsm_state22 = 54'd2097152;
parameter    ap_ST_fsm_state23 = 54'd4194304;
parameter    ap_ST_fsm_state24 = 54'd8388608;
parameter    ap_ST_fsm_state25 = 54'd16777216;
parameter    ap_ST_fsm_state26 = 54'd33554432;
parameter    ap_ST_fsm_state27 = 54'd67108864;
parameter    ap_ST_fsm_state28 = 54'd134217728;
parameter    ap_ST_fsm_state29 = 54'd268435456;
parameter    ap_ST_fsm_state30 = 54'd536870912;
parameter    ap_ST_fsm_state31 = 54'd1073741824;
parameter    ap_ST_fsm_state32 = 54'd2147483648;
parameter    ap_ST_fsm_state33 = 54'd4294967296;
parameter    ap_ST_fsm_state34 = 54'd8589934592;
parameter    ap_ST_fsm_state35 = 54'd17179869184;
parameter    ap_ST_fsm_state36 = 54'd34359738368;
parameter    ap_ST_fsm_state37 = 54'd68719476736;
parameter    ap_ST_fsm_state38 = 54'd137438953472;
parameter    ap_ST_fsm_state39 = 54'd274877906944;
parameter    ap_ST_fsm_state40 = 54'd549755813888;
parameter    ap_ST_fsm_state41 = 54'd1099511627776;
parameter    ap_ST_fsm_state42 = 54'd2199023255552;
parameter    ap_ST_fsm_state43 = 54'd4398046511104;
parameter    ap_ST_fsm_state44 = 54'd8796093022208;
parameter    ap_ST_fsm_state45 = 54'd17592186044416;
parameter    ap_ST_fsm_state46 = 54'd35184372088832;
parameter    ap_ST_fsm_state47 = 54'd70368744177664;
parameter    ap_ST_fsm_state48 = 54'd140737488355328;
parameter    ap_ST_fsm_state49 = 54'd281474976710656;
parameter    ap_ST_fsm_state50 = 54'd562949953421312;
parameter    ap_ST_fsm_state51 = 54'd1125899906842624;
parameter    ap_ST_fsm_state52 = 54'd2251799813685248;
parameter    ap_ST_fsm_state53 = 54'd4503599627370496;
parameter    ap_ST_fsm_state54 = 54'd9007199254740992;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] input_0_V_address0;
output   input_0_V_ce0;
input  [39:0] input_0_V_q0;
output  [4:0] input_0_V_address1;
output   input_0_V_ce1;
input  [39:0] input_0_V_q1;
output  [2:0] output_states_0_0_V_address0;
output   output_states_0_0_V_ce0;
output   output_states_0_0_V_we0;
output  [7:0] output_states_0_0_V_d0;
output  [2:0] output_states_1_0_V_address0;
output   output_states_1_0_V_ce0;
output   output_states_1_0_V_we0;
output  [7:0] output_states_1_0_V_d0;
output  [2:0] output_states_2_0_V_address0;
output   output_states_2_0_V_ce0;
output   output_states_2_0_V_we0;
output  [7:0] output_states_2_0_V_d0;
output  [2:0] output_states_3_0_V_address0;
output   output_states_3_0_V_ce0;
output   output_states_3_0_V_we0;
output  [7:0] output_states_3_0_V_d0;
output  [39:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[4:0] input_0_V_address0;
reg input_0_V_ce0;
reg[4:0] input_0_V_address1;
reg input_0_V_ce1;
reg output_states_0_0_V_ce0;
reg output_states_0_0_V_we0;
reg output_states_1_0_V_ce0;
reg output_states_1_0_V_we0;
reg output_states_2_0_V_ce0;
reg output_states_2_0_V_we0;
reg output_states_3_0_V_ce0;
reg output_states_3_0_V_we0;

(* fsm_encoding = "none" *) reg   [53:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [39:0] reg_251;
wire    ap_CS_fsm_state50;
wire    ap_CS_fsm_state51;
reg   [39:0] reg_256;
wire   [39:0] grp_fu_243_p3;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln128_fu_261_p2;
wire   [4:0] add_ln128_fu_272_p2;
reg   [4:0] add_ln128_reg_912;
reg   [39:0] p_Val2_15_reg_917;
wire    ap_CS_fsm_state4;
wire   [39:0] p_Val2_16_fu_289_p3;
wire    ap_CS_fsm_state5;
wire   [39:0] grp_fu_278_p2;
reg   [39:0] udiv_ln1148_reg_928;
wire    ap_CS_fsm_state48;
wire   [55:0] zext_ln135_fu_296_p1;
reg   [55:0] zext_ln135_reg_932;
wire   [2:0] add_ln135_fu_306_p2;
reg   [2:0] add_ln135_reg_943;
wire    ap_CS_fsm_state49;
wire   [4:0] shl_ln_fu_312_p3;
reg   [4:0] shl_ln_reg_948;
wire   [0:0] icmp_ln135_fu_300_p2;
reg   [39:0] p_Val2_9_reg_974;
reg   [39:0] p_Val2_17_reg_980;
wire   [23:0] select_ln850_fu_454_p3;
reg   [23:0] select_ln850_reg_986;
wire    ap_CS_fsm_state52;
reg   [16:0] tmp_76_reg_992;
wire   [23:0] select_ln850_1_fu_532_p3;
reg   [23:0] select_ln850_1_reg_997;
reg   [16:0] tmp_78_reg_1003;
reg   [39:0] p_Val2_18_reg_1008;
reg   [39:0] p_Val2_19_reg_1014;
wire   [7:0] select_ln887_1_fu_615_p3;
reg   [7:0] select_ln887_1_reg_1020;
wire    ap_CS_fsm_state53;
wire   [7:0] select_ln887_3_fu_650_p3;
reg   [7:0] select_ln887_3_reg_1025;
wire   [23:0] select_ln850_2_fu_718_p3;
reg   [23:0] select_ln850_2_reg_1030;
reg   [16:0] tmp_80_reg_1036;
wire   [23:0] select_ln850_3_fu_796_p3;
reg   [23:0] select_ln850_3_reg_1041;
reg   [16:0] tmp_82_reg_1047;
reg   [39:0] max_val_V_0_0_reg_196;
reg   [4:0] j_0_0_reg_206;
reg   [2:0] jo_0_0_reg_217;
wire    ap_CS_fsm_state54;
wire   [63:0] zext_ln129_fu_267_p1;
wire   [63:0] zext_ln139_fu_320_p1;
wire   [63:0] zext_ln139_1_fu_331_p1;
wire   [63:0] zext_ln139_2_fu_341_p1;
wire   [63:0] zext_ln139_3_fu_351_p1;
wire   [63:0] zext_ln141_fu_814_p1;
wire   [0:0] grp_fu_229_p3;
wire   [39:0] grp_fu_237_p2;
wire   [0:0] icmp_ln1494_fu_284_p2;
wire   [4:0] or_ln139_fu_325_p2;
wire   [4:0] or_ln139_1_fu_336_p2;
wire   [4:0] or_ln139_2_fu_346_p2;
wire  signed [39:0] mul_ln1118_fu_360_p0;
wire   [39:0] mul_ln1118_fu_360_p1;
wire   [55:0] mul_ln1118_fu_360_p2;
wire  signed [39:0] mul_ln1118_1_fu_379_p0;
wire   [39:0] mul_ln1118_1_fu_379_p1;
wire   [55:0] mul_ln1118_1_fu_379_p2;
wire   [0:0] icmp_ln1494_26_fu_394_p2;
wire   [39:0] select_ln108_fu_399_p3;
wire   [39:0] add_ln108_fu_407_p2;
wire   [15:0] trunc_ln851_fu_430_p1;
wire   [23:0] p_Result_s_fu_412_p4;
wire   [0:0] icmp_ln851_fu_434_p2;
wire   [23:0] add_ln700_fu_440_p2;
wire   [0:0] tmp_75_fu_422_p3;
wire   [23:0] select_ln851_fu_446_p3;
wire   [0:0] icmp_ln1494_27_fu_472_p2;
wire   [39:0] select_ln108_1_fu_477_p3;
wire   [39:0] add_ln108_1_fu_485_p2;
wire   [15:0] trunc_ln851_1_fu_508_p1;
wire   [23:0] p_Result_0_0_1_fu_490_p4;
wire   [0:0] icmp_ln851_1_fu_512_p2;
wire   [23:0] add_ln700_1_fu_518_p2;
wire   [0:0] tmp_77_fu_500_p3;
wire   [23:0] select_ln851_1_fu_524_p3;
wire  signed [39:0] mul_ln1118_2_fu_554_p0;
wire   [39:0] mul_ln1118_2_fu_554_p1;
wire   [55:0] mul_ln1118_2_fu_554_p2;
wire  signed [39:0] mul_ln1118_3_fu_573_p0;
wire   [39:0] mul_ln1118_3_fu_573_p1;
wire   [55:0] mul_ln1118_3_fu_573_p2;
wire   [0:0] icmp_ln887_fu_588_p2;
wire   [0:0] icmp_ln895_fu_593_p2;
wire   [0:0] or_ln887_fu_609_p2;
wire   [7:0] select_ln887_fu_601_p3;
wire   [7:0] trunc_ln140_fu_598_p1;
wire   [0:0] icmp_ln887_1_fu_623_p2;
wire   [0:0] icmp_ln895_1_fu_628_p2;
wire   [0:0] or_ln887_1_fu_644_p2;
wire   [7:0] select_ln887_2_fu_636_p3;
wire   [7:0] trunc_ln140_1_fu_633_p1;
wire   [0:0] icmp_ln1494_28_fu_658_p2;
wire   [39:0] select_ln108_2_fu_663_p3;
wire   [39:0] add_ln108_2_fu_671_p2;
wire   [15:0] trunc_ln851_2_fu_694_p1;
wire   [23:0] p_Result_0_0_2_fu_676_p4;
wire   [0:0] icmp_ln851_2_fu_698_p2;
wire   [23:0] add_ln700_2_fu_704_p2;
wire   [0:0] tmp_79_fu_686_p3;
wire   [23:0] select_ln851_2_fu_710_p3;
wire   [0:0] icmp_ln1494_29_fu_736_p2;
wire   [39:0] select_ln108_3_fu_741_p3;
wire   [39:0] add_ln108_3_fu_749_p2;
wire   [15:0] trunc_ln851_3_fu_772_p1;
wire   [23:0] p_Result_0_0_3_fu_754_p4;
wire   [0:0] icmp_ln851_3_fu_776_p2;
wire   [23:0] add_ln700_3_fu_782_p2;
wire   [0:0] tmp_81_fu_764_p3;
wire   [23:0] select_ln851_3_fu_788_p3;
wire   [0:0] icmp_ln887_2_fu_822_p2;
wire   [0:0] icmp_ln895_2_fu_827_p2;
wire   [0:0] or_ln887_2_fu_843_p2;
wire   [7:0] select_ln887_4_fu_835_p3;
wire   [7:0] trunc_ln140_2_fu_832_p1;
wire   [0:0] icmp_ln887_3_fu_858_p2;
wire   [0:0] icmp_ln895_3_fu_863_p2;
wire   [0:0] or_ln887_3_fu_879_p2;
wire   [7:0] select_ln887_6_fu_871_p3;
wire   [7:0] trunc_ln140_3_fu_868_p1;
reg    grp_fu_278_ap_start;
wire    grp_fu_278_ap_done;
reg   [53:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 54'd1;
end

dut_udiv_40ns_40neOg #(
    .ID( 1 ),
    .NUM_STAGE( 44 ),
    .din0_WIDTH( 40 ),
    .din1_WIDTH( 40 ),
    .dout_WIDTH( 40 ))
dut_udiv_40ns_40neOg_U14(
    .clk(ap_clk),
    .reset(ap_rst),
    .start(grp_fu_278_ap_start),
    .done(grp_fu_278_ap_done),
    .din0(40'd545460846592),
    .din1(max_val_V_0_0_reg_196),
    .ce(1'b1),
    .dout(grp_fu_278_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        j_0_0_reg_206 <= add_ln128_reg_912;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        j_0_0_reg_206 <= 5'd1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        jo_0_0_reg_217 <= add_ln135_reg_943;
    end else if ((1'b1 == ap_CS_fsm_state48)) begin
        jo_0_0_reg_217 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        max_val_V_0_0_reg_196 <= p_Val2_16_fu_289_p3;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        max_val_V_0_0_reg_196 <= grp_fu_243_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state51)) begin
        reg_251 <= input_0_V_q1;
    end else if ((1'b1 == ap_CS_fsm_state50)) begin
        reg_251 <= input_0_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state51)) begin
        reg_256 <= input_0_V_q0;
    end else if ((1'b1 == ap_CS_fsm_state50)) begin
        reg_256 <= input_0_V_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln128_fu_261_p2 == 1'd0))) begin
        add_ln128_reg_912 <= add_ln128_fu_272_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state49)) begin
        add_ln135_reg_943 <= add_ln135_fu_306_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        p_Val2_15_reg_917 <= grp_fu_243_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state51)) begin
        p_Val2_17_reg_980 <= {{mul_ln1118_1_fu_379_p2[55:16]}};
        p_Val2_9_reg_974 <= {{mul_ln1118_fu_360_p2[55:16]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state52)) begin
        p_Val2_18_reg_1008 <= {{mul_ln1118_2_fu_554_p2[55:16]}};
        p_Val2_19_reg_1014 <= {{mul_ln1118_3_fu_573_p2[55:16]}};
        select_ln850_1_reg_997 <= select_ln850_1_fu_532_p3;
        select_ln850_reg_986 <= select_ln850_fu_454_p3;
        tmp_76_reg_992 <= {{select_ln850_fu_454_p3[23:7]}};
        tmp_78_reg_1003 <= {{select_ln850_1_fu_532_p3[23:7]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state53)) begin
        select_ln850_2_reg_1030 <= select_ln850_2_fu_718_p3;
        select_ln850_3_reg_1041 <= select_ln850_3_fu_796_p3;
        select_ln887_1_reg_1020 <= select_ln887_1_fu_615_p3;
        select_ln887_3_reg_1025 <= select_ln887_3_fu_650_p3;
        tmp_80_reg_1036 <= {{select_ln850_2_fu_718_p3[23:7]}};
        tmp_82_reg_1047 <= {{select_ln850_3_fu_796_p3[23:7]}};
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln135_fu_300_p2 == 1'd0))) begin
        shl_ln_reg_948[4 : 2] <= shl_ln_fu_312_p3[4 : 2];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state48)) begin
        udiv_ln1148_reg_928 <= grp_fu_278_p2;
        zext_ln135_reg_932[39 : 0] <= zext_ln135_fu_296_p1[39 : 0];
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state49) & (icmp_ln135_fu_300_p2 == 1'd1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln135_fu_300_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln128_fu_261_p2 == 1'd1))) begin
        grp_fu_278_ap_start = 1'b1;
    end else begin
        grp_fu_278_ap_start = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state50)) begin
        input_0_V_address0 = zext_ln139_3_fu_351_p1;
    end else if ((1'b1 == ap_CS_fsm_state49)) begin
        input_0_V_address0 = zext_ln139_fu_320_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        input_0_V_address0 = zext_ln129_fu_267_p1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        input_0_V_address0 = 64'd0;
    end else begin
        input_0_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state50)) begin
        input_0_V_address1 = zext_ln139_2_fu_341_p1;
    end else if ((1'b1 == ap_CS_fsm_state49)) begin
        input_0_V_address1 = zext_ln139_1_fu_331_p1;
    end else begin
        input_0_V_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state49) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state50) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        input_0_V_ce0 = 1'b1;
    end else begin
        input_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state49) | (1'b1 == ap_CS_fsm_state50))) begin
        input_0_V_ce1 = 1'b1;
    end else begin
        input_0_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        output_states_0_0_V_ce0 = 1'b1;
    end else begin
        output_states_0_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        output_states_0_0_V_we0 = 1'b1;
    end else begin
        output_states_0_0_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        output_states_1_0_V_ce0 = 1'b1;
    end else begin
        output_states_1_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        output_states_1_0_V_we0 = 1'b1;
    end else begin
        output_states_1_0_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        output_states_2_0_V_ce0 = 1'b1;
    end else begin
        output_states_2_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        output_states_2_0_V_we0 = 1'b1;
    end else begin
        output_states_2_0_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        output_states_3_0_V_ce0 = 1'b1;
    end else begin
        output_states_3_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        output_states_3_0_V_we0 = 1'b1;
    end else begin
        output_states_3_0_V_we0 = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln128_fu_261_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
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
            if (((1'b1 == ap_CS_fsm_state49) & (icmp_ln135_fu_300_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state50;
            end
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
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln108_1_fu_485_p2 = (select_ln108_1_fu_477_p3 + p_Val2_17_reg_980);

assign add_ln108_2_fu_671_p2 = (select_ln108_2_fu_663_p3 + p_Val2_18_reg_1008);

assign add_ln108_3_fu_749_p2 = (select_ln108_3_fu_741_p3 + p_Val2_19_reg_1014);

assign add_ln108_fu_407_p2 = (select_ln108_fu_399_p3 + p_Val2_9_reg_974);

assign add_ln128_fu_272_p2 = (j_0_0_reg_206 + 5'd1);

assign add_ln135_fu_306_p2 = (jo_0_0_reg_217 + 3'd1);

assign add_ln700_1_fu_518_p2 = (24'd1 + p_Result_0_0_1_fu_490_p4);

assign add_ln700_2_fu_704_p2 = (24'd1 + p_Result_0_0_2_fu_676_p4);

assign add_ln700_3_fu_782_p2 = (24'd1 + p_Result_0_0_3_fu_754_p4);

assign add_ln700_fu_440_p2 = (24'd1 + p_Result_s_fu_412_p4);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state48 = ap_CS_fsm[32'd47];

assign ap_CS_fsm_state49 = ap_CS_fsm[32'd48];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state50 = ap_CS_fsm[32'd49];

assign ap_CS_fsm_state51 = ap_CS_fsm[32'd50];

assign ap_CS_fsm_state52 = ap_CS_fsm[32'd51];

assign ap_CS_fsm_state53 = ap_CS_fsm[32'd52];

assign ap_CS_fsm_state54 = ap_CS_fsm[32'd53];

assign ap_return = udiv_ln1148_reg_928;

assign grp_fu_229_p3 = input_0_V_q0[32'd39];

assign grp_fu_237_p2 = (40'd0 - input_0_V_q0);

assign grp_fu_243_p3 = ((grp_fu_229_p3[0:0] === 1'b1) ? grp_fu_237_p2 : input_0_V_q0);

assign icmp_ln128_fu_261_p2 = ((j_0_0_reg_206 == 5'd24) ? 1'b1 : 1'b0);

assign icmp_ln135_fu_300_p2 = ((jo_0_0_reg_217 == 3'd6) ? 1'b1 : 1'b0);

assign icmp_ln1494_26_fu_394_p2 = (($signed(p_Val2_9_reg_974) > $signed(40'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_27_fu_472_p2 = (($signed(p_Val2_17_reg_980) > $signed(40'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_28_fu_658_p2 = (($signed(p_Val2_18_reg_1008) > $signed(40'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_29_fu_736_p2 = (($signed(p_Val2_19_reg_1014) > $signed(40'd0)) ? 1'b1 : 1'b0);

assign icmp_ln1494_fu_284_p2 = (($signed(p_Val2_15_reg_917) > $signed(max_val_V_0_0_reg_196)) ? 1'b1 : 1'b0);

assign icmp_ln851_1_fu_512_p2 = ((trunc_ln851_1_fu_508_p1 == 16'd0) ? 1'b1 : 1'b0);

assign icmp_ln851_2_fu_698_p2 = ((trunc_ln851_2_fu_694_p1 == 16'd0) ? 1'b1 : 1'b0);

assign icmp_ln851_3_fu_776_p2 = ((trunc_ln851_3_fu_772_p1 == 16'd0) ? 1'b1 : 1'b0);

assign icmp_ln851_fu_434_p2 = ((trunc_ln851_fu_430_p1 == 16'd0) ? 1'b1 : 1'b0);

assign icmp_ln887_1_fu_623_p2 = (($signed(select_ln850_1_reg_997) < $signed(24'd16777088)) ? 1'b1 : 1'b0);

assign icmp_ln887_2_fu_822_p2 = (($signed(select_ln850_2_reg_1030) < $signed(24'd16777088)) ? 1'b1 : 1'b0);

assign icmp_ln887_3_fu_858_p2 = (($signed(select_ln850_3_reg_1041) < $signed(24'd16777088)) ? 1'b1 : 1'b0);

assign icmp_ln887_fu_588_p2 = (($signed(select_ln850_reg_986) < $signed(24'd16777088)) ? 1'b1 : 1'b0);

assign icmp_ln895_1_fu_628_p2 = (($signed(tmp_78_reg_1003) > $signed(17'd0)) ? 1'b1 : 1'b0);

assign icmp_ln895_2_fu_827_p2 = (($signed(tmp_80_reg_1036) > $signed(17'd0)) ? 1'b1 : 1'b0);

assign icmp_ln895_3_fu_863_p2 = (($signed(tmp_82_reg_1047) > $signed(17'd0)) ? 1'b1 : 1'b0);

assign icmp_ln895_fu_593_p2 = (($signed(tmp_76_reg_992) > $signed(17'd0)) ? 1'b1 : 1'b0);

assign mul_ln1118_1_fu_379_p0 = reg_256;

assign mul_ln1118_1_fu_379_p1 = zext_ln135_reg_932;

assign mul_ln1118_1_fu_379_p2 = ($signed(mul_ln1118_1_fu_379_p0) * $signed({{1'b0}, {mul_ln1118_1_fu_379_p1}}));

assign mul_ln1118_2_fu_554_p0 = reg_251;

assign mul_ln1118_2_fu_554_p1 = zext_ln135_reg_932;

assign mul_ln1118_2_fu_554_p2 = ($signed(mul_ln1118_2_fu_554_p0) * $signed({{1'b0}, {mul_ln1118_2_fu_554_p1}}));

assign mul_ln1118_3_fu_573_p0 = reg_256;

assign mul_ln1118_3_fu_573_p1 = zext_ln135_reg_932;

assign mul_ln1118_3_fu_573_p2 = ($signed(mul_ln1118_3_fu_573_p0) * $signed({{1'b0}, {mul_ln1118_3_fu_573_p1}}));

assign mul_ln1118_fu_360_p0 = reg_251;

assign mul_ln1118_fu_360_p1 = zext_ln135_reg_932;

assign mul_ln1118_fu_360_p2 = ($signed(mul_ln1118_fu_360_p0) * $signed({{1'b0}, {mul_ln1118_fu_360_p1}}));

assign or_ln139_1_fu_336_p2 = (shl_ln_reg_948 | 5'd2);

assign or_ln139_2_fu_346_p2 = (shl_ln_reg_948 | 5'd3);

assign or_ln139_fu_325_p2 = (shl_ln_fu_312_p3 | 5'd1);

assign or_ln887_1_fu_644_p2 = (icmp_ln895_1_fu_628_p2 | icmp_ln887_1_fu_623_p2);

assign or_ln887_2_fu_843_p2 = (icmp_ln895_2_fu_827_p2 | icmp_ln887_2_fu_822_p2);

assign or_ln887_3_fu_879_p2 = (icmp_ln895_3_fu_863_p2 | icmp_ln887_3_fu_858_p2);

assign or_ln887_fu_609_p2 = (icmp_ln895_fu_593_p2 | icmp_ln887_fu_588_p2);

assign output_states_0_0_V_address0 = zext_ln141_fu_814_p1;

assign output_states_0_0_V_d0 = select_ln887_1_reg_1020;

assign output_states_1_0_V_address0 = zext_ln141_fu_814_p1;

assign output_states_1_0_V_d0 = select_ln887_3_reg_1025;

assign output_states_2_0_V_address0 = zext_ln141_fu_814_p1;

assign output_states_2_0_V_d0 = ((or_ln887_2_fu_843_p2[0:0] === 1'b1) ? select_ln887_4_fu_835_p3 : trunc_ln140_2_fu_832_p1);

assign output_states_3_0_V_address0 = zext_ln141_fu_814_p1;

assign output_states_3_0_V_d0 = ((or_ln887_3_fu_879_p2[0:0] === 1'b1) ? select_ln887_6_fu_871_p3 : trunc_ln140_3_fu_868_p1);

assign p_Result_0_0_1_fu_490_p4 = {{add_ln108_1_fu_485_p2[39:16]}};

assign p_Result_0_0_2_fu_676_p4 = {{add_ln108_2_fu_671_p2[39:16]}};

assign p_Result_0_0_3_fu_754_p4 = {{add_ln108_3_fu_749_p2[39:16]}};

assign p_Result_s_fu_412_p4 = {{add_ln108_fu_407_p2[39:16]}};

assign p_Val2_16_fu_289_p3 = ((icmp_ln1494_fu_284_p2[0:0] === 1'b1) ? p_Val2_15_reg_917 : max_val_V_0_0_reg_196);

assign select_ln108_1_fu_477_p3 = ((icmp_ln1494_27_fu_472_p2[0:0] === 1'b1) ? 40'd32768 : 40'd1099511595008);

assign select_ln108_2_fu_663_p3 = ((icmp_ln1494_28_fu_658_p2[0:0] === 1'b1) ? 40'd32768 : 40'd1099511595008);

assign select_ln108_3_fu_741_p3 = ((icmp_ln1494_29_fu_736_p2[0:0] === 1'b1) ? 40'd32768 : 40'd1099511595008);

assign select_ln108_fu_399_p3 = ((icmp_ln1494_26_fu_394_p2[0:0] === 1'b1) ? 40'd32768 : 40'd1099511595008);

assign select_ln850_1_fu_532_p3 = ((tmp_77_fu_500_p3[0:0] === 1'b1) ? select_ln851_1_fu_524_p3 : p_Result_0_0_1_fu_490_p4);

assign select_ln850_2_fu_718_p3 = ((tmp_79_fu_686_p3[0:0] === 1'b1) ? select_ln851_2_fu_710_p3 : p_Result_0_0_2_fu_676_p4);

assign select_ln850_3_fu_796_p3 = ((tmp_81_fu_764_p3[0:0] === 1'b1) ? select_ln851_3_fu_788_p3 : p_Result_0_0_3_fu_754_p4);

assign select_ln850_fu_454_p3 = ((tmp_75_fu_422_p3[0:0] === 1'b1) ? select_ln851_fu_446_p3 : p_Result_s_fu_412_p4);

assign select_ln851_1_fu_524_p3 = ((icmp_ln851_1_fu_512_p2[0:0] === 1'b1) ? p_Result_0_0_1_fu_490_p4 : add_ln700_1_fu_518_p2);

assign select_ln851_2_fu_710_p3 = ((icmp_ln851_2_fu_698_p2[0:0] === 1'b1) ? p_Result_0_0_2_fu_676_p4 : add_ln700_2_fu_704_p2);

assign select_ln851_3_fu_788_p3 = ((icmp_ln851_3_fu_776_p2[0:0] === 1'b1) ? p_Result_0_0_3_fu_754_p4 : add_ln700_3_fu_782_p2);

assign select_ln851_fu_446_p3 = ((icmp_ln851_fu_434_p2[0:0] === 1'b1) ? p_Result_s_fu_412_p4 : add_ln700_fu_440_p2);

assign select_ln887_1_fu_615_p3 = ((or_ln887_fu_609_p2[0:0] === 1'b1) ? select_ln887_fu_601_p3 : trunc_ln140_fu_598_p1);

assign select_ln887_2_fu_636_p3 = ((icmp_ln887_1_fu_623_p2[0:0] === 1'b1) ? 8'd128 : 8'd127);

assign select_ln887_3_fu_650_p3 = ((or_ln887_1_fu_644_p2[0:0] === 1'b1) ? select_ln887_2_fu_636_p3 : trunc_ln140_1_fu_633_p1);

assign select_ln887_4_fu_835_p3 = ((icmp_ln887_2_fu_822_p2[0:0] === 1'b1) ? 8'd128 : 8'd127);

assign select_ln887_6_fu_871_p3 = ((icmp_ln887_3_fu_858_p2[0:0] === 1'b1) ? 8'd128 : 8'd127);

assign select_ln887_fu_601_p3 = ((icmp_ln887_fu_588_p2[0:0] === 1'b1) ? 8'd128 : 8'd127);

assign shl_ln_fu_312_p3 = {{jo_0_0_reg_217}, {2'd0}};

assign tmp_75_fu_422_p3 = add_ln108_fu_407_p2[32'd39];

assign tmp_77_fu_500_p3 = add_ln108_1_fu_485_p2[32'd39];

assign tmp_79_fu_686_p3 = add_ln108_2_fu_671_p2[32'd39];

assign tmp_81_fu_764_p3 = add_ln108_3_fu_749_p2[32'd39];

assign trunc_ln140_1_fu_633_p1 = select_ln850_1_reg_997[7:0];

assign trunc_ln140_2_fu_832_p1 = select_ln850_2_reg_1030[7:0];

assign trunc_ln140_3_fu_868_p1 = select_ln850_3_reg_1041[7:0];

assign trunc_ln140_fu_598_p1 = select_ln850_reg_986[7:0];

assign trunc_ln851_1_fu_508_p1 = add_ln108_1_fu_485_p2[15:0];

assign trunc_ln851_2_fu_694_p1 = add_ln108_2_fu_671_p2[15:0];

assign trunc_ln851_3_fu_772_p1 = add_ln108_3_fu_749_p2[15:0];

assign trunc_ln851_fu_430_p1 = add_ln108_fu_407_p2[15:0];

assign zext_ln129_fu_267_p1 = j_0_0_reg_206;

assign zext_ln135_fu_296_p1 = grp_fu_278_p2;

assign zext_ln139_1_fu_331_p1 = or_ln139_fu_325_p2;

assign zext_ln139_2_fu_341_p1 = or_ln139_1_fu_336_p2;

assign zext_ln139_3_fu_351_p1 = or_ln139_2_fu_346_p2;

assign zext_ln139_fu_320_p1 = shl_ln_fu_312_p3;

assign zext_ln141_fu_814_p1 = jo_0_0_reg_217;

always @ (posedge ap_clk) begin
    zext_ln135_reg_932[55:40] <= 16'b0000000000000000;
    shl_ln_reg_948[1:0] <= 2'b00;
end

endmodule //quantize_activation