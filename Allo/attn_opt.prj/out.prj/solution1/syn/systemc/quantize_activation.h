// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _quantize_activation_HH_
#define _quantize_activation_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "attention_fadd_32pcA.h"
#include "attention_fmul_32qcK.h"
#include "attention_fdiv_32rcU.h"
#include "attention_fcmp_32sc4.h"

namespace ap_rtl {

struct quantize_activation : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<11> > v22_0_address0;
    sc_out< sc_logic > v22_0_ce0;
    sc_in< sc_lv<32> > v22_0_q0;
    sc_out< sc_lv<11> > v24_0_address0;
    sc_out< sc_logic > v24_0_ce0;
    sc_out< sc_logic > v24_0_we0;
    sc_out< sc_lv<8> > v24_0_d0;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;


    // Module declarations
    quantize_activation(sc_module_name name);
    SC_HAS_PROCESS(quantize_activation);

    ~quantize_activation();

    sc_trace_file* mVcdFile;

    attention_fadd_32pcA<1,5,32,32,32>* attention_fadd_32pcA_U33;
    attention_fmul_32qcK<1,4,32,32,32>* attention_fmul_32qcK_U34;
    attention_fdiv_32rcU<1,16,32,32,32>* attention_fdiv_32rcU_U35;
    attention_fcmp_32sc4<1,2,32,32,1>* attention_fcmp_32sc4_U36;
    sc_signal< sc_lv<40> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > reg_211;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<11> > add_ln70_fu_223_p2;
    sc_signal< sc_lv<11> > add_ln70_reg_733;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln70_fu_217_p2;
    sc_signal< sc_lv<32> > select_ln74_fu_286_p3;
    sc_signal< sc_lv<32> > select_ln74_reg_743;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > select_ln80_fu_377_p3;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > icmp_ln215_fu_402_p2;
    sc_signal< sc_lv<1> > icmp_ln215_reg_755;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > icmp_ln215_1_fu_408_p2;
    sc_signal< sc_lv<1> > icmp_ln215_1_reg_760;
    sc_signal< sc_lv<1> > grp_fu_202_p2;
    sc_signal< sc_lv<1> > tmp_7_reg_765;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > grp_fu_197_p2;
    sc_signal< sc_lv<32> > v_reg_775;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<9> > add_ln97_fu_438_p2;
    sc_signal< sc_lv<9> > add_ln97_reg_783;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<11> > shl_ln_fu_444_p3;
    sc_signal< sc_lv<11> > shl_ln_reg_788;
    sc_signal< sc_lv<1> > icmp_ln97_fu_432_p2;
    sc_signal< sc_lv<12> > zext_ln98_1_fu_452_p1;
    sc_signal< sc_lv<12> > zext_ln98_1_reg_793;
    sc_signal< sc_lv<3> > add_ln98_fu_466_p2;
    sc_signal< sc_lv<3> > add_ln98_reg_801;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<1> > icmp_ln98_fu_460_p2;
    sc_signal< sc_lv<12> > add_ln120_fu_486_p2;
    sc_signal< sc_lv<12> > add_ln120_reg_811;
    sc_signal< sc_lv<32> > grp_fu_193_p2;
    sc_signal< sc_lv<32> > v1_reg_816;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<1> > icmp_ln102_fu_508_p2;
    sc_signal< sc_lv<1> > icmp_ln102_reg_823;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<1> > icmp_ln102_1_fu_514_p2;
    sc_signal< sc_lv<1> > icmp_ln102_1_reg_828;
    sc_signal< sc_lv<1> > tmp_4_reg_833;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<32> > grp_fu_189_p2;
    sc_signal< sc_lv<32> > x_assign_reg_843;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_lv<1> > p_Result_s_reg_848;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_lv<32> > p_Val2_5_fu_659_p3;
    sc_signal< sc_lv<32> > p_Val2_5_reg_853;
    sc_signal< sc_lv<8> > select_ln116_1_fu_718_p3;
    sc_signal< sc_lv<8> > select_ln116_1_reg_859;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_lv<32> > ap_phi_mux_v45_0_phi_fu_148_p4;
    sc_signal< sc_lv<32> > v45_0_reg_144;
    sc_signal< sc_lv<11> > j_0_0_reg_156;
    sc_signal< sc_lv<9> > j1_0_0_reg_167;
    sc_signal< sc_lv<3> > l_0_0_reg_178;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_lv<64> > zext_ln71_fu_229_p1;
    sc_signal< sc_lv<64> > zext_ln99_fu_477_p1;
    sc_signal< sc_lv<64> > zext_ln120_1_fu_726_p1;
    sc_signal< sc_lv<32> > grp_fu_189_p1;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<32> > grp_fu_197_p1;
    sc_signal< sc_lv<32> > grp_fu_202_p0;
    sc_signal< sc_lv<32> > grp_fu_202_p1;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<32> > bitcast_ln72_fu_234_p1;
    sc_signal< sc_lv<8> > tmp_8_fu_238_p4;
    sc_signal< sc_lv<23> > trunc_ln72_fu_248_p1;
    sc_signal< sc_lv<1> > icmp_ln72_1_fu_258_p2;
    sc_signal< sc_lv<1> > icmp_ln72_fu_252_p2;
    sc_signal< sc_lv<1> > or_ln72_fu_264_p2;
    sc_signal< sc_lv<32> > xor_ln73_fu_276_p2;
    sc_signal< sc_lv<1> > and_ln72_fu_270_p2;
    sc_signal< sc_lv<32> > bitcast_ln73_fu_282_p1;
    sc_signal< sc_lv<32> > bitcast_ln79_fu_294_p1;
    sc_signal< sc_lv<32> > bitcast_ln79_1_fu_312_p1;
    sc_signal< sc_lv<8> > tmp_s_fu_298_p4;
    sc_signal< sc_lv<23> > trunc_ln79_fu_308_p1;
    sc_signal< sc_lv<1> > icmp_ln79_1_fu_335_p2;
    sc_signal< sc_lv<1> > icmp_ln79_fu_329_p2;
    sc_signal< sc_lv<8> > tmp_1_fu_315_p4;
    sc_signal< sc_lv<23> > trunc_ln79_1_fu_325_p1;
    sc_signal< sc_lv<1> > icmp_ln79_3_fu_353_p2;
    sc_signal< sc_lv<1> > icmp_ln79_2_fu_347_p2;
    sc_signal< sc_lv<1> > or_ln79_fu_341_p2;
    sc_signal< sc_lv<1> > or_ln79_1_fu_359_p2;
    sc_signal< sc_lv<1> > and_ln79_fu_365_p2;
    sc_signal< sc_lv<1> > and_ln79_1_fu_371_p2;
    sc_signal< sc_lv<32> > bitcast_ln215_fu_384_p1;
    sc_signal< sc_lv<8> > tmp_6_fu_388_p4;
    sc_signal< sc_lv<23> > trunc_ln215_fu_398_p1;
    sc_signal< sc_lv<1> > or_ln215_fu_414_p2;
    sc_signal< sc_lv<1> > and_ln215_fu_418_p2;
    sc_signal< sc_lv<11> > zext_ln98_fu_456_p1;
    sc_signal< sc_lv<11> > add_ln99_fu_472_p2;
    sc_signal< sc_lv<12> > zext_ln120_fu_482_p1;
    sc_signal< sc_lv<32> > bitcast_ln102_fu_491_p1;
    sc_signal< sc_lv<8> > tmp_3_fu_494_p4;
    sc_signal< sc_lv<23> > trunc_ln102_fu_504_p1;
    sc_signal< sc_lv<1> > or_ln102_fu_520_p2;
    sc_signal< sc_lv<1> > and_ln102_fu_524_p2;
    sc_signal< sc_lv<32> > p_Val2_s_fu_538_p1;
    sc_signal< sc_lv<23> > tmp_V_1_fu_559_p1;
    sc_signal< sc_lv<25> > mantissa_V_fu_563_p4;
    sc_signal< sc_lv<8> > tmp_V_fu_549_p4;
    sc_signal< sc_lv<9> > zext_ln339_fu_577_p1;
    sc_signal< sc_lv<9> > add_ln339_fu_581_p2;
    sc_signal< sc_lv<8> > sub_ln1311_fu_595_p2;
    sc_signal< sc_lv<1> > isNeg_fu_587_p3;
    sc_signal< sc_lv<9> > sext_ln1311_fu_601_p1;
    sc_signal< sc_lv<9> > ush_fu_605_p3;
    sc_signal< sc_lv<32> > sext_ln1311_1_fu_613_p1;
    sc_signal< sc_lv<25> > sext_ln1311_2_fu_617_p1;
    sc_signal< sc_lv<79> > zext_ln682_fu_573_p1;
    sc_signal< sc_lv<79> > zext_ln1287_fu_621_p1;
    sc_signal< sc_lv<25> > r_V_fu_625_p2;
    sc_signal< sc_lv<1> > tmp_12_fu_637_p3;
    sc_signal< sc_lv<79> > r_V_1_fu_631_p2;
    sc_signal< sc_lv<32> > zext_ln662_fu_645_p1;
    sc_signal< sc_lv<32> > tmp_10_fu_649_p4;
    sc_signal< sc_lv<32> > result_V_1_fu_667_p2;
    sc_signal< sc_lv<32> > p_Val2_6_fu_672_p3;
    sc_signal< sc_lv<25> > tmp_13_fu_684_p4;
    sc_signal< sc_lv<1> > icmp_ln111_fu_678_p2;
    sc_signal< sc_lv<1> > icmp_ln113_fu_694_p2;
    sc_signal< sc_lv<1> > or_ln116_fu_712_p2;
    sc_signal< sc_lv<8> > select_ln116_fu_704_p3;
    sc_signal< sc_lv<8> > trunc_ln116_fu_700_p1;
    sc_signal< sc_lv<5> > grp_fu_202_opcode;
    sc_signal< sc_lv<40> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<40> ap_ST_fsm_state1;
    static const sc_lv<40> ap_ST_fsm_state2;
    static const sc_lv<40> ap_ST_fsm_state3;
    static const sc_lv<40> ap_ST_fsm_state4;
    static const sc_lv<40> ap_ST_fsm_state5;
    static const sc_lv<40> ap_ST_fsm_state6;
    static const sc_lv<40> ap_ST_fsm_state7;
    static const sc_lv<40> ap_ST_fsm_state8;
    static const sc_lv<40> ap_ST_fsm_state9;
    static const sc_lv<40> ap_ST_fsm_state10;
    static const sc_lv<40> ap_ST_fsm_state11;
    static const sc_lv<40> ap_ST_fsm_state12;
    static const sc_lv<40> ap_ST_fsm_state13;
    static const sc_lv<40> ap_ST_fsm_state14;
    static const sc_lv<40> ap_ST_fsm_state15;
    static const sc_lv<40> ap_ST_fsm_state16;
    static const sc_lv<40> ap_ST_fsm_state17;
    static const sc_lv<40> ap_ST_fsm_state18;
    static const sc_lv<40> ap_ST_fsm_state19;
    static const sc_lv<40> ap_ST_fsm_state20;
    static const sc_lv<40> ap_ST_fsm_state21;
    static const sc_lv<40> ap_ST_fsm_state22;
    static const sc_lv<40> ap_ST_fsm_state23;
    static const sc_lv<40> ap_ST_fsm_state24;
    static const sc_lv<40> ap_ST_fsm_state25;
    static const sc_lv<40> ap_ST_fsm_state26;
    static const sc_lv<40> ap_ST_fsm_state27;
    static const sc_lv<40> ap_ST_fsm_state28;
    static const sc_lv<40> ap_ST_fsm_state29;
    static const sc_lv<40> ap_ST_fsm_state30;
    static const sc_lv<40> ap_ST_fsm_state31;
    static const sc_lv<40> ap_ST_fsm_state32;
    static const sc_lv<40> ap_ST_fsm_state33;
    static const sc_lv<40> ap_ST_fsm_state34;
    static const sc_lv<40> ap_ST_fsm_state35;
    static const sc_lv<40> ap_ST_fsm_state36;
    static const sc_lv<40> ap_ST_fsm_state37;
    static const sc_lv<40> ap_ST_fsm_state38;
    static const sc_lv<40> ap_ST_fsm_state39;
    static const sc_lv<40> ap_ST_fsm_state40;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_42FE0000;
    static const sc_lv<32> ap_const_lv32_3727C5AC;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<11> ap_const_lv11_600;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_80000000;
    static const sc_lv<9> ap_const_lv9_180;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<32> ap_const_lv32_3F000000;
    static const sc_lv<32> ap_const_lv32_BF000000;
    static const sc_lv<9> ap_const_lv9_181;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_FFFFFF80;
    static const sc_lv<25> ap_const_lv25_0;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<5> ap_const_lv5_4;
    static const sc_lv<5> ap_const_lv5_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_add_ln120_fu_486_p2();
    void thread_add_ln339_fu_581_p2();
    void thread_add_ln70_fu_223_p2();
    void thread_add_ln97_fu_438_p2();
    void thread_add_ln98_fu_466_p2();
    void thread_add_ln99_fu_472_p2();
    void thread_and_ln102_fu_524_p2();
    void thread_and_ln215_fu_418_p2();
    void thread_and_ln72_fu_270_p2();
    void thread_and_ln79_1_fu_371_p2();
    void thread_and_ln79_fu_365_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_v45_0_phi_fu_148_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_bitcast_ln102_fu_491_p1();
    void thread_bitcast_ln215_fu_384_p1();
    void thread_bitcast_ln72_fu_234_p1();
    void thread_bitcast_ln73_fu_282_p1();
    void thread_bitcast_ln79_1_fu_312_p1();
    void thread_bitcast_ln79_fu_294_p1();
    void thread_grp_fu_189_p1();
    void thread_grp_fu_197_p1();
    void thread_grp_fu_202_opcode();
    void thread_grp_fu_202_p0();
    void thread_grp_fu_202_p1();
    void thread_icmp_ln102_1_fu_514_p2();
    void thread_icmp_ln102_fu_508_p2();
    void thread_icmp_ln111_fu_678_p2();
    void thread_icmp_ln113_fu_694_p2();
    void thread_icmp_ln215_1_fu_408_p2();
    void thread_icmp_ln215_fu_402_p2();
    void thread_icmp_ln70_fu_217_p2();
    void thread_icmp_ln72_1_fu_258_p2();
    void thread_icmp_ln72_fu_252_p2();
    void thread_icmp_ln79_1_fu_335_p2();
    void thread_icmp_ln79_2_fu_347_p2();
    void thread_icmp_ln79_3_fu_353_p2();
    void thread_icmp_ln79_fu_329_p2();
    void thread_icmp_ln97_fu_432_p2();
    void thread_icmp_ln98_fu_460_p2();
    void thread_isNeg_fu_587_p3();
    void thread_mantissa_V_fu_563_p4();
    void thread_or_ln102_fu_520_p2();
    void thread_or_ln116_fu_712_p2();
    void thread_or_ln215_fu_414_p2();
    void thread_or_ln72_fu_264_p2();
    void thread_or_ln79_1_fu_359_p2();
    void thread_or_ln79_fu_341_p2();
    void thread_p_Val2_5_fu_659_p3();
    void thread_p_Val2_6_fu_672_p3();
    void thread_p_Val2_s_fu_538_p1();
    void thread_r_V_1_fu_631_p2();
    void thread_r_V_fu_625_p2();
    void thread_result_V_1_fu_667_p2();
    void thread_select_ln116_1_fu_718_p3();
    void thread_select_ln116_fu_704_p3();
    void thread_select_ln74_fu_286_p3();
    void thread_select_ln80_fu_377_p3();
    void thread_sext_ln1311_1_fu_613_p1();
    void thread_sext_ln1311_2_fu_617_p1();
    void thread_sext_ln1311_fu_601_p1();
    void thread_shl_ln_fu_444_p3();
    void thread_sub_ln1311_fu_595_p2();
    void thread_tmp_10_fu_649_p4();
    void thread_tmp_12_fu_637_p3();
    void thread_tmp_13_fu_684_p4();
    void thread_tmp_1_fu_315_p4();
    void thread_tmp_3_fu_494_p4();
    void thread_tmp_6_fu_388_p4();
    void thread_tmp_8_fu_238_p4();
    void thread_tmp_V_1_fu_559_p1();
    void thread_tmp_V_fu_549_p4();
    void thread_tmp_s_fu_298_p4();
    void thread_trunc_ln102_fu_504_p1();
    void thread_trunc_ln116_fu_700_p1();
    void thread_trunc_ln215_fu_398_p1();
    void thread_trunc_ln72_fu_248_p1();
    void thread_trunc_ln79_1_fu_325_p1();
    void thread_trunc_ln79_fu_308_p1();
    void thread_ush_fu_605_p3();
    void thread_v22_0_address0();
    void thread_v22_0_ce0();
    void thread_v24_0_address0();
    void thread_v24_0_ce0();
    void thread_v24_0_d0();
    void thread_v24_0_we0();
    void thread_xor_ln73_fu_276_p2();
    void thread_zext_ln120_1_fu_726_p1();
    void thread_zext_ln120_fu_482_p1();
    void thread_zext_ln1287_fu_621_p1();
    void thread_zext_ln339_fu_577_p1();
    void thread_zext_ln662_fu_645_p1();
    void thread_zext_ln682_fu_573_p1();
    void thread_zext_ln71_fu_229_p1();
    void thread_zext_ln98_1_fu_452_p1();
    void thread_zext_ln98_fu_456_p1();
    void thread_zext_ln99_fu_477_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif