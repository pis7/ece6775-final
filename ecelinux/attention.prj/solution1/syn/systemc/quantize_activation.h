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

#include "dut_udiv_51s_31nseOg.h"

namespace ap_rtl {

struct quantize_activation : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > input_0_V_address0;
    sc_out< sc_logic > input_0_V_ce0;
    sc_in< sc_lv<32> > input_0_V_q0;
    sc_out< sc_lv<4> > input_0_V_address1;
    sc_out< sc_logic > input_0_V_ce1;
    sc_in< sc_lv<32> > input_0_V_q1;
    sc_out< sc_lv<4> > output_states_0_V_address0;
    sc_out< sc_logic > output_states_0_V_ce0;
    sc_out< sc_logic > output_states_0_V_we0;
    sc_out< sc_lv<8> > output_states_0_V_d0;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<51> > ap_var_for_const0;


    // Module declarations
    quantize_activation(sc_module_name name);
    SC_HAS_PROCESS(quantize_activation);

    ~quantize_activation();

    sc_trace_file* mVcdFile;

    dut_udiv_51s_31nseOg<1,55,51,31,32>* dut_udiv_51s_31nseOg_U9;
    sc_signal< sc_lv<67> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > j1_0_0_reg_280;
    sc_signal< sc_lv<32> > grp_fu_305_p3;
    sc_signal< sc_lv<32> > reg_335;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<31> > select_ln100_fu_351_p3;
    sc_signal< sc_lv<31> > select_ln100_reg_842;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<31> > trunc_ln58_1_fu_362_p1;
    sc_signal< sc_lv<31> > trunc_ln58_1_reg_858;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln1494_fu_366_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_reg_863;
    sc_signal< sc_lv<32> > grp_fu_327_p3;
    sc_signal< sc_lv<32> > p_Val2_15_reg_868;
    sc_signal< sc_lv<31> > trunc_ln58_2_fu_372_p1;
    sc_signal< sc_lv<31> > trunc_ln58_2_reg_873;
    sc_signal< sc_lv<31> > select_ln100_3_fu_390_p3;
    sc_signal< sc_lv<31> > select_ln100_3_reg_888;
    sc_signal< sc_lv<31> > trunc_ln58_3_fu_401_p1;
    sc_signal< sc_lv<31> > trunc_ln58_3_reg_893;
    sc_signal< sc_lv<1> > icmp_ln1494_3_fu_405_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_3_reg_898;
    sc_signal< sc_lv<31> > trunc_ln58_4_fu_411_p1;
    sc_signal< sc_lv<31> > trunc_ln58_4_reg_903;
    sc_signal< sc_lv<31> > select_ln100_5_fu_430_p3;
    sc_signal< sc_lv<31> > select_ln100_5_reg_918;
    sc_signal< sc_lv<31> > trunc_ln58_5_fu_441_p1;
    sc_signal< sc_lv<31> > trunc_ln58_5_reg_923;
    sc_signal< sc_lv<1> > icmp_ln1494_5_fu_445_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_5_reg_928;
    sc_signal< sc_lv<31> > trunc_ln58_6_fu_451_p1;
    sc_signal< sc_lv<31> > trunc_ln58_6_reg_933;
    sc_signal< sc_lv<31> > select_ln100_7_fu_470_p3;
    sc_signal< sc_lv<31> > select_ln100_7_reg_948;
    sc_signal< sc_lv<31> > trunc_ln58_7_fu_481_p1;
    sc_signal< sc_lv<31> > trunc_ln58_7_reg_953;
    sc_signal< sc_lv<1> > icmp_ln1494_7_fu_485_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_7_reg_958;
    sc_signal< sc_lv<31> > trunc_ln58_8_fu_491_p1;
    sc_signal< sc_lv<31> > trunc_ln58_8_reg_963;
    sc_signal< sc_lv<31> > select_ln100_9_fu_510_p3;
    sc_signal< sc_lv<31> > select_ln100_9_reg_978;
    sc_signal< sc_lv<31> > trunc_ln58_9_fu_521_p1;
    sc_signal< sc_lv<31> > trunc_ln58_9_reg_983;
    sc_signal< sc_lv<1> > icmp_ln1494_9_fu_525_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_9_reg_988;
    sc_signal< sc_lv<31> > trunc_ln58_10_fu_531_p1;
    sc_signal< sc_lv<31> > trunc_ln58_10_reg_993;
    sc_signal< sc_lv<31> > select_ln100_11_fu_550_p3;
    sc_signal< sc_lv<31> > select_ln100_11_reg_1008;
    sc_signal< sc_lv<31> > trunc_ln58_11_fu_561_p1;
    sc_signal< sc_lv<31> > trunc_ln58_11_reg_1013;
    sc_signal< sc_lv<1> > icmp_ln1494_11_fu_565_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_11_reg_1018;
    sc_signal< sc_lv<31> > trunc_ln58_12_fu_571_p1;
    sc_signal< sc_lv<31> > trunc_ln58_12_reg_1023;
    sc_signal< sc_lv<31> > select_ln100_13_fu_590_p3;
    sc_signal< sc_lv<31> > select_ln100_13_reg_1038;
    sc_signal< sc_lv<31> > trunc_ln58_13_fu_601_p1;
    sc_signal< sc_lv<31> > trunc_ln58_13_reg_1043;
    sc_signal< sc_lv<1> > icmp_ln1494_13_fu_605_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_13_reg_1048;
    sc_signal< sc_lv<31> > trunc_ln58_14_fu_611_p1;
    sc_signal< sc_lv<31> > trunc_ln58_14_reg_1053;
    sc_signal< sc_lv<31> > select_ln100_15_fu_630_p3;
    sc_signal< sc_lv<31> > select_ln100_15_reg_1063;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<31> > trunc_ln58_15_fu_641_p1;
    sc_signal< sc_lv<31> > trunc_ln58_15_reg_1068;
    sc_signal< sc_lv<1> > icmp_ln1494_15_fu_645_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_15_reg_1073;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > trunc_ln703_fu_680_p1;
    sc_signal< sc_lv<32> > trunc_ln703_reg_1083;
    sc_signal< sc_logic > ap_CS_fsm_state65;
    sc_signal< sc_lv<54> > sext_ln134_fu_684_p1;
    sc_signal< sc_lv<54> > sext_ln134_reg_1087;
    sc_signal< sc_lv<1> > icmp_ln134_fu_688_p2;
    sc_signal< sc_lv<1> > icmp_ln134_reg_1092;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state66_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state67_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state68_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state69_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state70_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln134_reg_1092_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln134_reg_1092_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln134_reg_1092_pp0_iter3_reg;
    sc_signal< sc_lv<5> > add_ln134_fu_694_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > zext_ln135_fu_700_p1;
    sc_signal< sc_lv<64> > zext_ln135_reg_1101;
    sc_signal< sc_lv<64> > zext_ln135_reg_1101_pp0_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln135_reg_1101_pp0_iter2_reg;
    sc_signal< sc_lv<64> > zext_ln135_reg_1101_pp0_iter3_reg;
    sc_signal< sc_lv<32> > input_0_V_load_reg_1111;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<32> > p_Val2_42_reg_1116;
    sc_signal< sc_lv<10> > select_ln850_fu_783_p3;
    sc_signal< sc_lv<10> > select_ln850_reg_1122;
    sc_signal< sc_lv<3> > tmp_27_reg_1128;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state66;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > grp_fu_291_p3;
    sc_signal< sc_lv<32> > grp_fu_299_p2;
    sc_signal< sc_lv<1> > grp_fu_313_p3;
    sc_signal< sc_lv<32> > grp_fu_321_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_343_p3;
    sc_signal< sc_lv<31> > trunc_ln58_fu_339_p1;
    sc_signal< sc_lv<32> > zext_ln100_fu_359_p1;
    sc_signal< sc_lv<31> > select_ln100_2_fu_376_p3;
    sc_signal< sc_lv<32> > zext_ln100_1_fu_381_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_2_fu_385_p2;
    sc_signal< sc_lv<32> > zext_ln100_2_fu_397_p1;
    sc_signal< sc_lv<31> > select_ln100_4_fu_415_p3;
    sc_signal< sc_lv<32> > zext_ln100_3_fu_420_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_4_fu_424_p2;
    sc_signal< sc_lv<32> > zext_ln100_4_fu_437_p1;
    sc_signal< sc_lv<31> > select_ln100_6_fu_455_p3;
    sc_signal< sc_lv<32> > zext_ln100_5_fu_460_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_6_fu_464_p2;
    sc_signal< sc_lv<32> > zext_ln100_6_fu_477_p1;
    sc_signal< sc_lv<31> > select_ln100_8_fu_495_p3;
    sc_signal< sc_lv<32> > zext_ln100_7_fu_500_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_8_fu_504_p2;
    sc_signal< sc_lv<32> > zext_ln100_8_fu_517_p1;
    sc_signal< sc_lv<31> > select_ln100_10_fu_535_p3;
    sc_signal< sc_lv<32> > zext_ln100_9_fu_540_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_10_fu_544_p2;
    sc_signal< sc_lv<32> > zext_ln100_10_fu_557_p1;
    sc_signal< sc_lv<31> > select_ln100_12_fu_575_p3;
    sc_signal< sc_lv<32> > zext_ln100_11_fu_580_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_12_fu_584_p2;
    sc_signal< sc_lv<32> > zext_ln100_12_fu_597_p1;
    sc_signal< sc_lv<31> > select_ln100_14_fu_615_p3;
    sc_signal< sc_lv<32> > zext_ln100_13_fu_620_p1;
    sc_signal< sc_lv<1> > icmp_ln1494_14_fu_624_p2;
    sc_signal< sc_lv<32> > zext_ln100_14_fu_637_p1;
    sc_signal< sc_lv<31> > select_ln100_16_fu_651_p3;
    sc_signal< sc_lv<1> > icmp_ln1494_16_fu_656_p2;
    sc_signal< sc_lv<31> > select_ln100_17_fu_662_p3;
    sc_signal< sc_lv<31> > grp_fu_674_p1;
    sc_signal< sc_lv<32> > grp_fu_674_p2;
    sc_signal< sc_lv<32> > mul_ln1118_fu_708_p0;
    sc_signal< sc_lv<32> > mul_ln1118_fu_708_p1;
    sc_signal< sc_lv<54> > mul_ln1118_fu_708_p2;
    sc_signal< sc_lv<1> > icmp_ln1494_17_fu_723_p2;
    sc_signal< sc_lv<32> > select_ln107_fu_728_p3;
    sc_signal< sc_lv<32> > add_ln107_fu_736_p2;
    sc_signal< sc_lv<22> > trunc_ln851_fu_759_p1;
    sc_signal< sc_lv<10> > p_Result_s_fu_741_p4;
    sc_signal< sc_lv<1> > icmp_ln851_fu_763_p2;
    sc_signal< sc_lv<10> > add_ln700_fu_769_p2;
    sc_signal< sc_lv<1> > tmp_26_fu_751_p3;
    sc_signal< sc_lv<10> > select_ln851_fu_775_p3;
    sc_signal< sc_lv<1> > icmp_ln887_fu_801_p2;
    sc_signal< sc_lv<1> > icmp_ln895_fu_806_p2;
    sc_signal< sc_lv<1> > or_ln887_fu_822_p2;
    sc_signal< sc_lv<8> > select_ln887_fu_814_p3;
    sc_signal< sc_lv<8> > trunc_ln136_fu_811_p1;
    sc_signal< sc_logic > grp_fu_674_ap_start;
    sc_signal< sc_logic > grp_fu_674_ap_done;
    sc_signal< sc_logic > ap_CS_fsm_state71;
    sc_signal< sc_lv<67> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<51> > grp_fu_674_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<67> ap_ST_fsm_state1;
    static const sc_lv<67> ap_ST_fsm_state2;
    static const sc_lv<67> ap_ST_fsm_state3;
    static const sc_lv<67> ap_ST_fsm_state4;
    static const sc_lv<67> ap_ST_fsm_state5;
    static const sc_lv<67> ap_ST_fsm_state6;
    static const sc_lv<67> ap_ST_fsm_state7;
    static const sc_lv<67> ap_ST_fsm_state8;
    static const sc_lv<67> ap_ST_fsm_state9;
    static const sc_lv<67> ap_ST_fsm_state10;
    static const sc_lv<67> ap_ST_fsm_state11;
    static const sc_lv<67> ap_ST_fsm_state12;
    static const sc_lv<67> ap_ST_fsm_state13;
    static const sc_lv<67> ap_ST_fsm_state14;
    static const sc_lv<67> ap_ST_fsm_state15;
    static const sc_lv<67> ap_ST_fsm_state16;
    static const sc_lv<67> ap_ST_fsm_state17;
    static const sc_lv<67> ap_ST_fsm_state18;
    static const sc_lv<67> ap_ST_fsm_state19;
    static const sc_lv<67> ap_ST_fsm_state20;
    static const sc_lv<67> ap_ST_fsm_state21;
    static const sc_lv<67> ap_ST_fsm_state22;
    static const sc_lv<67> ap_ST_fsm_state23;
    static const sc_lv<67> ap_ST_fsm_state24;
    static const sc_lv<67> ap_ST_fsm_state25;
    static const sc_lv<67> ap_ST_fsm_state26;
    static const sc_lv<67> ap_ST_fsm_state27;
    static const sc_lv<67> ap_ST_fsm_state28;
    static const sc_lv<67> ap_ST_fsm_state29;
    static const sc_lv<67> ap_ST_fsm_state30;
    static const sc_lv<67> ap_ST_fsm_state31;
    static const sc_lv<67> ap_ST_fsm_state32;
    static const sc_lv<67> ap_ST_fsm_state33;
    static const sc_lv<67> ap_ST_fsm_state34;
    static const sc_lv<67> ap_ST_fsm_state35;
    static const sc_lv<67> ap_ST_fsm_state36;
    static const sc_lv<67> ap_ST_fsm_state37;
    static const sc_lv<67> ap_ST_fsm_state38;
    static const sc_lv<67> ap_ST_fsm_state39;
    static const sc_lv<67> ap_ST_fsm_state40;
    static const sc_lv<67> ap_ST_fsm_state41;
    static const sc_lv<67> ap_ST_fsm_state42;
    static const sc_lv<67> ap_ST_fsm_state43;
    static const sc_lv<67> ap_ST_fsm_state44;
    static const sc_lv<67> ap_ST_fsm_state45;
    static const sc_lv<67> ap_ST_fsm_state46;
    static const sc_lv<67> ap_ST_fsm_state47;
    static const sc_lv<67> ap_ST_fsm_state48;
    static const sc_lv<67> ap_ST_fsm_state49;
    static const sc_lv<67> ap_ST_fsm_state50;
    static const sc_lv<67> ap_ST_fsm_state51;
    static const sc_lv<67> ap_ST_fsm_state52;
    static const sc_lv<67> ap_ST_fsm_state53;
    static const sc_lv<67> ap_ST_fsm_state54;
    static const sc_lv<67> ap_ST_fsm_state55;
    static const sc_lv<67> ap_ST_fsm_state56;
    static const sc_lv<67> ap_ST_fsm_state57;
    static const sc_lv<67> ap_ST_fsm_state58;
    static const sc_lv<67> ap_ST_fsm_state59;
    static const sc_lv<67> ap_ST_fsm_state60;
    static const sc_lv<67> ap_ST_fsm_state61;
    static const sc_lv<67> ap_ST_fsm_state62;
    static const sc_lv<67> ap_ST_fsm_state63;
    static const sc_lv<67> ap_ST_fsm_state64;
    static const sc_lv<67> ap_ST_fsm_state65;
    static const sc_lv<67> ap_ST_fsm_pp0_stage0;
    static const sc_lv<67> ap_ST_fsm_state71;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_41;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<31> ap_const_lv31_29;
    static const sc_lv<51> ap_const_lv51_7F00000000000;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_200000;
    static const sc_lv<32> ap_const_lv32_FFE00000;
    static const sc_lv<22> ap_const_lv22_0;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_380;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_42;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln107_fu_736_p2();
    void thread_add_ln134_fu_694_p2();
    void thread_add_ln700_fu_769_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state65();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state71();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state66_pp0_stage0_iter0();
    void thread_ap_block_state67_pp0_stage0_iter1();
    void thread_ap_block_state68_pp0_stage0_iter2();
    void thread_ap_block_state69_pp0_stage0_iter3();
    void thread_ap_block_state70_pp0_stage0_iter4();
    void thread_ap_condition_pp0_exit_iter0_state66();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_grp_fu_291_p3();
    void thread_grp_fu_299_p2();
    void thread_grp_fu_305_p3();
    void thread_grp_fu_313_p3();
    void thread_grp_fu_321_p2();
    void thread_grp_fu_327_p3();
    void thread_grp_fu_674_ap_start();
    void thread_grp_fu_674_p1();
    void thread_grp_fu_674_p10();
    void thread_icmp_ln134_fu_688_p2();
    void thread_icmp_ln1494_10_fu_544_p2();
    void thread_icmp_ln1494_11_fu_565_p2();
    void thread_icmp_ln1494_12_fu_584_p2();
    void thread_icmp_ln1494_13_fu_605_p2();
    void thread_icmp_ln1494_14_fu_624_p2();
    void thread_icmp_ln1494_15_fu_645_p2();
    void thread_icmp_ln1494_16_fu_656_p2();
    void thread_icmp_ln1494_17_fu_723_p2();
    void thread_icmp_ln1494_2_fu_385_p2();
    void thread_icmp_ln1494_3_fu_405_p2();
    void thread_icmp_ln1494_4_fu_424_p2();
    void thread_icmp_ln1494_5_fu_445_p2();
    void thread_icmp_ln1494_6_fu_464_p2();
    void thread_icmp_ln1494_7_fu_485_p2();
    void thread_icmp_ln1494_8_fu_504_p2();
    void thread_icmp_ln1494_9_fu_525_p2();
    void thread_icmp_ln1494_fu_366_p2();
    void thread_icmp_ln851_fu_763_p2();
    void thread_icmp_ln887_fu_801_p2();
    void thread_icmp_ln895_fu_806_p2();
    void thread_input_0_V_address0();
    void thread_input_0_V_address1();
    void thread_input_0_V_ce0();
    void thread_input_0_V_ce1();
    void thread_mul_ln1118_fu_708_p0();
    void thread_mul_ln1118_fu_708_p1();
    void thread_mul_ln1118_fu_708_p2();
    void thread_or_ln887_fu_822_p2();
    void thread_output_states_0_V_address0();
    void thread_output_states_0_V_ce0();
    void thread_output_states_0_V_d0();
    void thread_output_states_0_V_we0();
    void thread_p_Result_s_fu_741_p4();
    void thread_select_ln100_10_fu_535_p3();
    void thread_select_ln100_11_fu_550_p3();
    void thread_select_ln100_12_fu_575_p3();
    void thread_select_ln100_13_fu_590_p3();
    void thread_select_ln100_14_fu_615_p3();
    void thread_select_ln100_15_fu_630_p3();
    void thread_select_ln100_16_fu_651_p3();
    void thread_select_ln100_17_fu_662_p3();
    void thread_select_ln100_2_fu_376_p3();
    void thread_select_ln100_3_fu_390_p3();
    void thread_select_ln100_4_fu_415_p3();
    void thread_select_ln100_5_fu_430_p3();
    void thread_select_ln100_6_fu_455_p3();
    void thread_select_ln100_7_fu_470_p3();
    void thread_select_ln100_8_fu_495_p3();
    void thread_select_ln100_9_fu_510_p3();
    void thread_select_ln100_fu_351_p3();
    void thread_select_ln107_fu_728_p3();
    void thread_select_ln850_fu_783_p3();
    void thread_select_ln851_fu_775_p3();
    void thread_select_ln887_fu_814_p3();
    void thread_sext_ln134_fu_684_p1();
    void thread_tmp_10_fu_343_p3();
    void thread_tmp_26_fu_751_p3();
    void thread_trunc_ln136_fu_811_p1();
    void thread_trunc_ln58_10_fu_531_p1();
    void thread_trunc_ln58_11_fu_561_p1();
    void thread_trunc_ln58_12_fu_571_p1();
    void thread_trunc_ln58_13_fu_601_p1();
    void thread_trunc_ln58_14_fu_611_p1();
    void thread_trunc_ln58_15_fu_641_p1();
    void thread_trunc_ln58_1_fu_362_p1();
    void thread_trunc_ln58_2_fu_372_p1();
    void thread_trunc_ln58_3_fu_401_p1();
    void thread_trunc_ln58_4_fu_411_p1();
    void thread_trunc_ln58_5_fu_441_p1();
    void thread_trunc_ln58_6_fu_451_p1();
    void thread_trunc_ln58_7_fu_481_p1();
    void thread_trunc_ln58_8_fu_491_p1();
    void thread_trunc_ln58_9_fu_521_p1();
    void thread_trunc_ln58_fu_339_p1();
    void thread_trunc_ln703_fu_680_p1();
    void thread_trunc_ln851_fu_759_p1();
    void thread_zext_ln100_10_fu_557_p1();
    void thread_zext_ln100_11_fu_580_p1();
    void thread_zext_ln100_12_fu_597_p1();
    void thread_zext_ln100_13_fu_620_p1();
    void thread_zext_ln100_14_fu_637_p1();
    void thread_zext_ln100_1_fu_381_p1();
    void thread_zext_ln100_2_fu_397_p1();
    void thread_zext_ln100_3_fu_420_p1();
    void thread_zext_ln100_4_fu_437_p1();
    void thread_zext_ln100_5_fu_460_p1();
    void thread_zext_ln100_6_fu_477_p1();
    void thread_zext_ln100_7_fu_500_p1();
    void thread_zext_ln100_8_fu_517_p1();
    void thread_zext_ln100_9_fu_540_p1();
    void thread_zext_ln100_fu_359_p1();
    void thread_zext_ln135_fu_700_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif