// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "GEMM_3D_float2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic GEMM_3D_float2::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic GEMM_3D_float2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state1 = "1";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state2 = "10";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state3 = "100";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state4 = "1000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state5 = "10000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state6 = "100000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state7 = "1000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state8 = "10000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state9 = "100000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state10 = "1000000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state11 = "10000000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state12 = "100000000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state13 = "1000000000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state14 = "10000000000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state15 = "100000000000000";
const sc_lv<16> GEMM_3D_float2::ap_ST_fsm_state16 = "1000000000000000";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_1 = "1";
const sc_lv<1> GEMM_3D_float2::ap_const_lv1_0 = "0";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_2 = "10";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_3 = "11";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_4 = "100";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_5 = "101";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_9 = "1001";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_E = "1110";
const sc_lv<5> GEMM_3D_float2::ap_const_lv5_0 = "00000";
const sc_lv<1> GEMM_3D_float2::ap_const_lv1_1 = "1";
const sc_lv<7> GEMM_3D_float2::ap_const_lv7_0 = "0000000";
const sc_lv<3> GEMM_3D_float2::ap_const_lv3_0 = "000";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_F = "1111";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_8 = "1000";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_A = "1010";
const sc_lv<32> GEMM_3D_float2::ap_const_lv32_6 = "110";
const sc_lv<5> GEMM_3D_float2::ap_const_lv5_10 = "10000";
const sc_lv<5> GEMM_3D_float2::ap_const_lv5_1 = "1";
const sc_lv<7> GEMM_3D_float2::ap_const_lv7_60 = "1100000";
const sc_lv<7> GEMM_3D_float2::ap_const_lv7_1 = "1";
const sc_lv<3> GEMM_3D_float2::ap_const_lv3_6 = "110";
const sc_lv<3> GEMM_3D_float2::ap_const_lv3_1 = "1";
const bool GEMM_3D_float2::ap_const_boolean_1 = true;

GEMM_3D_float2::GEMM_3D_float2(sc_module_name name) : sc_module(name), mVcdFile(0) {
    attention_fadd_32pcA_U83 = new attention_fadd_32pcA<1,5,32,32,32>("attention_fadd_32pcA_U83");
    attention_fadd_32pcA_U83->clk(ap_clk);
    attention_fadd_32pcA_U83->reset(ap_rst);
    attention_fadd_32pcA_U83->din0(v248_0_load_reg_382);
    attention_fadd_32pcA_U83->din1(v_reg_377);
    attention_fadd_32pcA_U83->ce(ap_var_for_const0);
    attention_fadd_32pcA_U83->dout(grp_fu_133_p2);
    attention_fmul_32qcK_U84 = new attention_fmul_32qcK<1,4,32,32,32>("attention_fmul_32qcK_U84");
    attention_fmul_32qcK_U84->clk(ap_clk);
    attention_fmul_32qcK_U84->reset(ap_rst);
    attention_fmul_32qcK_U84->din0(v246_0_load_reg_367);
    attention_fmul_32qcK_U84->din1(v247_load_reg_372);
    attention_fmul_32qcK_U84->ce(ap_var_for_const0);
    attention_fmul_32qcK_U84->dout(grp_fu_137_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln428_fu_219_p2);
    sensitive << ( j8_0_0_reg_111 );

    SC_METHOD(thread_add_ln429_fu_249_p2);
    sensitive << ( k8_0_0_reg_122 );

    SC_METHOD(thread_add_ln430_fu_259_p2);
    sensitive << ( sext_ln430_reg_311 );
    sensitive << ( zext_ln430_2_fu_255_p1 );

    SC_METHOD(thread_add_ln431_fu_290_p2);
    sensitive << ( zext_ln433_1_reg_329 );
    sensitive << ( sub_ln431_fu_284_p2 );

    SC_METHOD(thread_add_ln433_fu_233_p2);
    sensitive << ( sub_ln433_reg_316 );
    sensitive << ( zext_ln433_2_fu_229_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state11);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state15);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state16);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln426_fu_141_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln426_fu_141_p2 );

    SC_METHOD(thread_h5_fu_147_p2);
    sensitive << ( h5_0_reg_100 );

    SC_METHOD(thread_icmp_ln426_fu_141_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( h5_0_reg_100 );

    SC_METHOD(thread_icmp_ln428_fu_213_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j8_0_0_reg_111 );

    SC_METHOD(thread_icmp_ln429_fu_243_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( k8_0_0_reg_122 );

    SC_METHOD(thread_p_shl4_cast_fu_268_p3);
    sensitive << ( trunc_ln431_fu_264_p1 );

    SC_METHOD(thread_p_shl5_cast_fu_276_p3);
    sensitive << ( add_ln430_fu_259_p2 );

    SC_METHOD(thread_sext_ln430_1_fu_295_p1);
    sensitive << ( add_ln430_reg_347 );

    SC_METHOD(thread_sext_ln430_fu_183_p1);
    sensitive << ( sub_ln430_fu_177_p2 );

    SC_METHOD(thread_sext_ln433_fu_238_p1);
    sensitive << ( add_ln433_fu_233_p2 );

    SC_METHOD(thread_sub_ln430_fu_177_p2);
    sensitive << ( zext_ln430_fu_161_p1 );
    sensitive << ( zext_ln430_1_fu_173_p1 );

    SC_METHOD(thread_sub_ln431_fu_284_p2);
    sensitive << ( p_shl4_cast_fu_268_p3 );
    sensitive << ( p_shl5_cast_fu_276_p3 );

    SC_METHOD(thread_sub_ln433_fu_207_p2);
    sensitive << ( tmp_51_fu_187_p3 );
    sensitive << ( zext_ln433_fu_203_p1 );

    SC_METHOD(thread_tmp_49_fu_153_p3);
    sensitive << ( h5_0_reg_100 );

    SC_METHOD(thread_tmp_50_fu_165_p3);
    sensitive << ( h5_0_reg_100 );

    SC_METHOD(thread_tmp_51_fu_187_p3);
    sensitive << ( h5_0_reg_100 );

    SC_METHOD(thread_tmp_52_fu_195_p3);
    sensitive << ( h5_0_reg_100 );

    SC_METHOD(thread_trunc_ln431_fu_264_p1);
    sensitive << ( add_ln430_fu_259_p2 );

    SC_METHOD(thread_v246_0_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln430_1_fu_295_p1 );

    SC_METHOD(thread_v246_0_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_v247_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( zext_ln431_fu_299_p1 );

    SC_METHOD(thread_v247_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_v248_0_address0);
    sensitive << ( v248_0_addr_reg_334 );
    sensitive << ( ap_CS_fsm_state16 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_v248_0_ce0);
    sensitive << ( ap_CS_fsm_state16 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_v248_0_d0);
    sensitive << ( v4_reg_387 );
    sensitive << ( ap_CS_fsm_state16 );

    SC_METHOD(thread_v248_0_we0);
    sensitive << ( ap_CS_fsm_state16 );

    SC_METHOD(thread_zext_ln430_1_fu_173_p1);
    sensitive << ( tmp_50_fu_165_p3 );

    SC_METHOD(thread_zext_ln430_2_fu_255_p1);
    sensitive << ( k8_0_0_reg_122 );

    SC_METHOD(thread_zext_ln430_fu_161_p1);
    sensitive << ( tmp_49_fu_153_p3 );

    SC_METHOD(thread_zext_ln431_fu_299_p1);
    sensitive << ( add_ln431_reg_352 );

    SC_METHOD(thread_zext_ln433_1_fu_225_p1);
    sensitive << ( j8_0_0_reg_111 );

    SC_METHOD(thread_zext_ln433_2_fu_229_p1);
    sensitive << ( j8_0_0_reg_111 );

    SC_METHOD(thread_zext_ln433_fu_203_p1);
    sensitive << ( tmp_52_fu_195_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln426_fu_141_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln428_fu_213_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln429_fu_243_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "0000000000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "GEMM_3D_float2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, v246_0_address0, "(port)v246_0_address0");
    sc_trace(mVcdFile, v246_0_ce0, "(port)v246_0_ce0");
    sc_trace(mVcdFile, v246_0_q0, "(port)v246_0_q0");
    sc_trace(mVcdFile, v247_address0, "(port)v247_address0");
    sc_trace(mVcdFile, v247_ce0, "(port)v247_ce0");
    sc_trace(mVcdFile, v247_q0, "(port)v247_q0");
    sc_trace(mVcdFile, v248_0_address0, "(port)v248_0_address0");
    sc_trace(mVcdFile, v248_0_ce0, "(port)v248_0_ce0");
    sc_trace(mVcdFile, v248_0_we0, "(port)v248_0_we0");
    sc_trace(mVcdFile, v248_0_d0, "(port)v248_0_d0");
    sc_trace(mVcdFile, v248_0_q0, "(port)v248_0_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, h5_fu_147_p2, "h5_fu_147_p2");
    sc_trace(mVcdFile, h5_reg_306, "h5_reg_306");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, sext_ln430_fu_183_p1, "sext_ln430_fu_183_p1");
    sc_trace(mVcdFile, sext_ln430_reg_311, "sext_ln430_reg_311");
    sc_trace(mVcdFile, icmp_ln426_fu_141_p2, "icmp_ln426_fu_141_p2");
    sc_trace(mVcdFile, sub_ln433_fu_207_p2, "sub_ln433_fu_207_p2");
    sc_trace(mVcdFile, sub_ln433_reg_316, "sub_ln433_reg_316");
    sc_trace(mVcdFile, add_ln428_fu_219_p2, "add_ln428_fu_219_p2");
    sc_trace(mVcdFile, add_ln428_reg_324, "add_ln428_reg_324");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, zext_ln433_1_fu_225_p1, "zext_ln433_1_fu_225_p1");
    sc_trace(mVcdFile, zext_ln433_1_reg_329, "zext_ln433_1_reg_329");
    sc_trace(mVcdFile, icmp_ln428_fu_213_p2, "icmp_ln428_fu_213_p2");
    sc_trace(mVcdFile, v248_0_addr_reg_334, "v248_0_addr_reg_334");
    sc_trace(mVcdFile, add_ln429_fu_249_p2, "add_ln429_fu_249_p2");
    sc_trace(mVcdFile, add_ln429_reg_342, "add_ln429_reg_342");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, add_ln430_fu_259_p2, "add_ln430_fu_259_p2");
    sc_trace(mVcdFile, add_ln430_reg_347, "add_ln430_reg_347");
    sc_trace(mVcdFile, icmp_ln429_fu_243_p2, "icmp_ln429_fu_243_p2");
    sc_trace(mVcdFile, add_ln431_fu_290_p2, "add_ln431_fu_290_p2");
    sc_trace(mVcdFile, add_ln431_reg_352, "add_ln431_reg_352");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, v246_0_load_reg_367, "v246_0_load_reg_367");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, v247_load_reg_372, "v247_load_reg_372");
    sc_trace(mVcdFile, grp_fu_137_p2, "grp_fu_137_p2");
    sc_trace(mVcdFile, v_reg_377, "v_reg_377");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, v248_0_load_reg_382, "v248_0_load_reg_382");
    sc_trace(mVcdFile, grp_fu_133_p2, "grp_fu_133_p2");
    sc_trace(mVcdFile, v4_reg_387, "v4_reg_387");
    sc_trace(mVcdFile, ap_CS_fsm_state15, "ap_CS_fsm_state15");
    sc_trace(mVcdFile, h5_0_reg_100, "h5_0_reg_100");
    sc_trace(mVcdFile, j8_0_0_reg_111, "j8_0_0_reg_111");
    sc_trace(mVcdFile, k8_0_0_reg_122, "k8_0_0_reg_122");
    sc_trace(mVcdFile, ap_CS_fsm_state16, "ap_CS_fsm_state16");
    sc_trace(mVcdFile, sext_ln433_fu_238_p1, "sext_ln433_fu_238_p1");
    sc_trace(mVcdFile, sext_ln430_1_fu_295_p1, "sext_ln430_1_fu_295_p1");
    sc_trace(mVcdFile, zext_ln431_fu_299_p1, "zext_ln431_fu_299_p1");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, ap_CS_fsm_state11, "ap_CS_fsm_state11");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, tmp_49_fu_153_p3, "tmp_49_fu_153_p3");
    sc_trace(mVcdFile, tmp_50_fu_165_p3, "tmp_50_fu_165_p3");
    sc_trace(mVcdFile, zext_ln430_fu_161_p1, "zext_ln430_fu_161_p1");
    sc_trace(mVcdFile, zext_ln430_1_fu_173_p1, "zext_ln430_1_fu_173_p1");
    sc_trace(mVcdFile, sub_ln430_fu_177_p2, "sub_ln430_fu_177_p2");
    sc_trace(mVcdFile, tmp_52_fu_195_p3, "tmp_52_fu_195_p3");
    sc_trace(mVcdFile, tmp_51_fu_187_p3, "tmp_51_fu_187_p3");
    sc_trace(mVcdFile, zext_ln433_fu_203_p1, "zext_ln433_fu_203_p1");
    sc_trace(mVcdFile, zext_ln433_2_fu_229_p1, "zext_ln433_2_fu_229_p1");
    sc_trace(mVcdFile, add_ln433_fu_233_p2, "add_ln433_fu_233_p2");
    sc_trace(mVcdFile, zext_ln430_2_fu_255_p1, "zext_ln430_2_fu_255_p1");
    sc_trace(mVcdFile, trunc_ln431_fu_264_p1, "trunc_ln431_fu_264_p1");
    sc_trace(mVcdFile, p_shl4_cast_fu_268_p3, "p_shl4_cast_fu_268_p3");
    sc_trace(mVcdFile, p_shl5_cast_fu_276_p3, "p_shl5_cast_fu_276_p3");
    sc_trace(mVcdFile, sub_ln431_fu_284_p2, "sub_ln431_fu_284_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

GEMM_3D_float2::~GEMM_3D_float2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete attention_fadd_32pcA_U83;
    delete attention_fmul_32qcK_U84;
}

void GEMM_3D_float2::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void GEMM_3D_float2::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln428_fu_213_p2.read(), ap_const_lv1_1))) {
        h5_0_reg_100 = h5_reg_306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        h5_0_reg_100 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln429_fu_243_p2.read(), ap_const_lv1_1))) {
        j8_0_0_reg_111 = add_ln428_reg_324.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln426_fu_141_p2.read(), ap_const_lv1_0))) {
        j8_0_0_reg_111 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k8_0_0_reg_122 = add_ln429_reg_342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln428_fu_213_p2.read()))) {
        k8_0_0_reg_122 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln428_reg_324 = add_ln428_fu_219_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        add_ln429_reg_342 = add_ln429_fu_249_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln429_fu_243_p2.read()))) {
        add_ln430_reg_347 = add_ln430_fu_259_p2.read();
        add_ln431_reg_352 = add_ln431_fu_290_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        h5_reg_306 = h5_fu_147_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln426_fu_141_p2.read(), ap_const_lv1_0))) {
        sext_ln430_reg_311 = sext_ln430_fu_183_p1.read();
        sub_ln433_reg_316 = sub_ln433_fu_207_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        v246_0_load_reg_367 = v246_0_q0.read();
        v247_load_reg_372 = v247_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln428_fu_213_p2.read()))) {
        v248_0_addr_reg_334 =  (sc_lv<11>) (sext_ln433_fu_238_p1.read());
        zext_ln433_1_reg_329 = zext_ln433_1_fu_225_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v248_0_load_reg_382 = v248_0_q0.read();
        v_reg_377 = grp_fu_137_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        v4_reg_387 = grp_fu_133_p2.read();
    }
}

