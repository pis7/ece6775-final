// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _GEMM_3D_float_1_HH_
#define _GEMM_3D_float_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct GEMM_3D_float_1 : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > input_1_0_V_address0;
    sc_out< sc_logic > input_1_0_V_ce0;
    sc_in< sc_lv<38> > input_1_0_V_q0;
    sc_out< sc_lv<7> > input_1_0_V_address1;
    sc_out< sc_logic > input_1_0_V_ce1;
    sc_in< sc_lv<38> > input_1_0_V_q1;
    sc_out< sc_lv<14> > input_2_V_address0;
    sc_out< sc_logic > input_2_V_ce0;
    sc_in< sc_lv<38> > input_2_V_q0;
    sc_out< sc_lv<14> > input_2_V_address1;
    sc_out< sc_logic > input_2_V_ce1;
    sc_in< sc_lv<38> > input_2_V_q1;
    sc_out< sc_lv<11> > output_0_V_address0;
    sc_out< sc_logic > output_0_V_ce0;
    sc_out< sc_logic > output_0_V_we0;
    sc_out< sc_lv<38> > output_0_V_d0;


    // Module declarations
    GEMM_3D_float_1(sc_module_name name);
    SC_HAS_PROCESS(GEMM_3D_float_1);

    ~GEMM_3D_float_1();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<38> > reg_225;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<38> > reg_229;
    sc_signal< sc_lv<38> > reg_233;
    sc_signal< sc_lv<38> > reg_237;
    sc_signal< sc_lv<5> > i_fu_247_p2;
    sc_signal< sc_lv<5> > i_reg_827;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > input_1_0_V_addr_reg_832;
    sc_signal< sc_lv<1> > icmp_ln236_fu_241_p2;
    sc_signal< sc_lv<7> > input_1_0_V_addr_1_reg_837;
    sc_signal< sc_lv<7> > input_1_0_V_addr_2_reg_842;
    sc_signal< sc_lv<7> > input_1_0_V_addr_3_reg_847;
    sc_signal< sc_lv<7> > input_1_0_V_addr_4_reg_852;
    sc_signal< sc_lv<7> > input_1_0_V_addr_5_reg_857;
    sc_signal< sc_lv<15> > add_ln1117_fu_367_p2;
    sc_signal< sc_lv<15> > add_ln1117_reg_862;
    sc_signal< sc_lv<15> > sub_ln1117_fu_397_p2;
    sc_signal< sc_lv<15> > sub_ln1117_reg_867;
    sc_signal< sc_lv<15> > sub_ln1117_1_fu_423_p2;
    sc_signal< sc_lv<15> > sub_ln1117_1_reg_872;
    sc_signal< sc_lv<15> > sub_ln1117_2_fu_449_p2;
    sc_signal< sc_lv<15> > sub_ln1117_2_reg_877;
    sc_signal< sc_lv<15> > sub_ln1117_3_fu_475_p2;
    sc_signal< sc_lv<15> > sub_ln1117_3_reg_882;
    sc_signal< sc_lv<15> > sub_ln1117_4_fu_501_p2;
    sc_signal< sc_lv<15> > sub_ln1117_4_reg_887;
    sc_signal< sc_lv<12> > sub_ln203_fu_527_p2;
    sc_signal< sc_lv<12> > sub_ln203_reg_892;
    sc_signal< sc_lv<7> > add_ln238_fu_539_p2;
    sc_signal< sc_lv<7> > add_ln238_reg_900;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln238_fu_533_p2;
    sc_signal< sc_lv<15> > add_ln1117_3_fu_573_p2;
    sc_signal< sc_lv<15> > add_ln1117_3_reg_915;
    sc_signal< sc_lv<15> > add_ln1117_4_fu_578_p2;
    sc_signal< sc_lv<15> > add_ln1117_4_reg_920;
    sc_signal< sc_lv<15> > add_ln1117_5_fu_583_p2;
    sc_signal< sc_lv<15> > add_ln1117_5_reg_925;
    sc_signal< sc_lv<15> > add_ln1117_6_fu_588_p2;
    sc_signal< sc_lv<15> > add_ln1117_6_reg_930;
    sc_signal< sc_lv<12> > add_ln203_fu_593_p2;
    sc_signal< sc_lv<12> > add_ln203_reg_935;
    sc_signal< sc_lv<58> > mul_ln1192_fu_636_p2;
    sc_signal< sc_lv<58> > mul_ln1192_reg_960;
    sc_signal< sc_lv<38> > tmp_72_reg_965;
    sc_signal< sc_lv<58> > mul_ln1192_1_fu_672_p2;
    sc_signal< sc_lv<58> > mul_ln1192_1_reg_970;
    sc_signal< sc_lv<38> > tmp_73_reg_975;
    sc_signal< sc_lv<58> > mul_ln1192_2_fu_696_p2;
    sc_signal< sc_lv<58> > mul_ln1192_2_reg_980;
    sc_signal< sc_lv<58> > mul_ln1192_3_fu_745_p2;
    sc_signal< sc_lv<58> > mul_ln1192_3_reg_985;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<38> > tmp_75_reg_990;
    sc_signal< sc_lv<58> > mul_ln1192_4_fu_769_p2;
    sc_signal< sc_lv<58> > mul_ln1192_4_reg_995;
    sc_signal< sc_lv<38> > trunc_ln708_s_reg_1000;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<5> > i_0_reg_203;
    sc_signal< sc_lv<7> > k_0_0_reg_214;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > sext_ln1116_2_fu_287_p1;
    sc_signal< sc_lv<64> > or_ln1116_fu_292_p2;
    sc_signal< sc_lv<64> > sext_ln1116_3_fu_305_p1;
    sc_signal< sc_lv<64> > sext_ln1116_4_fu_316_p1;
    sc_signal< sc_lv<64> > sext_ln1116_5_fu_327_p1;
    sc_signal< sc_lv<64> > sext_ln1116_6_fu_338_p1;
    sc_signal< sc_lv<64> > zext_ln1117_4_fu_558_p1;
    sc_signal< sc_lv<64> > zext_ln1117_5_fu_568_p1;
    sc_signal< sc_lv<64> > zext_ln1117_6_fu_598_p1;
    sc_signal< sc_lv<64> > zext_ln1117_7_fu_602_p1;
    sc_signal< sc_lv<64> > zext_ln1117_8_fu_606_p1;
    sc_signal< sc_lv<64> > zext_ln1117_9_fu_610_p1;
    sc_signal< sc_lv<64> > sext_ln203_fu_820_p1;
    sc_signal< sc_lv<8> > tmp_s_fu_253_p3;
    sc_signal< sc_lv<6> > tmp_67_fu_265_p3;
    sc_signal< sc_lv<9> > zext_ln1116_fu_261_p1;
    sc_signal< sc_lv<9> > zext_ln1116_2_fu_273_p1;
    sc_signal< sc_lv<9> > sub_ln1116_fu_277_p2;
    sc_signal< sc_lv<10> > sext_ln1116_fu_283_p1;
    sc_signal< sc_lv<10> > add_ln1116_fu_299_p2;
    sc_signal< sc_lv<10> > add_ln1116_1_fu_310_p2;
    sc_signal< sc_lv<10> > add_ln1116_2_fu_321_p2;
    sc_signal< sc_lv<10> > add_ln1116_3_fu_332_p2;
    sc_signal< sc_lv<14> > tmp_68_fu_343_p3;
    sc_signal< sc_lv<11> > tmp_69_fu_355_p3;
    sc_signal< sc_lv<15> > zext_ln1117_fu_351_p1;
    sc_signal< sc_lv<15> > zext_ln1117_1_fu_363_p1;
    sc_signal< sc_lv<8> > trunc_ln1117_fu_373_p1;
    sc_signal< sc_lv<10> > trunc_ln1117_1_fu_385_p1;
    sc_signal< sc_lv<15> > p_shl10_cast_fu_377_p3;
    sc_signal< sc_lv<15> > p_shl11_cast_fu_389_p3;
    sc_signal< sc_lv<8> > trunc_ln1117_2_fu_403_p1;
    sc_signal< sc_lv<15> > p_shl8_cast_fu_407_p3;
    sc_signal< sc_lv<15> > p_shl9_cast_fu_415_p3;
    sc_signal< sc_lv<8> > trunc_ln1117_3_fu_429_p1;
    sc_signal< sc_lv<15> > p_shl6_cast_fu_433_p3;
    sc_signal< sc_lv<15> > p_shl7_cast_fu_441_p3;
    sc_signal< sc_lv<8> > trunc_ln1117_4_fu_455_p1;
    sc_signal< sc_lv<15> > p_shl4_cast_fu_459_p3;
    sc_signal< sc_lv<15> > p_shl5_cast_fu_467_p3;
    sc_signal< sc_lv<8> > trunc_ln1117_5_fu_481_p1;
    sc_signal< sc_lv<15> > p_shl2_cast_fu_485_p3;
    sc_signal< sc_lv<15> > p_shl3_cast_fu_493_p3;
    sc_signal< sc_lv<10> > tmp_71_fu_515_p3;
    sc_signal< sc_lv<12> > tmp_70_fu_507_p3;
    sc_signal< sc_lv<12> > zext_ln203_fu_523_p1;
    sc_signal< sc_lv<15> > zext_ln1117_3_fu_549_p1;
    sc_signal< sc_lv<15> > add_ln1117_1_fu_553_p2;
    sc_signal< sc_lv<15> > add_ln1117_2_fu_563_p2;
    sc_signal< sc_lv<12> > zext_ln1117_2_fu_545_p1;
    sc_signal< sc_lv<38> > mul_ln1118_fu_622_p0;
    sc_signal< sc_lv<38> > mul_ln1118_fu_622_p1;
    sc_signal< sc_lv<38> > mul_ln1192_fu_636_p0;
    sc_signal< sc_lv<38> > mul_ln1192_fu_636_p1;
    sc_signal< sc_lv<58> > mul_ln1118_fu_622_p2;
    sc_signal< sc_lv<58> > shl_ln_fu_652_p3;
    sc_signal< sc_lv<38> > mul_ln1192_1_fu_672_p0;
    sc_signal< sc_lv<38> > mul_ln1192_1_fu_672_p1;
    sc_signal< sc_lv<58> > add_ln1192_fu_659_p2;
    sc_signal< sc_lv<38> > mul_ln1192_2_fu_696_p0;
    sc_signal< sc_lv<38> > mul_ln1192_2_fu_696_p1;
    sc_signal< sc_lv<58> > shl_ln728_s_fu_702_p3;
    sc_signal< sc_lv<58> > add_ln1192_2_fu_709_p2;
    sc_signal< sc_lv<38> > tmp_74_fu_714_p4;
    sc_signal< sc_lv<58> > shl_ln728_1_fu_724_p3;
    sc_signal< sc_lv<38> > mul_ln1192_3_fu_745_p0;
    sc_signal< sc_lv<38> > mul_ln1192_3_fu_745_p1;
    sc_signal< sc_lv<58> > add_ln1192_3_fu_732_p2;
    sc_signal< sc_lv<38> > mul_ln1192_4_fu_769_p0;
    sc_signal< sc_lv<38> > mul_ln1192_4_fu_769_p1;
    sc_signal< sc_lv<58> > shl_ln728_2_fu_775_p3;
    sc_signal< sc_lv<58> > add_ln1192_4_fu_782_p2;
    sc_signal< sc_lv<38> > tmp_76_fu_787_p4;
    sc_signal< sc_lv<58> > shl_ln728_3_fu_797_p3;
    sc_signal< sc_lv<58> > add_ln1192_5_fu_805_p2;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<10> ap_const_lv10_5;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<7> ap_const_lv7_60;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<20> ap_const_lv20_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln1116_1_fu_310_p2();
    void thread_add_ln1116_2_fu_321_p2();
    void thread_add_ln1116_3_fu_332_p2();
    void thread_add_ln1116_fu_299_p2();
    void thread_add_ln1117_1_fu_553_p2();
    void thread_add_ln1117_2_fu_563_p2();
    void thread_add_ln1117_3_fu_573_p2();
    void thread_add_ln1117_4_fu_578_p2();
    void thread_add_ln1117_5_fu_583_p2();
    void thread_add_ln1117_6_fu_588_p2();
    void thread_add_ln1117_fu_367_p2();
    void thread_add_ln1192_2_fu_709_p2();
    void thread_add_ln1192_3_fu_732_p2();
    void thread_add_ln1192_4_fu_782_p2();
    void thread_add_ln1192_5_fu_805_p2();
    void thread_add_ln1192_fu_659_p2();
    void thread_add_ln203_fu_593_p2();
    void thread_add_ln238_fu_539_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_fu_247_p2();
    void thread_icmp_ln236_fu_241_p2();
    void thread_icmp_ln238_fu_533_p2();
    void thread_input_1_0_V_address0();
    void thread_input_1_0_V_address1();
    void thread_input_1_0_V_ce0();
    void thread_input_1_0_V_ce1();
    void thread_input_2_V_address0();
    void thread_input_2_V_address1();
    void thread_input_2_V_ce0();
    void thread_input_2_V_ce1();
    void thread_mul_ln1118_fu_622_p0();
    void thread_mul_ln1118_fu_622_p1();
    void thread_mul_ln1118_fu_622_p2();
    void thread_mul_ln1192_1_fu_672_p0();
    void thread_mul_ln1192_1_fu_672_p1();
    void thread_mul_ln1192_1_fu_672_p2();
    void thread_mul_ln1192_2_fu_696_p0();
    void thread_mul_ln1192_2_fu_696_p1();
    void thread_mul_ln1192_2_fu_696_p2();
    void thread_mul_ln1192_3_fu_745_p0();
    void thread_mul_ln1192_3_fu_745_p1();
    void thread_mul_ln1192_3_fu_745_p2();
    void thread_mul_ln1192_4_fu_769_p0();
    void thread_mul_ln1192_4_fu_769_p1();
    void thread_mul_ln1192_4_fu_769_p2();
    void thread_mul_ln1192_fu_636_p0();
    void thread_mul_ln1192_fu_636_p1();
    void thread_mul_ln1192_fu_636_p2();
    void thread_or_ln1116_fu_292_p2();
    void thread_output_0_V_address0();
    void thread_output_0_V_ce0();
    void thread_output_0_V_d0();
    void thread_output_0_V_we0();
    void thread_p_shl10_cast_fu_377_p3();
    void thread_p_shl11_cast_fu_389_p3();
    void thread_p_shl2_cast_fu_485_p3();
    void thread_p_shl3_cast_fu_493_p3();
    void thread_p_shl4_cast_fu_459_p3();
    void thread_p_shl5_cast_fu_467_p3();
    void thread_p_shl6_cast_fu_433_p3();
    void thread_p_shl7_cast_fu_441_p3();
    void thread_p_shl8_cast_fu_407_p3();
    void thread_p_shl9_cast_fu_415_p3();
    void thread_sext_ln1116_2_fu_287_p1();
    void thread_sext_ln1116_3_fu_305_p1();
    void thread_sext_ln1116_4_fu_316_p1();
    void thread_sext_ln1116_5_fu_327_p1();
    void thread_sext_ln1116_6_fu_338_p1();
    void thread_sext_ln1116_fu_283_p1();
    void thread_sext_ln203_fu_820_p1();
    void thread_shl_ln728_1_fu_724_p3();
    void thread_shl_ln728_2_fu_775_p3();
    void thread_shl_ln728_3_fu_797_p3();
    void thread_shl_ln728_s_fu_702_p3();
    void thread_shl_ln_fu_652_p3();
    void thread_sub_ln1116_fu_277_p2();
    void thread_sub_ln1117_1_fu_423_p2();
    void thread_sub_ln1117_2_fu_449_p2();
    void thread_sub_ln1117_3_fu_475_p2();
    void thread_sub_ln1117_4_fu_501_p2();
    void thread_sub_ln1117_fu_397_p2();
    void thread_sub_ln203_fu_527_p2();
    void thread_tmp_67_fu_265_p3();
    void thread_tmp_68_fu_343_p3();
    void thread_tmp_69_fu_355_p3();
    void thread_tmp_70_fu_507_p3();
    void thread_tmp_71_fu_515_p3();
    void thread_tmp_74_fu_714_p4();
    void thread_tmp_76_fu_787_p4();
    void thread_tmp_s_fu_253_p3();
    void thread_trunc_ln1117_1_fu_385_p1();
    void thread_trunc_ln1117_2_fu_403_p1();
    void thread_trunc_ln1117_3_fu_429_p1();
    void thread_trunc_ln1117_4_fu_455_p1();
    void thread_trunc_ln1117_5_fu_481_p1();
    void thread_trunc_ln1117_fu_373_p1();
    void thread_zext_ln1116_2_fu_273_p1();
    void thread_zext_ln1116_fu_261_p1();
    void thread_zext_ln1117_1_fu_363_p1();
    void thread_zext_ln1117_2_fu_545_p1();
    void thread_zext_ln1117_3_fu_549_p1();
    void thread_zext_ln1117_4_fu_558_p1();
    void thread_zext_ln1117_5_fu_568_p1();
    void thread_zext_ln1117_6_fu_598_p1();
    void thread_zext_ln1117_7_fu_602_p1();
    void thread_zext_ln1117_8_fu_606_p1();
    void thread_zext_ln1117_9_fu_610_p1();
    void thread_zext_ln1117_fu_351_p1();
    void thread_zext_ln203_fu_523_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif