// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_1_16_6_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        input_0_V_address0,
        input_0_V_ce0,
        input_0_V_we0,
        input_0_V_d0,
        input_0_V_q0
);

parameter    ap_ST_fsm_state1 = 83'd1;
parameter    ap_ST_fsm_state2 = 83'd2;
parameter    ap_ST_fsm_state3 = 83'd4;
parameter    ap_ST_fsm_state4 = 83'd8;
parameter    ap_ST_fsm_state5 = 83'd16;
parameter    ap_ST_fsm_state6 = 83'd32;
parameter    ap_ST_fsm_state7 = 83'd64;
parameter    ap_ST_fsm_state8 = 83'd128;
parameter    ap_ST_fsm_state9 = 83'd256;
parameter    ap_ST_fsm_state10 = 83'd512;
parameter    ap_ST_fsm_state11 = 83'd1024;
parameter    ap_ST_fsm_state12 = 83'd2048;
parameter    ap_ST_fsm_state13 = 83'd4096;
parameter    ap_ST_fsm_state14 = 83'd8192;
parameter    ap_ST_fsm_state15 = 83'd16384;
parameter    ap_ST_fsm_state16 = 83'd32768;
parameter    ap_ST_fsm_state17 = 83'd65536;
parameter    ap_ST_fsm_state18 = 83'd131072;
parameter    ap_ST_fsm_state19 = 83'd262144;
parameter    ap_ST_fsm_state20 = 83'd524288;
parameter    ap_ST_fsm_state21 = 83'd1048576;
parameter    ap_ST_fsm_state22 = 83'd2097152;
parameter    ap_ST_fsm_state23 = 83'd4194304;
parameter    ap_ST_fsm_state24 = 83'd8388608;
parameter    ap_ST_fsm_state25 = 83'd16777216;
parameter    ap_ST_fsm_state26 = 83'd33554432;
parameter    ap_ST_fsm_state27 = 83'd67108864;
parameter    ap_ST_fsm_state28 = 83'd134217728;
parameter    ap_ST_fsm_state29 = 83'd268435456;
parameter    ap_ST_fsm_state30 = 83'd536870912;
parameter    ap_ST_fsm_state31 = 83'd1073741824;
parameter    ap_ST_fsm_state32 = 83'd2147483648;
parameter    ap_ST_fsm_state33 = 83'd4294967296;
parameter    ap_ST_fsm_state34 = 83'd8589934592;
parameter    ap_ST_fsm_state35 = 83'd17179869184;
parameter    ap_ST_fsm_state36 = 83'd34359738368;
parameter    ap_ST_fsm_state37 = 83'd68719476736;
parameter    ap_ST_fsm_state38 = 83'd137438953472;
parameter    ap_ST_fsm_state39 = 83'd274877906944;
parameter    ap_ST_fsm_state40 = 83'd549755813888;
parameter    ap_ST_fsm_state41 = 83'd1099511627776;
parameter    ap_ST_fsm_state42 = 83'd2199023255552;
parameter    ap_ST_fsm_state43 = 83'd4398046511104;
parameter    ap_ST_fsm_state44 = 83'd8796093022208;
parameter    ap_ST_fsm_state45 = 83'd17592186044416;
parameter    ap_ST_fsm_state46 = 83'd35184372088832;
parameter    ap_ST_fsm_state47 = 83'd70368744177664;
parameter    ap_ST_fsm_state48 = 83'd140737488355328;
parameter    ap_ST_fsm_state49 = 83'd281474976710656;
parameter    ap_ST_fsm_state50 = 83'd562949953421312;
parameter    ap_ST_fsm_state51 = 83'd1125899906842624;
parameter    ap_ST_fsm_state52 = 83'd2251799813685248;
parameter    ap_ST_fsm_state53 = 83'd4503599627370496;
parameter    ap_ST_fsm_state54 = 83'd9007199254740992;
parameter    ap_ST_fsm_state55 = 83'd18014398509481984;
parameter    ap_ST_fsm_state56 = 83'd36028797018963968;
parameter    ap_ST_fsm_state57 = 83'd72057594037927936;
parameter    ap_ST_fsm_state58 = 83'd144115188075855872;
parameter    ap_ST_fsm_state59 = 83'd288230376151711744;
parameter    ap_ST_fsm_state60 = 83'd576460752303423488;
parameter    ap_ST_fsm_state61 = 83'd1152921504606846976;
parameter    ap_ST_fsm_state62 = 83'd2305843009213693952;
parameter    ap_ST_fsm_state63 = 83'd4611686018427387904;
parameter    ap_ST_fsm_state64 = 83'd9223372036854775808;
parameter    ap_ST_fsm_state65 = 83'd18446744073709551616;
parameter    ap_ST_fsm_state66 = 83'd36893488147419103232;
parameter    ap_ST_fsm_state67 = 83'd73786976294838206464;
parameter    ap_ST_fsm_state68 = 83'd147573952589676412928;
parameter    ap_ST_fsm_state69 = 83'd295147905179352825856;
parameter    ap_ST_fsm_state70 = 83'd590295810358705651712;
parameter    ap_ST_fsm_state71 = 83'd1180591620717411303424;
parameter    ap_ST_fsm_state72 = 83'd2361183241434822606848;
parameter    ap_ST_fsm_state73 = 83'd4722366482869645213696;
parameter    ap_ST_fsm_state74 = 83'd9444732965739290427392;
parameter    ap_ST_fsm_state75 = 83'd18889465931478580854784;
parameter    ap_ST_fsm_state76 = 83'd37778931862957161709568;
parameter    ap_ST_fsm_state77 = 83'd75557863725914323419136;
parameter    ap_ST_fsm_state78 = 83'd151115727451828646838272;
parameter    ap_ST_fsm_state79 = 83'd302231454903657293676544;
parameter    ap_ST_fsm_state80 = 83'd604462909807314587353088;
parameter    ap_ST_fsm_state81 = 83'd1208925819614629174706176;
parameter    ap_ST_fsm_state82 = 83'd2417851639229258349412352;
parameter    ap_ST_fsm_state83 = 83'd4835703278458516698824704;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [6:0] input_0_V_address0;
output   input_0_V_ce0;
output   input_0_V_we0;
output  [37:0] input_0_V_d0;
input  [37:0] input_0_V_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[6:0] input_0_V_address0;
reg input_0_V_ce0;
reg input_0_V_we0;
reg[37:0] input_0_V_d0;

(* fsm_encoding = "none" *) reg   [82:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] i_fu_192_p2;
reg   [4:0] i_reg_357;
wire    ap_CS_fsm_state2;
wire  signed [7:0] sub_ln203_fu_218_p2;
reg  signed [7:0] sub_ln203_reg_362;
wire   [0:0] icmp_ln267_fu_186_p2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire   [0:0] icmp_ln270_fu_229_p2;
wire   [2:0] add_ln270_fu_249_p2;
reg   [2:0] add_ln270_reg_387;
wire   [37:0] select_ln271_fu_261_p3;
wire    ap_CS_fsm_state5;
wire   [2:0] add_ln273_fu_275_p2;
reg   [2:0] add_ln273_reg_400;
wire    ap_CS_fsm_state6;
reg   [6:0] input_0_V_addr_2_reg_405;
wire   [0:0] icmp_ln273_fu_269_p2;
wire  signed [57:0] sext_ln1148_fu_295_p1;
reg  signed [57:0] sext_ln1148_reg_410;
wire   [37:0] sub_ln703_fu_299_p2;
reg   [37:0] sub_ln703_reg_415;
wire    ap_CS_fsm_state7;
wire   [37:0] grp_exp_38_18_s_fu_169_ap_return;
reg   [37:0] agg_result_V_i_reg_420;
wire    ap_CS_fsm_state19;
wire   [37:0] add_ln703_fu_305_p2;
wire    ap_CS_fsm_state20;
wire   [2:0] add_ln278_fu_316_p2;
reg   [2:0] add_ln278_reg_434;
wire    ap_CS_fsm_state21;
reg   [6:0] input_0_V_addr_3_reg_439;
wire   [0:0] icmp_ln278_fu_310_p2;
wire    ap_CS_fsm_state22;
wire    grp_exp_38_18_s_fu_169_ap_start;
wire    grp_exp_38_18_s_fu_169_ap_done;
wire    grp_exp_38_18_s_fu_169_ap_idle;
wire    grp_exp_38_18_s_fu_169_ap_ready;
reg   [4:0] i_0_reg_103;
reg   [37:0] p_Val2_33_0_reg_114;
reg   [2:0] k_0_0_reg_124;
reg  signed [37:0] p_Val2_34_0_reg_135;
reg   [2:0] k1_0_0_reg_147;
reg   [2:0] k2_0_0_reg_158;
wire    ap_CS_fsm_state83;
reg    grp_exp_38_18_s_fu_169_ap_start_reg;
reg   [82:0] ap_NS_fsm;
wire    ap_NS_fsm_state8;
wire    ap_CS_fsm_state8;
wire  signed [63:0] sext_ln203_fu_224_p1;
wire  signed [63:0] sext_ln1494_fu_244_p1;
wire  signed [63:0] sext_ln1265_fu_290_p1;
wire  signed [63:0] sext_ln1265_1_fu_331_p1;
wire   [37:0] trunc_ln703_fu_349_p1;
wire   [5:0] tmp_48_fu_206_p3;
wire   [7:0] tmp_s_fu_198_p3;
wire   [7:0] zext_ln203_fu_214_p1;
wire   [7:0] zext_ln1494_fu_235_p1;
wire   [7:0] add_ln1494_fu_239_p2;
wire   [0:0] icmp_ln1494_fu_255_p2;
wire   [7:0] zext_ln1265_fu_281_p1;
wire   [7:0] add_ln1265_fu_285_p2;
wire   [7:0] zext_ln1265_1_fu_322_p1;
wire   [7:0] add_ln1265_1_fu_326_p2;
wire   [57:0] grp_fu_344_p0;
wire  signed [37:0] grp_fu_344_p1;
wire   [37:0] grp_fu_344_p2;
reg    grp_fu_344_ap_start;
wire    grp_fu_344_ap_done;