void GEMM_3D_float2::thread_add_ln428_fu_219_p2() {
    add_ln428_fu_219_p2 = (!j8_0_0_reg_111.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(j8_0_0_reg_111.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void GEMM_3D_float2::thread_add_ln429_fu_249_p2() {
    add_ln429_fu_249_p2 = (!k8_0_0_reg_122.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k8_0_0_reg_122.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void GEMM_3D_float2::thread_add_ln430_fu_259_p2() {
    add_ln430_fu_259_p2 = (!zext_ln430_2_fu_255_p1.read().is_01() || !sext_ln430_reg_311.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln430_2_fu_255_p1.read()) + sc_bigint<10>(sext_ln430_reg_311.read()));
}

void GEMM_3D_float2::thread_add_ln431_fu_290_p2() {
    add_ln431_fu_290_p2 = (!zext_ln433_1_reg_329.read().is_01() || !sub_ln431_fu_284_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln433_1_reg_329.read()) + sc_biguint<15>(sub_ln431_fu_284_p2.read()));
}

void GEMM_3D_float2::thread_add_ln433_fu_233_p2() {
    add_ln433_fu_233_p2 = (!sub_ln433_reg_316.read().is_01() || !zext_ln433_2_fu_229_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln433_reg_316.read()) + sc_biguint<12>(zext_ln433_2_fu_229_p1.read()));
}

void GEMM_3D_float2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void GEMM_3D_float2::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void GEMM_3D_float2::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln426_fu_141_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void GEMM_3D_float2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void GEMM_3D_float2::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln426_fu_141_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void GEMM_3D_float2::thread_h5_fu_147_p2() {
    h5_fu_147_p2 = (!h5_0_reg_100.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h5_0_reg_100.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void GEMM_3D_float2::thread_icmp_ln426_fu_141_p2() {
    icmp_ln426_fu_141_p2 = (!h5_0_reg_100.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h5_0_reg_100.read() == ap_const_lv5_10);
}

void GEMM_3D_float2::thread_icmp_ln428_fu_213_p2() {
    icmp_ln428_fu_213_p2 = (!j8_0_0_reg_111.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(j8_0_0_reg_111.read() == ap_const_lv7_60);
}

void GEMM_3D_float2::thread_icmp_ln429_fu_243_p2() {
    icmp_ln429_fu_243_p2 = (!k8_0_0_reg_122.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(k8_0_0_reg_122.read() == ap_const_lv3_6);
}

void GEMM_3D_float2::thread_p_shl4_cast_fu_268_p3() {
    p_shl4_cast_fu_268_p3 = esl_concat<8,7>(trunc_ln431_fu_264_p1.read(), ap_const_lv7_0);
}

void GEMM_3D_float2::thread_p_shl5_cast_fu_276_p3() {
    p_shl5_cast_fu_276_p3 = esl_concat<10,5>(add_ln430_fu_259_p2.read(), ap_const_lv5_0);
}

void GEMM_3D_float2::thread_sext_ln430_1_fu_295_p1() {
    sext_ln430_1_fu_295_p1 = esl_sext<64,10>(add_ln430_reg_347.read());
}

void GEMM_3D_float2::thread_sext_ln430_fu_183_p1() {
    sext_ln430_fu_183_p1 = esl_sext<10,9>(sub_ln430_fu_177_p2.read());
}

void GEMM_3D_float2::thread_sext_ln433_fu_238_p1() {
    sext_ln433_fu_238_p1 = esl_sext<64,12>(add_ln433_fu_233_p2.read());
}

void GEMM_3D_float2::thread_sub_ln430_fu_177_p2() {
    sub_ln430_fu_177_p2 = (!zext_ln430_fu_161_p1.read().is_01() || !zext_ln430_1_fu_173_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln430_fu_161_p1.read()) - sc_biguint<9>(zext_ln430_1_fu_173_p1.read()));
}

void GEMM_3D_float2::thread_sub_ln431_fu_284_p2() {
    sub_ln431_fu_284_p2 = (!p_shl4_cast_fu_268_p3.read().is_01() || !p_shl5_cast_fu_276_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl4_cast_fu_268_p3.read()) - sc_biguint<15>(p_shl5_cast_fu_276_p3.read()));
}

void GEMM_3D_float2::thread_sub_ln433_fu_207_p2() {
    sub_ln433_fu_207_p2 = (!tmp_51_fu_187_p3.read().is_01() || !zext_ln433_fu_203_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_51_fu_187_p3.read()) - sc_biguint<12>(zext_ln433_fu_203_p1.read()));
}

void GEMM_3D_float2::thread_tmp_49_fu_153_p3() {
    tmp_49_fu_153_p3 = esl_concat<5,3>(h5_0_reg_100.read(), ap_const_lv3_0);
}

void GEMM_3D_float2::thread_tmp_50_fu_165_p3() {
    tmp_50_fu_165_p3 = esl_concat<5,1>(h5_0_reg_100.read(), ap_const_lv1_0);
}

void GEMM_3D_float2::thread_tmp_51_fu_187_p3() {
    tmp_51_fu_187_p3 = esl_concat<5,7>(h5_0_reg_100.read(), ap_const_lv7_0);
}

void GEMM_3D_float2::thread_tmp_52_fu_195_p3() {
    tmp_52_fu_195_p3 = esl_concat<5,5>(h5_0_reg_100.read(), ap_const_lv5_0);
}

void GEMM_3D_float2::thread_trunc_ln431_fu_264_p1() {
    trunc_ln431_fu_264_p1 = add_ln430_fu_259_p2.read().range(8-1, 0);
}

void GEMM_3D_float2::thread_v246_0_address0() {
    v246_0_address0 =  (sc_lv<7>) (sext_ln430_1_fu_295_p1.read());
}

void GEMM_3D_float2::thread_v246_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        v246_0_ce0 = ap_const_logic_1;
    } else {
        v246_0_ce0 = ap_const_logic_0;
    }
}

void GEMM_3D_float2::thread_v247_address0() {
    v247_address0 =  (sc_lv<14>) (zext_ln431_fu_299_p1.read());
}

void GEMM_3D_float2::thread_v247_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        v247_ce0 = ap_const_logic_1;
    } else {
        v247_ce0 = ap_const_logic_0;
    }
}