// power-on initialization
initial begin
#0 ap_CS_fsm = 83'd1;
#0 grp_exp_38_18_s_fu_169_ap_start_reg = 1'b0;
end

exp_38_18_s grp_exp_38_18_s_fu_169(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_exp_38_18_s_fu_169_ap_start),
    .ap_done(grp_exp_38_18_s_fu_169_ap_done),
    .ap_idle(grp_exp_38_18_s_fu_169_ap_idle),
    .ap_ready(grp_exp_38_18_s_fu_169_ap_ready),
    .x_V(sub_ln703_reg_415),
    .ap_return(grp_exp_38_18_s_fu_169_ap_return)
);

dut_sdiv_58ns_38stde #(
    .ID( 1 ),
    .NUM_STAGE( 62 ),
    .din0_WIDTH( 58 ),
    .din1_WIDTH( 38 ),
    .dout_WIDTH( 38 ))
dut_sdiv_58ns_38stde_U877(
    .clk(ap_clk),
    .reset(ap_rst),
    .start(grp_fu_344_ap_start),
    .done(grp_fu_344_ap_done),
    .din0(grp_fu_344_p0),
    .din1(grp_fu_344_p1),
    .ce(1'b1),
    .dout(grp_fu_344_p2)
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
        grp_exp_38_18_s_fu_169_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_NS_fsm_state8) & (1'b1 == ap_CS_fsm_state7))) begin
            grp_exp_38_18_s_fu_169_ap_start_reg <= 1'b1;
        end else if ((grp_exp_38_18_s_fu_169_ap_ready == 1'b1)) begin
            grp_exp_38_18_s_fu_169_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state21) & (icmp_ln278_fu_310_p2 == 1'd1))) begin
        i_0_reg_103 <= i_reg_357;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_103 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln270_fu_229_p2 == 1'd1))) begin
        k1_0_0_reg_147 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        k1_0_0_reg_147 <= add_ln273_reg_400;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln273_fu_269_p2 == 1'd1))) begin
        k2_0_0_reg_158 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state83)) begin
        k2_0_0_reg_158 <= add_ln278_reg_434;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        k_0_0_reg_124 <= add_ln270_reg_387;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        k_0_0_reg_124 <= 3'd1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        p_Val2_33_0_reg_114 <= select_ln271_fu_261_p3;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        p_Val2_33_0_reg_114 <= input_0_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln270_fu_229_p2 == 1'd1))) begin
        p_Val2_34_0_reg_135 <= 38'd0;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        p_Val2_34_0_reg_135 <= add_ln703_fu_305_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln270_fu_229_p2 == 1'd0))) begin
        add_ln270_reg_387 <= add_ln270_fu_249_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        add_ln273_reg_400 <= add_ln273_fu_275_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        add_ln278_reg_434 <= add_ln278_fu_316_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        agg_result_V_i_reg_420 <= grp_exp_38_18_s_fu_169_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_357 <= i_fu_192_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln273_fu_269_p2 == 1'd0))) begin
        input_0_V_addr_2_reg_405 <= sext_ln1265_fu_290_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state21) & (icmp_ln278_fu_310_p2 == 1'd0))) begin
        input_0_V_addr_3_reg_439 <= sext_ln1265_1_fu_331_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln273_fu_269_p2 == 1'd1))) begin
        sext_ln1148_reg_410 <= sext_ln1148_fu_295_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln267_fu_186_p2 == 1'd0))) begin
        sub_ln203_reg_362[7 : 1] <= sub_ln203_fu_218_p2[7 : 1];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        sub_ln703_reg_415 <= sub_ln703_fu_299_p2;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state2) & (icmp_ln267_fu_186_p2 == 1'd1)))) begin
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
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln267_fu_186_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state22)) begin
        grp_fu_344_ap_start = 1'b1;
    end else begin
        grp_fu_344_ap_start = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state83)) begin
        input_0_V_address0 = input_0_V_addr_3_reg_439;
    end else if ((1'b1 == ap_CS_fsm_state21)) begin
        input_0_V_address0 = sext_ln1265_1_fu_331_p1;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        input_0_V_address0 = input_0_V_addr_2_reg_405;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        input_0_V_address0 = sext_ln1265_fu_290_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        input_0_V_address0 = sext_ln1494_fu_244_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        input_0_V_address0 = sext_ln203_fu_224_p1;
    end else begin
        input_0_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state83) | (1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state20) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state2))) begin
        input_0_V_ce0 = 1'b1;
    end else begin
        input_0_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state83)) begin
        input_0_V_d0 = trunc_ln703_fu_349_p1;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        input_0_V_d0 = agg_result_V_i_reg_420;
    end else begin
        input_0_V_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state83) | (1'b1 == ap_CS_fsm_state20))) begin
        input_0_V_we0 = 1'b1;
    end else begin
        input_0_V_we0 = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln267_fu_186_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln270_fu_229_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (icmp_ln273_fu_269_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state21;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
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
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state21 : begin
            if (((1'b1 == ap_CS_fsm_state21) & (icmp_ln278_fu_310_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state22;
            end
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
            ap_NS_fsm = ap_ST_fsm_state66;
        end
        ap_ST_fsm_state66 : begin
            ap_NS_fsm = ap_ST_fsm_state67;
        end
        ap_ST_fsm_state67 : begin
            ap_NS_fsm = ap_ST_fsm_state68;
        end
        ap_ST_fsm_state68 : begin
            ap_NS_fsm = ap_ST_fsm_state69;
        end
        ap_ST_fsm_state69 : begin
            ap_NS_fsm = ap_ST_fsm_state70;
        end
        ap_ST_fsm_state70 : begin
            ap_NS_fsm = ap_ST_fsm_state71;
        end
        ap_ST_fsm_state71 : begin
            ap_NS_fsm = ap_ST_fsm_state72;
        end
        ap_ST_fsm_state72 : begin
            ap_NS_fsm = ap_ST_fsm_state73;
        end
        ap_ST_fsm_state73 : begin
            ap_NS_fsm = ap_ST_fsm_state74;
        end
        ap_ST_fsm_state74 : begin
            ap_NS_fsm = ap_ST_fsm_state75;
        end
        ap_ST_fsm_state75 : begin
            ap_NS_fsm = ap_ST_fsm_state76;
        end
        ap_ST_fsm_state76 : begin
            ap_NS_fsm = ap_ST_fsm_state77;
        end
        ap_ST_fsm_state77 : begin
            ap_NS_fsm = ap_ST_fsm_state78;
        end
        ap_ST_fsm_state78 : begin
            ap_NS_fsm = ap_ST_fsm_state79;
        end
        ap_ST_fsm_state79 : begin
            ap_NS_fsm = ap_ST_fsm_state80;
        end
        ap_ST_fsm_state80 : begin
            ap_NS_fsm = ap_ST_fsm_state81;
        end
        ap_ST_fsm_state81 : begin
            ap_NS_fsm = ap_ST_fsm_state82;
        end
        ap_ST_fsm_state82 : begin
            ap_NS_fsm = ap_ST_fsm_state83;
        end
        ap_ST_fsm_state83 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln1265_1_fu_326_p2 = ($signed(sub_ln203_reg_362) + $signed(zext_ln1265_1_fu_322_p1));

assign add_ln1265_fu_285_p2 = ($signed(sub_ln203_reg_362) + $signed(zext_ln1265_fu_281_p1));

assign add_ln1494_fu_239_p2 = ($signed(sub_ln203_reg_362) + $signed(zext_ln1494_fu_235_p1));

assign add_ln270_fu_249_p2 = (k_0_0_reg_124 + 3'd1);

assign add_ln273_fu_275_p2 = (k1_0_0_reg_147 + 3'd1);

assign add_ln278_fu_316_p2 = (k2_0_0_reg_158 + 3'd1);

assign add_ln703_fu_305_p2 = ($signed(p_Val2_34_0_reg_135) + $signed(agg_result_V_i_reg_420));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];

assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state83 = ap_CS_fsm[32'd82];

assign ap_NS_fsm_state8 = ap_NS_fsm[32'd7];

assign grp_exp_38_18_s_fu_169_ap_start = grp_exp_38_18_s_fu_169_ap_start_reg;

assign grp_fu_344_p0 = {{input_0_V_q0}, {20'd0}};

assign grp_fu_344_p1 = sext_ln1148_reg_410;

assign i_fu_192_p2 = (i_0_reg_103 + 5'd1);

assign icmp_ln1494_fu_255_p2 = (($signed(input_0_V_q0) > $signed(p_Val2_33_0_reg_114)) ? 1'b1 : 1'b0);

assign icmp_ln267_fu_186_p2 = ((i_0_reg_103 == 5'd16) ? 1'b1 : 1'b0);

assign icmp_ln270_fu_229_p2 = ((k_0_0_reg_124 == 3'd6) ? 1'b1 : 1'b0);

assign icmp_ln273_fu_269_p2 = ((k1_0_0_reg_147 == 3'd6) ? 1'b1 : 1'b0);

assign icmp_ln278_fu_310_p2 = ((k2_0_0_reg_158 == 3'd6) ? 1'b1 : 1'b0);

assign select_ln271_fu_261_p3 = ((icmp_ln1494_fu_255_p2[0:0] === 1'b1) ? input_0_V_q0 : p_Val2_33_0_reg_114);

assign sext_ln1148_fu_295_p1 = p_Val2_34_0_reg_135;

assign sext_ln1265_1_fu_331_p1 = $signed(add_ln1265_1_fu_326_p2);

assign sext_ln1265_fu_290_p1 = $signed(add_ln1265_fu_285_p2);

assign sext_ln1494_fu_244_p1 = $signed(add_ln1494_fu_239_p2);

assign sext_ln203_fu_224_p1 = sub_ln203_fu_218_p2;

assign sub_ln203_fu_218_p2 = (tmp_s_fu_198_p3 - zext_ln203_fu_214_p1);

assign sub_ln703_fu_299_p2 = (input_0_V_q0 - p_Val2_33_0_reg_114);

assign tmp_48_fu_206_p3 = {{i_0_reg_103}, {1'd0}};

assign tmp_s_fu_198_p3 = {{i_0_reg_103}, {3'd0}};

assign trunc_ln703_fu_349_p1 = grp_fu_344_p2[37:0];

assign zext_ln1265_1_fu_322_p1 = k2_0_0_reg_158;

assign zext_ln1265_fu_281_p1 = k1_0_0_reg_147;

assign zext_ln1494_fu_235_p1 = k_0_0_reg_124;

assign zext_ln203_fu_214_p1 = tmp_48_fu_206_p3;

always @ (posedge ap_clk) begin
    sub_ln203_reg_362[0] <= 1'b0;
end

endmodule //softmax_1_16_6_s