void GEMM_3D_float2::thread_v248_0_address0() {
    v248_0_address0 = v248_0_addr_reg_334.read();
}

void GEMM_3D_float2::thread_v248_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()))) {
        v248_0_ce0 = ap_const_logic_1;
    } else {
        v248_0_ce0 = ap_const_logic_0;
    }
}

void GEMM_3D_float2::thread_v248_0_d0() {
    v248_0_d0 = v4_reg_387.read();
}

void GEMM_3D_float2::thread_v248_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v248_0_we0 = ap_const_logic_1;
    } else {
        v248_0_we0 = ap_const_logic_0;
    }
}

void GEMM_3D_float2::thread_zext_ln430_1_fu_173_p1() {
    zext_ln430_1_fu_173_p1 = esl_zext<9,6>(tmp_50_fu_165_p3.read());
}

void GEMM_3D_float2::thread_zext_ln430_2_fu_255_p1() {
    zext_ln430_2_fu_255_p1 = esl_zext<10,3>(k8_0_0_reg_122.read());
}

void GEMM_3D_float2::thread_zext_ln430_fu_161_p1() {
    zext_ln430_fu_161_p1 = esl_zext<9,8>(tmp_49_fu_153_p3.read());
}

void GEMM_3D_float2::thread_zext_ln431_fu_299_p1() {
    zext_ln431_fu_299_p1 = esl_zext<64,15>(add_ln431_reg_352.read());
}

void GEMM_3D_float2::thread_zext_ln433_1_fu_225_p1() {
    zext_ln433_1_fu_225_p1 = esl_zext<15,7>(j8_0_0_reg_111.read());
}

void GEMM_3D_float2::thread_zext_ln433_2_fu_229_p1() {
    zext_ln433_2_fu_229_p1 = esl_zext<12,7>(j8_0_0_reg_111.read());
}

void GEMM_3D_float2::thread_zext_ln433_fu_203_p1() {
    zext_ln433_fu_203_p1 = esl_zext<12,10>(tmp_52_fu_195_p3.read());
}

void GEMM_3D_float2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln426_fu_141_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln428_fu_213_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln429_fu_243_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXXXXXXXXX";
            break;
    }
}

}
