#include "attention.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void attention::thread_add_ln203_10_fu_2643_p2() {
    add_ln203_10_fu_2643_p2 = (!sub_ln203_7_reg_3253.read().is_01() || !zext_ln203_19_fu_2639_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln203_7_reg_3253.read()) + sc_biguint<8>(zext_ln203_19_fu_2639_p1.read()));
}

void attention::thread_add_ln203_11_fu_2579_p2() {
    add_ln203_11_fu_2579_p2 = (!sub_ln203_8_reg_3232.read().is_01() || !zext_ln203_20_fu_2575_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(sub_ln203_8_reg_3232.read()) + sc_biguint<15>(zext_ln203_20_fu_2575_p1.read()));
}

void attention::thread_add_ln203_12_fu_2847_p2() {
    add_ln203_12_fu_2847_p2 = (!sub_ln203_9_reg_3332.read().is_01() || !zext_ln203_24_fu_2843_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln203_9_reg_3332.read()) + sc_biguint<8>(zext_ln203_24_fu_2843_p1.read()));
}

void attention::thread_add_ln203_13_fu_2911_p2() {
    add_ln203_13_fu_2911_p2 = (!sub_ln203_10_reg_3353.read().is_01() || !zext_ln203_25_fu_2907_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln203_10_reg_3353.read()) + sc_biguint<12>(zext_ln203_25_fu_2907_p1.read()));
}

void attention::thread_add_ln203_6_fu_2341_p2() {
    add_ln203_6_fu_2341_p2 = (!sub_ln203_3_reg_3164.read().is_01() || !zext_ln203_11_fu_2337_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln203_3_reg_3164.read()) + sc_biguint<12>(zext_ln203_11_fu_2337_p1.read()));
}

void attention::thread_add_ln203_7_fu_2413_p2() {
    add_ln203_7_fu_2413_p2 = (!zext_ln203_14_fu_2409_p1.read().is_01() || !sext_ln203_2_reg_3185.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_14_fu_2409_p1.read()) + sc_bigint<10>(sext_ln203_2_reg_3185.read()));
}

void attention::thread_add_ln203_8_fu_2532_p2() {
    add_ln203_8_fu_2532_p2 = (!zext_ln203_16_fu_2528_p1.read().is_01() || !sext_ln203_4_reg_3219.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_16_fu_2528_p1.read()) + sc_bigint<10>(sext_ln203_4_reg_3219.read()));
}

void attention::thread_add_ln203_9_fu_2460_p2() {
    add_ln203_9_fu_2460_p2 = (!sub_ln203_6_reg_3198.read().is_01() || !zext_ln203_17_fu_2456_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(sub_ln203_6_reg_3198.read()) + sc_biguint<15>(zext_ln203_17_fu_2456_p1.read()));
}

void attention::thread_add_ln203_fu_2277_p2() {
    add_ln203_fu_2277_p2 = (!sub_ln203_reg_3143.read().is_01() || !zext_ln203_8_fu_2273_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln203_reg_3143.read()) + sc_biguint<12>(zext_ln203_8_fu_2273_p1.read()));
}

void attention::thread_add_ln463_fu_2161_p2() {
    add_ln463_fu_2161_p2 = (!v276_0_0_reg_1033.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v276_0_0_reg_1033.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln484_fu_2178_p2() {
    add_ln484_fu_2178_p2 = (!v286_0_0_reg_1044.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v286_0_0_reg_1044.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln490_fu_2195_p2() {
    add_ln490_fu_2195_p2 = (!v289_0_0_reg_1055.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v289_0_0_reg_1055.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln496_fu_2212_p2() {
    add_ln496_fu_2212_p2 = (!v292_0_0_reg_1066.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v292_0_0_reg_1066.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln533_fu_2267_p2() {
    add_ln533_fu_2267_p2 = (!v308_0_0_reg_1088.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v308_0_0_reg_1088.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln541_fu_2331_p2() {
    add_ln541_fu_2331_p2 = (!v312_0_0_reg_1110.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v312_0_0_reg_1110.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln577_fu_2633_p2() {
    add_ln577_fu_2633_p2 = (!v328_0_0_reg_1198.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(v328_0_0_reg_1198.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_add_ln587_fu_2697_p2() {
    add_ln587_fu_2697_p2 = (!k9_0_0_reg_1220.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k9_0_0_reg_1220.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_add_ln588_fu_2707_p2() {
    add_ln588_fu_2707_p2 = (!sub_ln588_reg_3274.read().is_01() || !zext_ln588_1_fu_2703_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln588_reg_3274.read()) + sc_biguint<8>(zext_ln588_1_fu_2703_p1.read()));
}

void attention::thread_add_ln615_fu_2837_p2() {
    add_ln615_fu_2837_p2 = (!v348_0_0_reg_1242.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(v348_0_0_reg_1242.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_add_ln624_fu_2901_p2() {
    add_ln624_fu_2901_p2 = (!v352_0_0_reg_1264.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v352_0_0_reg_1264.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln632_fu_2927_p2() {
    add_ln632_fu_2927_p2 = (!v355_0_0_reg_1275.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v355_0_0_reg_1275.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln637_fu_2944_p2() {
    add_ln637_fu_2944_p2 = (!h7_0_0_reg_1286.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h7_0_0_reg_1286.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_add_ln638_fu_3020_p2() {
    add_ln638_fu_3020_p2 = (!d4_0_0_reg_1297.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(d4_0_0_reg_1297.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln639_fu_3026_p2() {
    add_ln639_fu_3026_p2 = (!sub_ln639_reg_3382.read().is_01() || !zext_ln638_fu_3010_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln639_reg_3382.read()) + sc_biguint<12>(zext_ln638_fu_3010_p1.read()));
}

void attention::thread_add_ln640_fu_3036_p2() {
    add_ln640_fu_3036_p2 = (!zext_ln638_fu_3010_p1.read().is_01() || !sub_ln640_reg_3387.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln638_fu_3010_p1.read()) + sc_biguint<12>(sub_ln640_reg_3387.read()));
}

void attention::thread_add_ln646_fu_3055_p2() {
    add_ln646_fu_3055_p2 = (!v362_0_0_reg_1308.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v362_0_0_reg_1308.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_add_ln666_fu_3072_p2() {
    add_ln666_fu_3072_p2 = (!v371_0_0_reg_1319.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(v371_0_0_reg_1319.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void attention::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void attention::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void attention::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void attention::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void attention::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void attention::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void attention::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void attention::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void attention::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void attention::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void attention::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void attention::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void attention::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void attention::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void attention::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void attention::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void attention::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void attention::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void attention::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void attention::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void attention::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void attention::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void attention::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void attention::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void attention::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void attention::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void attention::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void attention::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void attention::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void attention::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void attention::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void attention::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void attention::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void attention::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void attention::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void attention::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void attention::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void attention::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void attention::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void attention::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void attention::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void attention::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void attention::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void attention::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void attention::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void attention::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void attention::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void attention::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void attention::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void attention::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void attention::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void attention::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void attention::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void attention::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void attention::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void attention::thread_ap_block_state11_on_subcall_done() {
    ap_block_state11_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_reshape_2D_to_3D_fu_2141_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_linear_forward_no_mu_fu_1330_ap_done.read()));
}

void attention::thread_ap_block_state13_on_subcall_done() {
    ap_block_state13_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_reshape_2D_to_3D_fu_2141_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_linear_forward_no_mu_fu_1330_ap_done.read()));
}

void attention::thread_ap_block_state29_on_subcall_done() {
    ap_block_state29_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_cache_update_fu_2109_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_transpose_last_two_d_fu_2134_ap_done.read()));
}

void attention::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) && 
         esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1330_ap_done.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void attention::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void attention::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) && 
         esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1330_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void attention::thread_attn_output_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        attn_output_0_V_address0 =  (sc_lv<11>) (sext_ln639_fu_3031_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        attn_output_0_V_address0 =  (sc_lv<11>) (sext_ln203_7_fu_2916_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        attn_output_0_V_address0 = grp_GEMM_3D_float2_fu_2127_v246_0_V_address0.read();
    } else {
        attn_output_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_attn_output_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        attn_output_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        attn_output_0_V_ce0 = grp_GEMM_3D_float2_fu_2127_v246_0_V_ce0.read();
    } else {
        attn_output_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        attn_output_0_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        attn_output_0_V_d0 = grp_GEMM_3D_float2_fu_2127_v246_0_V_d0.read();
    } else {
        attn_output_0_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_attn_output_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln624_fu_2895_p2.read()))) {
        attn_output_0_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        attn_output_0_V_we0 = grp_GEMM_3D_float2_fu_2127_v246_0_V_we0.read();
    } else {
        attn_output_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_2D_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        attn_output_2D_V_address0 =  (sc_lv<11>) (zext_ln640_fu_3044_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        attn_output_2D_V_address0 =  (sc_lv<11>) (zext_ln633_fu_2933_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        attn_output_2D_V_address0 = grp_rms_norm_fu_1746_v0_V_address0.read();
    } else {
        attn_output_2D_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_attn_output_2D_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()))) {
        attn_output_2D_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        attn_output_2D_V_ce0 = grp_rms_norm_fu_1746_v0_V_ce0.read();
    } else {
        attn_output_2D_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_2D_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        attn_output_2D_V_d0 = attn_output_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        attn_output_2D_V_d0 = ap_const_lv32_0;
    } else {
        attn_output_2D_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_attn_output_2D_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln632_fu_2921_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()))) {
        attn_output_2D_V_we0 = ap_const_logic_1;
    } else {
        attn_output_2D_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_attn_weights_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        attn_weights_0_V_address0 = attn_weights_0_V_ad_1_reg_3287.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        attn_weights_0_V_address0 =  (sc_lv<7>) (sext_ln588_fu_2712_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        attn_weights_0_V_address0 =  (sc_lv<7>) (sext_ln203_5_fu_2648_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        attn_weights_0_V_address0 = grp_GEMM_3D_float_fu_2119_v204_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        attn_weights_0_V_address0 = grp_softmax_fu_1776_v217_0_V_address0.read();
    } else {
        attn_weights_0_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_attn_weights_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()))) {
        attn_weights_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        attn_weights_0_V_ce0 = grp_GEMM_3D_float_fu_2119_v204_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        attn_weights_0_V_ce0 = grp_softmax_fu_1776_v217_0_V_ce0.read();
    } else {
        attn_weights_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_weights_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        attn_weights_0_V_d0 = select_ln1148_2_fu_2785_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        attn_weights_0_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        attn_weights_0_V_d0 = grp_GEMM_3D_float_fu_2119_v204_0_V_d0.read();
    } else {
        attn_weights_0_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_attn_weights_0_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln577_fu_2627_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()))) {
        attn_weights_0_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        attn_weights_0_V_we0 = grp_GEMM_3D_float_fu_2119_v204_0_V_we0.read();
    } else {
        attn_weights_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_grp_GEMM_3D_float2_fu_2127_ap_start() {
    grp_GEMM_3D_float2_fu_2127_ap_start = grp_GEMM_3D_float2_fu_2127_ap_start_reg.read();
}

void attention::thread_grp_GEMM_3D_float_fu_2119_ap_start() {
    grp_GEMM_3D_float_fu_2119_ap_start = grp_GEMM_3D_float_fu_2119_ap_start_reg.read();
}

void attention::thread_grp_apply_rotary_pos_emb_fu_2095_ap_start() {
    grp_apply_rotary_pos_emb_fu_2095_ap_start = grp_apply_rotary_pos_emb_fu_2095_ap_start_reg.read();
}

void attention::thread_grp_cache_update_fu_2109_ap_start() {
    grp_cache_update_fu_2109_ap_start = grp_cache_update_fu_2109_ap_start_reg.read();
}

void attention::thread_grp_cache_update_fu_2109_v185_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_cache_update_fu_2109_v185_V_q0 = v270_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_cache_update_fu_2109_v185_V_q0 = v269_V_q0.read();
    } else {
        grp_cache_update_fu_2109_v185_V_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_cache_update_fu_2109_v186_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_cache_update_fu_2109_v186_0_V_q0 = v_proj_V_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_cache_update_fu_2109_v186_0_V_q0 = k_embed_0_V_q0.read();
    } else {
        grp_cache_update_fu_2109_v186_0_V_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_fu_2736_p0() {
    grp_fu_2736_p0 =  (sc_lv<46>) (ap_const_lv89_1A20D0357B2B);
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_ap_start() {
    grp_linear_forward_no_mu_fu_1330_ap_start = grp_linear_forward_no_mu_fu_1330_ap_start_reg.read();
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_0_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_0_0_0_q0 = quantized_final_outp_95_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_0_0_0_q0 = quantized_hidden_sta_95_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_0_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_0_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_0_1_0_q0 = quantized_final_outp_94_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_0_1_0_q0 = quantized_hidden_sta_94_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_0_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_0_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_0_2_0_q0 = quantized_final_outp_93_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_0_2_0_q0 = quantized_hidden_sta_93_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_0_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_0_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_0_3_0_q0 = quantized_final_outp_92_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_0_3_0_q0 = quantized_hidden_sta_92_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_0_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_10_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_10_0_0_q0 = quantized_final_outp_87_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_10_0_0_q0 = quantized_hidden_sta_87_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_10_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_10_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_10_1_0_q0 = quantized_final_outp_86_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_10_1_0_q0 = quantized_hidden_sta_86_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_10_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_10_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_10_2_0_q0 = quantized_final_outp_85_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_10_2_0_q0 = quantized_hidden_sta_85_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_10_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_10_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_10_3_0_q0 = quantized_final_outp_84_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_10_3_0_q0 = quantized_hidden_sta_84_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_10_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_11_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_11_0_0_q0 = quantized_final_outp_83_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_11_0_0_q0 = quantized_hidden_sta_83_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_11_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_11_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_11_1_0_q0 = quantized_final_outp_82_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_11_1_0_q0 = quantized_hidden_sta_82_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_11_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_11_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_11_2_0_q0 = quantized_final_outp_81_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_11_2_0_q0 = quantized_hidden_sta_81_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_11_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_11_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_11_3_0_q0 = quantized_final_outp_80_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_11_3_0_q0 = quantized_hidden_sta_80_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_11_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_12_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_12_0_0_q0 = quantized_final_outp_79_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_12_0_0_q0 = quantized_hidden_sta_79_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_12_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_12_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_12_1_0_q0 = quantized_final_outp_78_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_12_1_0_q0 = quantized_hidden_sta_78_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_12_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_12_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_12_2_0_q0 = quantized_final_outp_77_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_12_2_0_q0 = quantized_hidden_sta_77_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_12_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_12_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_12_3_0_q0 = quantized_final_outp_76_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_12_3_0_q0 = quantized_hidden_sta_76_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_12_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_13_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_13_0_0_q0 = quantized_final_outp_75_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_13_0_0_q0 = quantized_hidden_sta_75_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_13_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_13_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_13_1_0_q0 = quantized_final_outp_74_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_13_1_0_q0 = quantized_hidden_sta_74_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_13_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_13_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_13_2_0_q0 = quantized_final_outp_73_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_13_2_0_q0 = quantized_hidden_sta_73_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_13_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_13_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_13_3_0_q0 = quantized_final_outp_72_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_13_3_0_q0 = quantized_hidden_sta_72_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_13_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_14_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_14_0_0_q0 = quantized_final_outp_71_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_14_0_0_q0 = quantized_hidden_sta_71_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_14_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_14_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_14_1_0_q0 = quantized_final_outp_70_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_14_1_0_q0 = quantized_hidden_sta_70_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_14_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_14_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_14_2_0_q0 = quantized_final_outp_69_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_14_2_0_q0 = quantized_hidden_sta_69_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_14_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_14_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_14_3_0_q0 = quantized_final_outp_68_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_14_3_0_q0 = quantized_hidden_sta_68_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_14_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_15_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_15_0_0_q0 = quantized_final_outp_67_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_15_0_0_q0 = quantized_hidden_sta_67_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_15_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_15_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_15_1_0_q0 = quantized_final_outp_66_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_15_1_0_q0 = quantized_hidden_sta_66_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_15_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_15_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_15_2_0_q0 = quantized_final_outp_65_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_15_2_0_q0 = quantized_hidden_sta_65_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_15_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_15_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_15_3_0_q0 = quantized_final_outp_64_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_15_3_0_q0 = quantized_hidden_sta_64_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_15_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_16_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_16_0_0_q0 = quantized_final_outp_63_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_16_0_0_q0 = quantized_hidden_sta_63_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_16_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_16_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_16_1_0_q0 = quantized_final_outp_62_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_16_1_0_q0 = quantized_hidden_sta_62_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_16_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_16_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_16_2_0_q0 = quantized_final_outp_61_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_16_2_0_q0 = quantized_hidden_sta_61_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_16_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_16_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_16_3_0_q0 = quantized_final_outp_60_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_16_3_0_q0 = quantized_hidden_sta_60_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_16_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_17_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_17_0_0_q0 = quantized_final_outp_59_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_17_0_0_q0 = quantized_hidden_sta_59_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_17_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_17_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_17_1_0_q0 = quantized_final_outp_58_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_17_1_0_q0 = quantized_hidden_sta_58_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_17_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_17_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_17_2_0_q0 = quantized_final_outp_57_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_17_2_0_q0 = quantized_hidden_sta_57_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_17_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_17_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_17_3_0_q0 = quantized_final_outp_56_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_17_3_0_q0 = quantized_hidden_sta_56_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_17_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_18_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_18_0_0_q0 = quantized_final_outp_55_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_18_0_0_q0 = quantized_hidden_sta_55_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_18_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_18_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_18_1_0_q0 = quantized_final_outp_54_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_18_1_0_q0 = quantized_hidden_sta_54_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_18_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_18_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_18_2_0_q0 = quantized_final_outp_53_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_18_2_0_q0 = quantized_hidden_sta_53_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_18_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_18_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_18_3_0_q0 = quantized_final_outp_52_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_18_3_0_q0 = quantized_hidden_sta_52_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_18_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_19_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_19_0_0_q0 = quantized_final_outp_51_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_19_0_0_q0 = quantized_hidden_sta_51_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_19_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_19_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_19_1_0_q0 = quantized_final_outp_50_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_19_1_0_q0 = quantized_hidden_sta_50_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_19_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_19_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_19_2_0_q0 = quantized_final_outp_49_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_19_2_0_q0 = quantized_hidden_sta_49_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_19_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_19_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_19_3_0_q0 = quantized_final_outp_48_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_19_3_0_q0 = quantized_hidden_sta_48_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_19_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_1_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_1_0_0_q0 = quantized_final_outp_91_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_1_0_0_q0 = quantized_hidden_sta_91_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_1_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_1_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_1_1_0_q0 = quantized_final_outp_90_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_1_1_0_q0 = quantized_hidden_sta_90_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_1_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_1_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_1_2_0_q0 = quantized_final_outp_89_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_1_2_0_q0 = quantized_hidden_sta_89_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_1_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_1_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_1_3_0_q0 = quantized_final_outp_88_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_1_3_0_q0 = quantized_hidden_sta_88_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_1_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_20_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_20_0_0_q0 = quantized_final_outp_43_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_20_0_0_q0 = quantized_hidden_sta_43_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_20_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_20_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_20_1_0_q0 = quantized_final_outp_42_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_20_1_0_q0 = quantized_hidden_sta_42_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_20_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_20_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_20_2_0_q0 = quantized_final_outp_41_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_20_2_0_q0 = quantized_hidden_sta_41_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_20_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_20_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_20_3_0_q0 = quantized_final_outp_40_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_20_3_0_q0 = quantized_hidden_sta_40_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_20_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_21_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_21_0_0_q0 = quantized_final_outp_39_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_21_0_0_q0 = quantized_hidden_sta_39_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_21_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_21_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_21_1_0_q0 = quantized_final_outp_38_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_21_1_0_q0 = quantized_hidden_sta_38_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_21_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_21_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_21_2_0_q0 = quantized_final_outp_37_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_21_2_0_q0 = quantized_hidden_sta_37_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_21_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_21_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_21_3_0_q0 = quantized_final_outp_36_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_21_3_0_q0 = quantized_hidden_sta_36_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_21_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_22_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_22_0_0_q0 = quantized_final_outp_35_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_22_0_0_q0 = quantized_hidden_sta_35_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_22_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_22_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_22_1_0_q0 = quantized_final_outp_34_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_22_1_0_q0 = quantized_hidden_sta_34_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_22_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_22_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_22_2_0_q0 = quantized_final_outp_33_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_22_2_0_q0 = quantized_hidden_sta_33_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_22_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_22_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_22_3_0_q0 = quantized_final_outp_32_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_22_3_0_q0 = quantized_hidden_sta_32_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_22_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_23_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_23_0_0_q0 = quantized_final_outp_31_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_23_0_0_q0 = quantized_hidden_sta_31_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_23_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_23_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_23_1_0_q0 = quantized_final_outp_30_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_23_1_0_q0 = quantized_hidden_sta_30_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_23_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_23_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_23_2_0_q0 = quantized_final_outp_29_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_23_2_0_q0 = quantized_hidden_sta_29_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_23_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_23_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_23_3_0_q0 = quantized_final_outp_28_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_23_3_0_q0 = quantized_hidden_sta_28_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_23_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_2_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_2_0_0_q0 = quantized_final_outp_47_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_2_0_0_q0 = quantized_hidden_sta_47_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_2_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_2_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_2_1_0_q0 = quantized_final_outp_46_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_2_1_0_q0 = quantized_hidden_sta_46_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_2_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_2_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_2_2_0_q0 = quantized_final_outp_45_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_2_2_0_q0 = quantized_hidden_sta_45_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_2_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_2_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_2_3_0_q0 = quantized_final_outp_44_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_2_3_0_q0 = quantized_hidden_sta_44_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_2_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_3_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_3_0_0_q0 = quantized_final_outp_27_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_3_0_0_q0 = quantized_hidden_sta_27_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_3_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_3_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_3_1_0_q0 = quantized_final_outp_26_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_3_1_0_q0 = quantized_hidden_sta_26_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_3_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_3_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_3_2_0_q0 = quantized_final_outp_25_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_3_2_0_q0 = quantized_hidden_sta_25_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_3_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_3_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_3_3_0_q0 = quantized_final_outp_24_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_3_3_0_q0 = quantized_hidden_sta_24_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_3_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_4_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_4_0_0_q0 = quantized_final_outp_23_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_4_0_0_q0 = quantized_hidden_sta_23_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_4_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_4_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_4_1_0_q0 = quantized_final_outp_22_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_4_1_0_q0 = quantized_hidden_sta_22_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_4_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_4_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_4_2_0_q0 = quantized_final_outp_21_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_4_2_0_q0 = quantized_hidden_sta_21_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_4_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_4_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_4_3_0_q0 = quantized_final_outp_20_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_4_3_0_q0 = quantized_hidden_sta_20_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_4_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_5_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_5_0_0_q0 = quantized_final_outp_19_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_5_0_0_q0 = quantized_hidden_sta_19_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_5_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_5_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_5_1_0_q0 = quantized_final_outp_18_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_5_1_0_q0 = quantized_hidden_sta_18_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_5_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_5_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_5_2_0_q0 = quantized_final_outp_17_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_5_2_0_q0 = quantized_hidden_sta_17_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_5_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_5_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_5_3_0_q0 = quantized_final_outp_16_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_5_3_0_q0 = quantized_hidden_sta_16_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_5_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_6_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_6_0_0_q0 = quantized_final_outp_15_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_6_0_0_q0 = quantized_hidden_sta_15_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_6_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_6_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_6_1_0_q0 = quantized_final_outp_14_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_6_1_0_q0 = quantized_hidden_sta_14_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_6_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_6_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_6_2_0_q0 = quantized_final_outp_13_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_6_2_0_q0 = quantized_hidden_sta_13_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_6_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_6_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_6_3_0_q0 = quantized_final_outp_12_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_6_3_0_q0 = quantized_hidden_sta_12_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_6_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_7_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_7_0_0_q0 = quantized_final_outp_11_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_7_0_0_q0 = quantized_hidden_sta_11_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_7_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_7_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_7_1_0_q0 = quantized_final_outp_10_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_7_1_0_q0 = quantized_hidden_sta_10_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_7_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_7_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_7_2_0_q0 = quantized_final_outp_9_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_7_2_0_q0 = quantized_hidden_sta_9_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_7_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_7_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_7_3_0_q0 = quantized_final_outp_8_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_7_3_0_q0 = quantized_hidden_sta_8_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_7_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_8_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_8_0_0_q0 = quantized_final_outp_7_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_8_0_0_q0 = quantized_hidden_sta_7_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_8_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_8_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_8_1_0_q0 = quantized_final_outp_6_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_8_1_0_q0 = quantized_hidden_sta_6_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_8_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_8_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_8_2_0_q0 = quantized_final_outp_5_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_8_2_0_q0 = quantized_hidden_sta_5_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_8_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_8_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_8_3_0_q0 = quantized_final_outp_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_8_3_0_q0 = quantized_hidden_sta_4_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_8_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_9_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_9_0_0_q0 = quantized_final_outp_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_9_0_0_q0 = quantized_hidden_sta_3_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_9_0_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_9_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_9_1_0_q0 = quantized_final_outp_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_9_1_0_q0 = quantized_hidden_sta_2_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_9_1_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_9_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_9_2_0_q0 = quantized_final_outp_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_9_2_0_q0 = quantized_hidden_sta_1_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_9_2_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v78_9_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v78_9_3_0_q0 = quantized_final_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        grp_linear_forward_no_mu_fu_1330_v78_9_3_0_q0 = quantized_hidden_sta_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v78_9_3_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_0_q0 = v263_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_0_q0 = v261_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_0_q0 = v259_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_0_q0 = v257_0_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_0_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_0_q1 = v263_0_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_0_q1 = v261_0_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_0_q1 = v259_0_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_0_q1 = v257_0_q1.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_0_q1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_10_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_10_q0 = v263_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_10_q0 = v261_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_10_q0 = v259_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_10_q0 = v257_10_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_10_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_11_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_11_q0 = v263_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_11_q0 = v261_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_11_q0 = v259_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_11_q0 = v257_11_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_11_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_12_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_12_q0 = v263_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_12_q0 = v261_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_12_q0 = v259_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_12_q0 = v257_12_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_12_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_13_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_13_q0 = v263_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_13_q0 = v261_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_13_q0 = v259_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_13_q0 = v257_13_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_13_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_14_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_14_q0 = v263_14_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_14_q0 = v261_14_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_14_q0 = v259_14_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_14_q0 = v257_14_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_14_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_15_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_15_q0 = v263_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_15_q0 = v261_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_15_q0 = v259_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_15_q0 = v257_15_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_15_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_16_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_16_q0 = v263_16_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_16_q0 = v261_16_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_16_q0 = v259_16_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_16_q0 = v257_16_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_16_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_16_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_16_q1 = v263_16_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_16_q1 = v261_16_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_16_q1 = v259_16_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_16_q1 = v257_16_q1.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_16_q1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_17_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_17_q0 = v263_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_17_q0 = v261_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_17_q0 = v259_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_17_q0 = v257_17_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_17_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_18_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_18_q0 = v263_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_18_q0 = v261_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_18_q0 = v259_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_18_q0 = v257_18_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_18_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_19_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_19_q0 = v263_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_19_q0 = v261_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_19_q0 = v259_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_19_q0 = v257_19_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_19_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_1_q0 = v263_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_1_q0 = v261_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_1_q0 = v259_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_1_q0 = v257_1_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_20_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_20_q0 = v263_20_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_20_q0 = v261_20_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_20_q0 = v259_20_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_20_q0 = v257_20_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_20_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_21_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_21_q0 = v263_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_21_q0 = v261_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_21_q0 = v259_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_21_q0 = v257_21_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_21_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_22_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_22_q0 = v263_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_22_q0 = v261_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_22_q0 = v259_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_22_q0 = v257_22_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_22_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_23_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_23_q0 = v263_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_23_q0 = v261_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_23_q0 = v259_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_23_q0 = v257_23_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_23_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_2_q0 = v263_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_2_q0 = v261_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_2_q0 = v259_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_2_q0 = v257_2_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_3_q0 = v263_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_3_q0 = v261_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_3_q0 = v259_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_3_q0 = v257_3_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_4_q0 = v263_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_4_q0 = v261_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_4_q0 = v259_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_4_q0 = v257_4_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_4_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_5_q0 = v263_5_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_5_q0 = v261_5_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_5_q0 = v259_5_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_5_q0 = v257_5_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_5_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_6_q0 = v263_6_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_6_q0 = v261_6_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_6_q0 = v259_6_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_6_q0 = v257_6_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_6_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_7_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_7_q0 = v263_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_7_q0 = v261_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_7_q0 = v259_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_7_q0 = v257_7_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_7_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_8_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_8_q0 = v263_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_8_q0 = v261_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_8_q0 = v259_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_8_q0 = v257_8_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_8_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_8_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_8_q1 = v263_8_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_8_q1 = v261_8_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_8_q1 = v259_8_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_8_q1 = v257_8_q1.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_8_q1 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v80_9_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_9_q0 = v263_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_9_q0 = v261_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_9_q0 = v259_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v80_9_q0 = v257_9_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v80_9_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_1330_v81_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_linear_forward_no_mu_fu_1330_v81_V = v264_V.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_linear_forward_no_mu_fu_1330_v81_V = v262_V.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_linear_forward_no_mu_fu_1330_v81_V = v260_V.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_linear_forward_no_mu_fu_1330_v81_V = v258_V.read();
    } else {
        grp_linear_forward_no_mu_fu_1330_v81_V =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_quantize_activation_fu_1802_ap_start() {
    grp_quantize_activation_fu_1802_ap_start = grp_quantize_activation_fu_1802_ap_start_reg.read();
}

void attention::thread_grp_quantize_activation_fu_1802_v22_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        grp_quantize_activation_fu_1802_v22_0_V_q0 = rms_attn_output_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_quantize_activation_fu_1802_v22_0_V_q0 = rms_hidden_states_0_q0.read();
    } else {
        grp_quantize_activation_fu_1802_v22_0_V_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_reshape_2D_to_3D_fu_2141_ap_start() {
    grp_reshape_2D_to_3D_fu_2141_ap_start = grp_reshape_2D_to_3D_fu_2141_ap_start_reg.read();
}

void attention::thread_grp_reshape_2D_to_3D_fu_2141_v139_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        grp_reshape_2D_to_3D_fu_2141_v139_V_q0 = v_proj_re_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_reshape_2D_to_3D_fu_2141_v139_V_q0 = k_proj_re_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_reshape_2D_to_3D_fu_2141_v139_V_q0 = q_proj_re_V_q0.read();
    } else {
        grp_reshape_2D_to_3D_fu_2141_v139_V_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_rms_norm_fu_1746_ap_start() {
    grp_rms_norm_fu_1746_ap_start = grp_rms_norm_fu_1746_ap_start_reg.read();
}

void attention::thread_grp_rms_norm_fu_1746_v0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_rms_norm_fu_1746_v0_V_q0 = attn_output_2D_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        grp_rms_norm_fu_1746_v0_V_q0 = v256_V_q0.read();
    } else {
        grp_rms_norm_fu_1746_v0_V_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_rms_norm_fu_1746_v1_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_rms_norm_fu_1746_v1_V_q0 = v268_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        grp_rms_norm_fu_1746_v1_V_q0 = v267_V_q0.read();
    } else {
        grp_rms_norm_fu_1746_v1_V_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_softmax_fu_1776_ap_start() {
    grp_softmax_fu_1776_ap_start = grp_softmax_fu_1776_ap_start_reg.read();
}

void attention::thread_grp_transpose_last_two_d_fu_2134_ap_start() {
    grp_transpose_last_two_d_fu_2134_ap_start = grp_transpose_last_two_d_fu_2134_ap_start_reg.read();
}

void attention::thread_i10_fu_2659_p2() {
    i10_fu_2659_p2 = (!i10_0_reg_1209.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i10_0_reg_1209.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_icmp_ln463_fu_2155_p2() {
    icmp_ln463_fu_2155_p2 = (!v276_0_0_reg_1033.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v276_0_0_reg_1033.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln484_fu_2172_p2() {
    icmp_ln484_fu_2172_p2 = (!v286_0_0_reg_1044.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v286_0_0_reg_1044.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln490_fu_2189_p2() {
    icmp_ln490_fu_2189_p2 = (!v289_0_0_reg_1055.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v289_0_0_reg_1055.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln496_fu_2206_p2() {
    icmp_ln496_fu_2206_p2 = (!v292_0_0_reg_1066.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v292_0_0_reg_1066.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln531_fu_2223_p2() {
    icmp_ln531_fu_2223_p2 = (!v306_0_reg_1077.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v306_0_reg_1077.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln533_fu_2261_p2() {
    icmp_ln533_fu_2261_p2 = (!v308_0_0_reg_1088.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v308_0_0_reg_1088.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln539_fu_2287_p2() {
    icmp_ln539_fu_2287_p2 = (!v310_0_reg_1099.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v310_0_reg_1099.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln541_fu_2325_p2() {
    icmp_ln541_fu_2325_p2 = (!v312_0_0_reg_1110.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v312_0_0_reg_1110.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln548_fu_2351_p2() {
    icmp_ln548_fu_2351_p2 = (!v314_0_reg_1121.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v314_0_reg_1121.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln549_fu_2397_p2() {
    icmp_ln549_fu_2397_p2 = (!v315_0_reg_1132.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(v315_0_reg_1132.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln550_fu_2444_p2() {
    icmp_ln550_fu_2444_p2 = (!v316_0_reg_1143.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v316_0_reg_1143.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln556_fu_2470_p2() {
    icmp_ln556_fu_2470_p2 = (!v318_0_reg_1154.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v318_0_reg_1154.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln557_fu_2516_p2() {
    icmp_ln557_fu_2516_p2 = (!v319_0_reg_1165.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(v319_0_reg_1165.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln558_fu_2563_p2() {
    icmp_ln558_fu_2563_p2 = (!v320_0_reg_1176.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v320_0_reg_1176.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln575_fu_2589_p2() {
    icmp_ln575_fu_2589_p2 = (!v326_0_reg_1187.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v326_0_reg_1187.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln577_fu_2627_p2() {
    icmp_ln577_fu_2627_p2 = (!v328_0_0_reg_1198.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(v328_0_0_reg_1198.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln585_fu_2653_p2() {
    icmp_ln585_fu_2653_p2 = (!i10_0_reg_1209.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i10_0_reg_1209.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln587_fu_2691_p2() {
    icmp_ln587_fu_2691_p2 = (!k9_0_0_reg_1220.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(k9_0_0_reg_1220.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln613_fu_2793_p2() {
    icmp_ln613_fu_2793_p2 = (!v346_0_reg_1231.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v346_0_reg_1231.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln615_fu_2831_p2() {
    icmp_ln615_fu_2831_p2 = (!v348_0_0_reg_1242.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(v348_0_0_reg_1242.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln622_fu_2857_p2() {
    icmp_ln622_fu_2857_p2 = (!v350_0_reg_1253.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(v350_0_reg_1253.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln624_fu_2895_p2() {
    icmp_ln624_fu_2895_p2 = (!v352_0_0_reg_1264.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(v352_0_0_reg_1264.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln632_fu_2921_p2() {
    icmp_ln632_fu_2921_p2 = (!v355_0_0_reg_1275.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v355_0_0_reg_1275.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln637_fu_2938_p2() {
    icmp_ln637_fu_2938_p2 = (!h7_0_0_reg_1286.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h7_0_0_reg_1286.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln638_fu_3014_p2() {
    icmp_ln638_fu_3014_p2 = (!d4_0_0_reg_1297.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(d4_0_0_reg_1297.read() == ap_const_lv7_60);
}

void attention::thread_icmp_ln646_fu_3049_p2() {
    icmp_ln646_fu_3049_p2 = (!v362_0_0_reg_1308.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v362_0_0_reg_1308.read() == ap_const_lv11_600);
}

void attention::thread_icmp_ln666_fu_3066_p2() {
    icmp_ln666_fu_3066_p2 = (!v371_0_0_reg_1319.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(v371_0_0_reg_1319.read() == ap_const_lv11_600);
}

void attention::thread_k_embed_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        k_embed_0_V_address0 =  (sc_lv<11>) (sext_ln203_3_fu_2346_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        k_embed_0_V_address0 = grp_cache_update_fu_2109_v186_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_embed_0_V_address0 = grp_apply_rotary_pos_emb_fu_2095_v158_0_V_address0.read();
    } else {
        k_embed_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_embed_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        k_embed_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        k_embed_0_V_ce0 = grp_cache_update_fu_2109_v186_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_embed_0_V_ce0 = grp_apply_rotary_pos_emb_fu_2095_v158_0_V_ce0.read();
    } else {
        k_embed_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_embed_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        k_embed_0_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_embed_0_V_d0 = grp_apply_rotary_pos_emb_fu_2095_v158_0_V_d0.read();
    } else {
        k_embed_0_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_k_embed_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln541_fu_2325_p2.read()))) {
        k_embed_0_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_embed_0_V_we0 = grp_apply_rotary_pos_emb_fu_2095_v158_0_V_we0.read();
    } else {
        k_embed_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_V_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        k_proj_V_0_address0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_proj_V_0_address0 = grp_apply_rotary_pos_emb_fu_2095_k_proj_V_0_address0.read();
    } else {
        k_proj_V_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_proj_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        k_proj_V_0_ce0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_proj_V_0_ce0 = grp_apply_rotary_pos_emb_fu_2095_k_proj_V_0_ce0.read();
    } else {
        k_proj_V_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_V_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        k_proj_V_0_ce1 = grp_apply_rotary_pos_emb_fu_2095_k_proj_V_0_ce1.read();
    } else {
        k_proj_V_0_ce1 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        k_proj_V_0_we0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_we0.read();
    } else {
        k_proj_V_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_re_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        k_proj_re_V_address0 =  (sc_lv<11>) (zext_ln491_fu_2201_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        k_proj_re_V_address0 = grp_reshape_2D_to_3D_fu_2141_v139_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        k_proj_re_V_address0 = grp_linear_forward_no_mu_fu_1330_v82_V_address0.read();
    } else {
        k_proj_re_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_proj_re_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        k_proj_re_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        k_proj_re_V_ce0 = grp_reshape_2D_to_3D_fu_2141_v139_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        k_proj_re_V_ce0 = grp_linear_forward_no_mu_fu_1330_v82_V_ce0.read();
    } else {
        k_proj_re_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_re_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        k_proj_re_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        k_proj_re_V_d0 = grp_linear_forward_no_mu_fu_1330_v82_V_d0.read();
    } else {
        k_proj_re_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_k_proj_re_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln490_fu_2189_p2.read()))) {
        k_proj_re_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        k_proj_re_V_we0 = grp_linear_forward_no_mu_fu_1330_v82_V_we0.read();
    } else {
        k_proj_re_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        k_proj_transposed_V_address0 = grp_transpose_last_two_d_fu_2134_v197_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        k_proj_transposed_V_address0 = grp_GEMM_3D_float_fu_2119_k_proj_transposed_V_address0.read();
    } else {
        k_proj_transposed_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        k_proj_transposed_V_ce0 = grp_transpose_last_two_d_fu_2134_v197_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        k_proj_transposed_V_ce0 = grp_GEMM_3D_float_fu_2119_k_proj_transposed_V_ce0.read();
    } else {
        k_proj_transposed_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        k_proj_transposed_V_we0 = grp_transpose_last_two_d_fu_2134_v197_V_we0.read();
    } else {
        k_proj_transposed_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_p_shl2_cast_fu_2549_p3() {
    p_shl2_cast_fu_2549_p3 = esl_concat<10,5>(add_ln203_8_fu_2532_p2.read(), ap_const_lv5_0);
}

void attention::thread_p_shl6_cast_fu_2422_p3() {
    p_shl6_cast_fu_2422_p3 = esl_concat<8,7>(trunc_ln203_fu_2418_p1.read(), ap_const_lv7_0);
}

void attention::thread_p_shl7_cast_fu_2430_p3() {
    p_shl7_cast_fu_2430_p3 = esl_concat<10,5>(add_ln203_7_fu_2413_p2.read(), ap_const_lv5_0);
}

void attention::thread_p_shl_cast_fu_2541_p3() {
    p_shl_cast_fu_2541_p3 = esl_concat<8,7>(trunc_ln203_1_fu_2537_p1.read(), ap_const_lv7_0);
}

void attention::thread_q_embed_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        q_embed_0_V_address0 =  (sc_lv<11>) (sext_ln203_fu_2282_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        q_embed_0_V_address0 = grp_GEMM_3D_float_fu_2119_v202_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        q_embed_0_V_address0 = grp_apply_rotary_pos_emb_fu_2095_v157_0_V_address0.read();
    } else {
        q_embed_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_q_embed_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        q_embed_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        q_embed_0_V_ce0 = grp_GEMM_3D_float_fu_2119_v202_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        q_embed_0_V_ce0 = grp_apply_rotary_pos_emb_fu_2095_v157_0_V_ce0.read();
    } else {
        q_embed_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        q_embed_0_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        q_embed_0_V_d0 = grp_apply_rotary_pos_emb_fu_2095_v157_0_V_d0.read();
    } else {
        q_embed_0_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_q_embed_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln533_fu_2261_p2.read()))) {
        q_embed_0_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        q_embed_0_V_we0 = grp_apply_rotary_pos_emb_fu_2095_v157_0_V_we0.read();
    } else {
        q_embed_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_V_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        q_proj_V_0_address0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        q_proj_V_0_address0 = grp_apply_rotary_pos_emb_fu_2095_q_proj_V_0_address0.read();
    } else {
        q_proj_V_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_q_proj_V_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        q_proj_V_0_ce0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        q_proj_V_0_ce0 = grp_apply_rotary_pos_emb_fu_2095_q_proj_V_0_ce0.read();
    } else {
        q_proj_V_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_V_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        q_proj_V_0_ce1 = grp_apply_rotary_pos_emb_fu_2095_q_proj_V_0_ce1.read();
    } else {
        q_proj_V_0_ce1 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_V_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        q_proj_V_0_we0 = grp_reshape_2D_to_3D_fu_2141_v140_0_V_we0.read();
    } else {
        q_proj_V_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_re_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_V_address0 =  (sc_lv<11>) (zext_ln485_fu_2184_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        q_proj_re_V_address0 = grp_reshape_2D_to_3D_fu_2141_v139_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        q_proj_re_V_address0 = grp_linear_forward_no_mu_fu_1330_v82_V_address0.read();
    } else {
        q_proj_re_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_q_proj_re_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        q_proj_re_V_ce0 = grp_reshape_2D_to_3D_fu_2141_v139_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        q_proj_re_V_ce0 = grp_linear_forward_no_mu_fu_1330_v82_V_ce0.read();
    } else {
        q_proj_re_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_re_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        q_proj_re_V_d0 = grp_linear_forward_no_mu_fu_1330_v82_V_d0.read();
    } else {
        q_proj_re_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_q_proj_re_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln484_fu_2172_p2.read()))) {
        q_proj_re_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        q_proj_re_V_we0 = grp_linear_forward_no_mu_fu_1330_v82_V_we0.read();
    } else {
        q_proj_re_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_10_address0 = grp_quantize_activation_fu_1802_v24_7_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_10_address0 = grp_linear_forward_no_mu_fu_1330_v78_7_1_0_address0.read();
    } else {
        quantized_final_outp_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_10_ce0 = grp_quantize_activation_fu_1802_v24_7_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_10_ce0 = grp_linear_forward_no_mu_fu_1330_v78_7_1_0_ce0.read();
    } else {
        quantized_final_outp_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_10_we0 = grp_quantize_activation_fu_1802_v24_7_1_0_we0.read();
    } else {
        quantized_final_outp_10_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_11_address0 = grp_quantize_activation_fu_1802_v24_7_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_11_address0 = grp_linear_forward_no_mu_fu_1330_v78_7_0_0_address0.read();
    } else {
        quantized_final_outp_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_11_ce0 = grp_quantize_activation_fu_1802_v24_7_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_11_ce0 = grp_linear_forward_no_mu_fu_1330_v78_7_0_0_ce0.read();
    } else {
        quantized_final_outp_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_11_we0 = grp_quantize_activation_fu_1802_v24_7_0_0_we0.read();
    } else {
        quantized_final_outp_11_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_12_address0 = grp_quantize_activation_fu_1802_v24_6_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_12_address0 = grp_linear_forward_no_mu_fu_1330_v78_6_3_0_address0.read();
    } else {
        quantized_final_outp_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_12_ce0 = grp_quantize_activation_fu_1802_v24_6_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_12_ce0 = grp_linear_forward_no_mu_fu_1330_v78_6_3_0_ce0.read();
    } else {
        quantized_final_outp_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_12_we0 = grp_quantize_activation_fu_1802_v24_6_3_0_we0.read();
    } else {
        quantized_final_outp_12_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_13_address0 = grp_quantize_activation_fu_1802_v24_6_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_13_address0 = grp_linear_forward_no_mu_fu_1330_v78_6_2_0_address0.read();
    } else {
        quantized_final_outp_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_13_ce0 = grp_quantize_activation_fu_1802_v24_6_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_13_ce0 = grp_linear_forward_no_mu_fu_1330_v78_6_2_0_ce0.read();
    } else {
        quantized_final_outp_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_13_we0 = grp_quantize_activation_fu_1802_v24_6_2_0_we0.read();
    } else {
        quantized_final_outp_13_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_14_address0 = grp_quantize_activation_fu_1802_v24_6_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_14_address0 = grp_linear_forward_no_mu_fu_1330_v78_6_1_0_address0.read();
    } else {
        quantized_final_outp_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_14_ce0 = grp_quantize_activation_fu_1802_v24_6_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_14_ce0 = grp_linear_forward_no_mu_fu_1330_v78_6_1_0_ce0.read();
    } else {
        quantized_final_outp_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_14_we0 = grp_quantize_activation_fu_1802_v24_6_1_0_we0.read();
    } else {
        quantized_final_outp_14_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_15_address0 = grp_quantize_activation_fu_1802_v24_6_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_15_address0 = grp_linear_forward_no_mu_fu_1330_v78_6_0_0_address0.read();
    } else {
        quantized_final_outp_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_15_ce0 = grp_quantize_activation_fu_1802_v24_6_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_15_ce0 = grp_linear_forward_no_mu_fu_1330_v78_6_0_0_ce0.read();
    } else {
        quantized_final_outp_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_15_we0 = grp_quantize_activation_fu_1802_v24_6_0_0_we0.read();
    } else {
        quantized_final_outp_15_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_16_address0 = grp_quantize_activation_fu_1802_v24_5_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_16_address0 = grp_linear_forward_no_mu_fu_1330_v78_5_3_0_address0.read();
    } else {
        quantized_final_outp_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_16_ce0 = grp_quantize_activation_fu_1802_v24_5_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_16_ce0 = grp_linear_forward_no_mu_fu_1330_v78_5_3_0_ce0.read();
    } else {
        quantized_final_outp_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_16_we0 = grp_quantize_activation_fu_1802_v24_5_3_0_we0.read();
    } else {
        quantized_final_outp_16_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_17_address0 = grp_quantize_activation_fu_1802_v24_5_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_17_address0 = grp_linear_forward_no_mu_fu_1330_v78_5_2_0_address0.read();
    } else {
        quantized_final_outp_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_17_ce0 = grp_quantize_activation_fu_1802_v24_5_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_17_ce0 = grp_linear_forward_no_mu_fu_1330_v78_5_2_0_ce0.read();
    } else {
        quantized_final_outp_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_17_we0 = grp_quantize_activation_fu_1802_v24_5_2_0_we0.read();
    } else {
        quantized_final_outp_17_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_18_address0 = grp_quantize_activation_fu_1802_v24_5_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_18_address0 = grp_linear_forward_no_mu_fu_1330_v78_5_1_0_address0.read();
    } else {
        quantized_final_outp_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_18_ce0 = grp_quantize_activation_fu_1802_v24_5_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_18_ce0 = grp_linear_forward_no_mu_fu_1330_v78_5_1_0_ce0.read();
    } else {
        quantized_final_outp_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_18_we0 = grp_quantize_activation_fu_1802_v24_5_1_0_we0.read();
    } else {
        quantized_final_outp_18_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_19_address0 = grp_quantize_activation_fu_1802_v24_5_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_19_address0 = grp_linear_forward_no_mu_fu_1330_v78_5_0_0_address0.read();
    } else {
        quantized_final_outp_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_19_ce0 = grp_quantize_activation_fu_1802_v24_5_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_19_ce0 = grp_linear_forward_no_mu_fu_1330_v78_5_0_0_ce0.read();
    } else {
        quantized_final_outp_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_19_we0 = grp_quantize_activation_fu_1802_v24_5_0_0_we0.read();
    } else {
        quantized_final_outp_19_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_1_address0 = grp_quantize_activation_fu_1802_v24_9_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_1_address0 = grp_linear_forward_no_mu_fu_1330_v78_9_2_0_address0.read();
    } else {
        quantized_final_outp_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_1_ce0 = grp_quantize_activation_fu_1802_v24_9_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_1_ce0 = grp_linear_forward_no_mu_fu_1330_v78_9_2_0_ce0.read();
    } else {
        quantized_final_outp_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_1_we0 = grp_quantize_activation_fu_1802_v24_9_2_0_we0.read();
    } else {
        quantized_final_outp_1_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_20_address0 = grp_quantize_activation_fu_1802_v24_4_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_20_address0 = grp_linear_forward_no_mu_fu_1330_v78_4_3_0_address0.read();
    } else {
        quantized_final_outp_20_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_20_ce0 = grp_quantize_activation_fu_1802_v24_4_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_20_ce0 = grp_linear_forward_no_mu_fu_1330_v78_4_3_0_ce0.read();
    } else {
        quantized_final_outp_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_20_we0 = grp_quantize_activation_fu_1802_v24_4_3_0_we0.read();
    } else {
        quantized_final_outp_20_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_21_address0 = grp_quantize_activation_fu_1802_v24_4_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_21_address0 = grp_linear_forward_no_mu_fu_1330_v78_4_2_0_address0.read();
    } else {
        quantized_final_outp_21_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_21_ce0 = grp_quantize_activation_fu_1802_v24_4_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_21_ce0 = grp_linear_forward_no_mu_fu_1330_v78_4_2_0_ce0.read();
    } else {
        quantized_final_outp_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_21_we0 = grp_quantize_activation_fu_1802_v24_4_2_0_we0.read();
    } else {
        quantized_final_outp_21_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_22_address0 = grp_quantize_activation_fu_1802_v24_4_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_22_address0 = grp_linear_forward_no_mu_fu_1330_v78_4_1_0_address0.read();
    } else {
        quantized_final_outp_22_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_22_ce0 = grp_quantize_activation_fu_1802_v24_4_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_22_ce0 = grp_linear_forward_no_mu_fu_1330_v78_4_1_0_ce0.read();
    } else {
        quantized_final_outp_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_22_we0 = grp_quantize_activation_fu_1802_v24_4_1_0_we0.read();
    } else {
        quantized_final_outp_22_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_23_address0 = grp_quantize_activation_fu_1802_v24_4_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_23_address0 = grp_linear_forward_no_mu_fu_1330_v78_4_0_0_address0.read();
    } else {
        quantized_final_outp_23_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_23_ce0 = grp_quantize_activation_fu_1802_v24_4_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_23_ce0 = grp_linear_forward_no_mu_fu_1330_v78_4_0_0_ce0.read();
    } else {
        quantized_final_outp_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_23_we0 = grp_quantize_activation_fu_1802_v24_4_0_0_we0.read();
    } else {
        quantized_final_outp_23_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_24_address0 = grp_quantize_activation_fu_1802_v24_3_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_24_address0 = grp_linear_forward_no_mu_fu_1330_v78_3_3_0_address0.read();
    } else {
        quantized_final_outp_24_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_24_ce0 = grp_quantize_activation_fu_1802_v24_3_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_24_ce0 = grp_linear_forward_no_mu_fu_1330_v78_3_3_0_ce0.read();
    } else {
        quantized_final_outp_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_24_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_24_we0 = grp_quantize_activation_fu_1802_v24_3_3_0_we0.read();
    } else {
        quantized_final_outp_24_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_25_address0 = grp_quantize_activation_fu_1802_v24_3_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_25_address0 = grp_linear_forward_no_mu_fu_1330_v78_3_2_0_address0.read();
    } else {
        quantized_final_outp_25_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_25_ce0 = grp_quantize_activation_fu_1802_v24_3_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_25_ce0 = grp_linear_forward_no_mu_fu_1330_v78_3_2_0_ce0.read();
    } else {
        quantized_final_outp_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_25_we0 = grp_quantize_activation_fu_1802_v24_3_2_0_we0.read();
    } else {
        quantized_final_outp_25_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_26_address0 = grp_quantize_activation_fu_1802_v24_3_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_26_address0 = grp_linear_forward_no_mu_fu_1330_v78_3_1_0_address0.read();
    } else {
        quantized_final_outp_26_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_26_ce0 = grp_quantize_activation_fu_1802_v24_3_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_26_ce0 = grp_linear_forward_no_mu_fu_1330_v78_3_1_0_ce0.read();
    } else {
        quantized_final_outp_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_26_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_26_we0 = grp_quantize_activation_fu_1802_v24_3_1_0_we0.read();
    } else {
        quantized_final_outp_26_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_27_address0 = grp_quantize_activation_fu_1802_v24_3_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_27_address0 = grp_linear_forward_no_mu_fu_1330_v78_3_0_0_address0.read();
    } else {
        quantized_final_outp_27_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_27_ce0 = grp_quantize_activation_fu_1802_v24_3_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_27_ce0 = grp_linear_forward_no_mu_fu_1330_v78_3_0_0_ce0.read();
    } else {
        quantized_final_outp_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_27_we0 = grp_quantize_activation_fu_1802_v24_3_0_0_we0.read();
    } else {
        quantized_final_outp_27_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_28_address0 = grp_quantize_activation_fu_1802_v24_23_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_28_address0 = grp_linear_forward_no_mu_fu_1330_v78_23_3_0_address0.read();
    } else {
        quantized_final_outp_28_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_28_ce0 = grp_quantize_activation_fu_1802_v24_23_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_28_ce0 = grp_linear_forward_no_mu_fu_1330_v78_23_3_0_ce0.read();
    } else {
        quantized_final_outp_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_28_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_28_we0 = grp_quantize_activation_fu_1802_v24_23_3_0_we0.read();
    } else {
        quantized_final_outp_28_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_29_address0 = grp_quantize_activation_fu_1802_v24_23_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_29_address0 = grp_linear_forward_no_mu_fu_1330_v78_23_2_0_address0.read();
    } else {
        quantized_final_outp_29_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_29_ce0 = grp_quantize_activation_fu_1802_v24_23_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_29_ce0 = grp_linear_forward_no_mu_fu_1330_v78_23_2_0_ce0.read();
    } else {
        quantized_final_outp_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_29_we0 = grp_quantize_activation_fu_1802_v24_23_2_0_we0.read();
    } else {
        quantized_final_outp_29_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_2_address0 = grp_quantize_activation_fu_1802_v24_9_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_2_address0 = grp_linear_forward_no_mu_fu_1330_v78_9_1_0_address0.read();
    } else {
        quantized_final_outp_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_2_ce0 = grp_quantize_activation_fu_1802_v24_9_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_2_ce0 = grp_linear_forward_no_mu_fu_1330_v78_9_1_0_ce0.read();
    } else {
        quantized_final_outp_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_2_we0 = grp_quantize_activation_fu_1802_v24_9_1_0_we0.read();
    } else {
        quantized_final_outp_2_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_30_address0 = grp_quantize_activation_fu_1802_v24_23_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_30_address0 = grp_linear_forward_no_mu_fu_1330_v78_23_1_0_address0.read();
    } else {
        quantized_final_outp_30_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_30_ce0 = grp_quantize_activation_fu_1802_v24_23_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_30_ce0 = grp_linear_forward_no_mu_fu_1330_v78_23_1_0_ce0.read();
    } else {
        quantized_final_outp_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_30_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_30_we0 = grp_quantize_activation_fu_1802_v24_23_1_0_we0.read();
    } else {
        quantized_final_outp_30_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_31_address0 = grp_quantize_activation_fu_1802_v24_23_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_31_address0 = grp_linear_forward_no_mu_fu_1330_v78_23_0_0_address0.read();
    } else {
        quantized_final_outp_31_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_31_ce0 = grp_quantize_activation_fu_1802_v24_23_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_31_ce0 = grp_linear_forward_no_mu_fu_1330_v78_23_0_0_ce0.read();
    } else {
        quantized_final_outp_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_31_we0 = grp_quantize_activation_fu_1802_v24_23_0_0_we0.read();
    } else {
        quantized_final_outp_31_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_32_address0 = grp_quantize_activation_fu_1802_v24_22_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_32_address0 = grp_linear_forward_no_mu_fu_1330_v78_22_3_0_address0.read();
    } else {
        quantized_final_outp_32_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_32_ce0 = grp_quantize_activation_fu_1802_v24_22_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_32_ce0 = grp_linear_forward_no_mu_fu_1330_v78_22_3_0_ce0.read();
    } else {
        quantized_final_outp_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_32_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_32_we0 = grp_quantize_activation_fu_1802_v24_22_3_0_we0.read();
    } else {
        quantized_final_outp_32_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_33_address0 = grp_quantize_activation_fu_1802_v24_22_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_33_address0 = grp_linear_forward_no_mu_fu_1330_v78_22_2_0_address0.read();
    } else {
        quantized_final_outp_33_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_33_ce0 = grp_quantize_activation_fu_1802_v24_22_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_33_ce0 = grp_linear_forward_no_mu_fu_1330_v78_22_2_0_ce0.read();
    } else {
        quantized_final_outp_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_33_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_33_we0 = grp_quantize_activation_fu_1802_v24_22_2_0_we0.read();
    } else {
        quantized_final_outp_33_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_34_address0 = grp_quantize_activation_fu_1802_v24_22_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_34_address0 = grp_linear_forward_no_mu_fu_1330_v78_22_1_0_address0.read();
    } else {
        quantized_final_outp_34_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_34_ce0 = grp_quantize_activation_fu_1802_v24_22_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_34_ce0 = grp_linear_forward_no_mu_fu_1330_v78_22_1_0_ce0.read();
    } else {
        quantized_final_outp_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_34_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_34_we0 = grp_quantize_activation_fu_1802_v24_22_1_0_we0.read();
    } else {
        quantized_final_outp_34_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_35_address0 = grp_quantize_activation_fu_1802_v24_22_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_35_address0 = grp_linear_forward_no_mu_fu_1330_v78_22_0_0_address0.read();
    } else {
        quantized_final_outp_35_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_35_ce0 = grp_quantize_activation_fu_1802_v24_22_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_35_ce0 = grp_linear_forward_no_mu_fu_1330_v78_22_0_0_ce0.read();
    } else {
        quantized_final_outp_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_35_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_35_we0 = grp_quantize_activation_fu_1802_v24_22_0_0_we0.read();
    } else {
        quantized_final_outp_35_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_36_address0 = grp_quantize_activation_fu_1802_v24_21_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_36_address0 = grp_linear_forward_no_mu_fu_1330_v78_21_3_0_address0.read();
    } else {
        quantized_final_outp_36_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_36_ce0 = grp_quantize_activation_fu_1802_v24_21_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_36_ce0 = grp_linear_forward_no_mu_fu_1330_v78_21_3_0_ce0.read();
    } else {
        quantized_final_outp_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_36_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_36_we0 = grp_quantize_activation_fu_1802_v24_21_3_0_we0.read();
    } else {
        quantized_final_outp_36_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_37_address0 = grp_quantize_activation_fu_1802_v24_21_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_37_address0 = grp_linear_forward_no_mu_fu_1330_v78_21_2_0_address0.read();
    } else {
        quantized_final_outp_37_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_37_ce0 = grp_quantize_activation_fu_1802_v24_21_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_37_ce0 = grp_linear_forward_no_mu_fu_1330_v78_21_2_0_ce0.read();
    } else {
        quantized_final_outp_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_37_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_37_we0 = grp_quantize_activation_fu_1802_v24_21_2_0_we0.read();
    } else {
        quantized_final_outp_37_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_38_address0 = grp_quantize_activation_fu_1802_v24_21_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_38_address0 = grp_linear_forward_no_mu_fu_1330_v78_21_1_0_address0.read();
    } else {
        quantized_final_outp_38_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_38_ce0 = grp_quantize_activation_fu_1802_v24_21_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_38_ce0 = grp_linear_forward_no_mu_fu_1330_v78_21_1_0_ce0.read();
    } else {
        quantized_final_outp_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_38_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_38_we0 = grp_quantize_activation_fu_1802_v24_21_1_0_we0.read();
    } else {
        quantized_final_outp_38_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_39_address0 = grp_quantize_activation_fu_1802_v24_21_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_39_address0 = grp_linear_forward_no_mu_fu_1330_v78_21_0_0_address0.read();
    } else {
        quantized_final_outp_39_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_39_ce0 = grp_quantize_activation_fu_1802_v24_21_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_39_ce0 = grp_linear_forward_no_mu_fu_1330_v78_21_0_0_ce0.read();
    } else {
        quantized_final_outp_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_39_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_39_we0 = grp_quantize_activation_fu_1802_v24_21_0_0_we0.read();
    } else {
        quantized_final_outp_39_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_3_address0 = grp_quantize_activation_fu_1802_v24_9_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_3_address0 = grp_linear_forward_no_mu_fu_1330_v78_9_0_0_address0.read();
    } else {
        quantized_final_outp_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_3_ce0 = grp_quantize_activation_fu_1802_v24_9_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_3_ce0 = grp_linear_forward_no_mu_fu_1330_v78_9_0_0_ce0.read();
    } else {
        quantized_final_outp_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_3_we0 = grp_quantize_activation_fu_1802_v24_9_0_0_we0.read();
    } else {
        quantized_final_outp_3_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_40_address0 = grp_quantize_activation_fu_1802_v24_20_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_40_address0 = grp_linear_forward_no_mu_fu_1330_v78_20_3_0_address0.read();
    } else {
        quantized_final_outp_40_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_40_ce0 = grp_quantize_activation_fu_1802_v24_20_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_40_ce0 = grp_linear_forward_no_mu_fu_1330_v78_20_3_0_ce0.read();
    } else {
        quantized_final_outp_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_40_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_40_we0 = grp_quantize_activation_fu_1802_v24_20_3_0_we0.read();
    } else {
        quantized_final_outp_40_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_41_address0 = grp_quantize_activation_fu_1802_v24_20_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_41_address0 = grp_linear_forward_no_mu_fu_1330_v78_20_2_0_address0.read();
    } else {
        quantized_final_outp_41_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_41_ce0 = grp_quantize_activation_fu_1802_v24_20_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_41_ce0 = grp_linear_forward_no_mu_fu_1330_v78_20_2_0_ce0.read();
    } else {
        quantized_final_outp_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_41_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_41_we0 = grp_quantize_activation_fu_1802_v24_20_2_0_we0.read();
    } else {
        quantized_final_outp_41_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_42_address0 = grp_quantize_activation_fu_1802_v24_20_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_42_address0 = grp_linear_forward_no_mu_fu_1330_v78_20_1_0_address0.read();
    } else {
        quantized_final_outp_42_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_42_ce0 = grp_quantize_activation_fu_1802_v24_20_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_42_ce0 = grp_linear_forward_no_mu_fu_1330_v78_20_1_0_ce0.read();
    } else {
        quantized_final_outp_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_42_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_42_we0 = grp_quantize_activation_fu_1802_v24_20_1_0_we0.read();
    } else {
        quantized_final_outp_42_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_43_address0 = grp_quantize_activation_fu_1802_v24_20_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_43_address0 = grp_linear_forward_no_mu_fu_1330_v78_20_0_0_address0.read();
    } else {
        quantized_final_outp_43_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_43_ce0 = grp_quantize_activation_fu_1802_v24_20_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_43_ce0 = grp_linear_forward_no_mu_fu_1330_v78_20_0_0_ce0.read();
    } else {
        quantized_final_outp_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_43_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_43_we0 = grp_quantize_activation_fu_1802_v24_20_0_0_we0.read();
    } else {
        quantized_final_outp_43_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_44_address0 = grp_quantize_activation_fu_1802_v24_2_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_44_address0 = grp_linear_forward_no_mu_fu_1330_v78_2_3_0_address0.read();
    } else {
        quantized_final_outp_44_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_44_ce0 = grp_quantize_activation_fu_1802_v24_2_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_44_ce0 = grp_linear_forward_no_mu_fu_1330_v78_2_3_0_ce0.read();
    } else {
        quantized_final_outp_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_44_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_44_we0 = grp_quantize_activation_fu_1802_v24_2_3_0_we0.read();
    } else {
        quantized_final_outp_44_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_45_address0 = grp_quantize_activation_fu_1802_v24_2_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_45_address0 = grp_linear_forward_no_mu_fu_1330_v78_2_2_0_address0.read();
    } else {
        quantized_final_outp_45_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_45_ce0 = grp_quantize_activation_fu_1802_v24_2_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_45_ce0 = grp_linear_forward_no_mu_fu_1330_v78_2_2_0_ce0.read();
    } else {
        quantized_final_outp_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_45_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_45_we0 = grp_quantize_activation_fu_1802_v24_2_2_0_we0.read();
    } else {
        quantized_final_outp_45_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_46_address0 = grp_quantize_activation_fu_1802_v24_2_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_46_address0 = grp_linear_forward_no_mu_fu_1330_v78_2_1_0_address0.read();
    } else {
        quantized_final_outp_46_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_46_ce0 = grp_quantize_activation_fu_1802_v24_2_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_46_ce0 = grp_linear_forward_no_mu_fu_1330_v78_2_1_0_ce0.read();
    } else {
        quantized_final_outp_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_46_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_46_we0 = grp_quantize_activation_fu_1802_v24_2_1_0_we0.read();
    } else {
        quantized_final_outp_46_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_47_address0 = grp_quantize_activation_fu_1802_v24_2_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_47_address0 = grp_linear_forward_no_mu_fu_1330_v78_2_0_0_address0.read();
    } else {
        quantized_final_outp_47_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_47_ce0 = grp_quantize_activation_fu_1802_v24_2_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_47_ce0 = grp_linear_forward_no_mu_fu_1330_v78_2_0_0_ce0.read();
    } else {
        quantized_final_outp_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_47_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_47_we0 = grp_quantize_activation_fu_1802_v24_2_0_0_we0.read();
    } else {
        quantized_final_outp_47_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_48_address0 = grp_quantize_activation_fu_1802_v24_19_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_48_address0 = grp_linear_forward_no_mu_fu_1330_v78_19_3_0_address0.read();
    } else {
        quantized_final_outp_48_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_48_ce0 = grp_quantize_activation_fu_1802_v24_19_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_48_ce0 = grp_linear_forward_no_mu_fu_1330_v78_19_3_0_ce0.read();
    } else {
        quantized_final_outp_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_48_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_48_we0 = grp_quantize_activation_fu_1802_v24_19_3_0_we0.read();
    } else {
        quantized_final_outp_48_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_49_address0 = grp_quantize_activation_fu_1802_v24_19_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_49_address0 = grp_linear_forward_no_mu_fu_1330_v78_19_2_0_address0.read();
    } else {
        quantized_final_outp_49_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_49_ce0 = grp_quantize_activation_fu_1802_v24_19_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_49_ce0 = grp_linear_forward_no_mu_fu_1330_v78_19_2_0_ce0.read();
    } else {
        quantized_final_outp_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_49_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_49_we0 = grp_quantize_activation_fu_1802_v24_19_2_0_we0.read();
    } else {
        quantized_final_outp_49_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_4_address0 = grp_quantize_activation_fu_1802_v24_8_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_4_address0 = grp_linear_forward_no_mu_fu_1330_v78_8_3_0_address0.read();
    } else {
        quantized_final_outp_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_4_ce0 = grp_quantize_activation_fu_1802_v24_8_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_4_ce0 = grp_linear_forward_no_mu_fu_1330_v78_8_3_0_ce0.read();
    } else {
        quantized_final_outp_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_4_we0 = grp_quantize_activation_fu_1802_v24_8_3_0_we0.read();
    } else {
        quantized_final_outp_4_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_50_address0 = grp_quantize_activation_fu_1802_v24_19_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_50_address0 = grp_linear_forward_no_mu_fu_1330_v78_19_1_0_address0.read();
    } else {
        quantized_final_outp_50_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_50_ce0 = grp_quantize_activation_fu_1802_v24_19_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_50_ce0 = grp_linear_forward_no_mu_fu_1330_v78_19_1_0_ce0.read();
    } else {
        quantized_final_outp_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_50_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_50_we0 = grp_quantize_activation_fu_1802_v24_19_1_0_we0.read();
    } else {
        quantized_final_outp_50_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_51_address0 = grp_quantize_activation_fu_1802_v24_19_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_51_address0 = grp_linear_forward_no_mu_fu_1330_v78_19_0_0_address0.read();
    } else {
        quantized_final_outp_51_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_51_ce0 = grp_quantize_activation_fu_1802_v24_19_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_51_ce0 = grp_linear_forward_no_mu_fu_1330_v78_19_0_0_ce0.read();
    } else {
        quantized_final_outp_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_51_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_51_we0 = grp_quantize_activation_fu_1802_v24_19_0_0_we0.read();
    } else {
        quantized_final_outp_51_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_52_address0 = grp_quantize_activation_fu_1802_v24_18_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_52_address0 = grp_linear_forward_no_mu_fu_1330_v78_18_3_0_address0.read();
    } else {
        quantized_final_outp_52_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_52_ce0 = grp_quantize_activation_fu_1802_v24_18_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_52_ce0 = grp_linear_forward_no_mu_fu_1330_v78_18_3_0_ce0.read();
    } else {
        quantized_final_outp_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_52_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_52_we0 = grp_quantize_activation_fu_1802_v24_18_3_0_we0.read();
    } else {
        quantized_final_outp_52_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_53_address0 = grp_quantize_activation_fu_1802_v24_18_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_53_address0 = grp_linear_forward_no_mu_fu_1330_v78_18_2_0_address0.read();
    } else {
        quantized_final_outp_53_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_53_ce0 = grp_quantize_activation_fu_1802_v24_18_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_53_ce0 = grp_linear_forward_no_mu_fu_1330_v78_18_2_0_ce0.read();
    } else {
        quantized_final_outp_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_53_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_53_we0 = grp_quantize_activation_fu_1802_v24_18_2_0_we0.read();
    } else {
        quantized_final_outp_53_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_54_address0 = grp_quantize_activation_fu_1802_v24_18_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_54_address0 = grp_linear_forward_no_mu_fu_1330_v78_18_1_0_address0.read();
    } else {
        quantized_final_outp_54_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_54_ce0 = grp_quantize_activation_fu_1802_v24_18_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_54_ce0 = grp_linear_forward_no_mu_fu_1330_v78_18_1_0_ce0.read();
    } else {
        quantized_final_outp_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_54_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_54_we0 = grp_quantize_activation_fu_1802_v24_18_1_0_we0.read();
    } else {
        quantized_final_outp_54_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_55_address0 = grp_quantize_activation_fu_1802_v24_18_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_55_address0 = grp_linear_forward_no_mu_fu_1330_v78_18_0_0_address0.read();
    } else {
        quantized_final_outp_55_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_55_ce0 = grp_quantize_activation_fu_1802_v24_18_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_55_ce0 = grp_linear_forward_no_mu_fu_1330_v78_18_0_0_ce0.read();
    } else {
        quantized_final_outp_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_55_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_55_we0 = grp_quantize_activation_fu_1802_v24_18_0_0_we0.read();
    } else {
        quantized_final_outp_55_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_56_address0 = grp_quantize_activation_fu_1802_v24_17_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_56_address0 = grp_linear_forward_no_mu_fu_1330_v78_17_3_0_address0.read();
    } else {
        quantized_final_outp_56_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_56_ce0 = grp_quantize_activation_fu_1802_v24_17_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_56_ce0 = grp_linear_forward_no_mu_fu_1330_v78_17_3_0_ce0.read();
    } else {
        quantized_final_outp_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_56_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_56_we0 = grp_quantize_activation_fu_1802_v24_17_3_0_we0.read();
    } else {
        quantized_final_outp_56_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_57_address0 = grp_quantize_activation_fu_1802_v24_17_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_57_address0 = grp_linear_forward_no_mu_fu_1330_v78_17_2_0_address0.read();
    } else {
        quantized_final_outp_57_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_57_ce0 = grp_quantize_activation_fu_1802_v24_17_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_57_ce0 = grp_linear_forward_no_mu_fu_1330_v78_17_2_0_ce0.read();
    } else {
        quantized_final_outp_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_57_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_57_we0 = grp_quantize_activation_fu_1802_v24_17_2_0_we0.read();
    } else {
        quantized_final_outp_57_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_58_address0 = grp_quantize_activation_fu_1802_v24_17_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_58_address0 = grp_linear_forward_no_mu_fu_1330_v78_17_1_0_address0.read();
    } else {
        quantized_final_outp_58_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_58_ce0 = grp_quantize_activation_fu_1802_v24_17_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_58_ce0 = grp_linear_forward_no_mu_fu_1330_v78_17_1_0_ce0.read();
    } else {
        quantized_final_outp_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_58_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_58_we0 = grp_quantize_activation_fu_1802_v24_17_1_0_we0.read();
    } else {
        quantized_final_outp_58_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_59_address0 = grp_quantize_activation_fu_1802_v24_17_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_59_address0 = grp_linear_forward_no_mu_fu_1330_v78_17_0_0_address0.read();
    } else {
        quantized_final_outp_59_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_59_ce0 = grp_quantize_activation_fu_1802_v24_17_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_59_ce0 = grp_linear_forward_no_mu_fu_1330_v78_17_0_0_ce0.read();
    } else {
        quantized_final_outp_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_59_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_59_we0 = grp_quantize_activation_fu_1802_v24_17_0_0_we0.read();
    } else {
        quantized_final_outp_59_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_5_address0 = grp_quantize_activation_fu_1802_v24_8_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_5_address0 = grp_linear_forward_no_mu_fu_1330_v78_8_2_0_address0.read();
    } else {
        quantized_final_outp_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_5_ce0 = grp_quantize_activation_fu_1802_v24_8_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_5_ce0 = grp_linear_forward_no_mu_fu_1330_v78_8_2_0_ce0.read();
    } else {
        quantized_final_outp_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_5_we0 = grp_quantize_activation_fu_1802_v24_8_2_0_we0.read();
    } else {
        quantized_final_outp_5_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_60_address0 = grp_quantize_activation_fu_1802_v24_16_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_60_address0 = grp_linear_forward_no_mu_fu_1330_v78_16_3_0_address0.read();
    } else {
        quantized_final_outp_60_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_60_ce0 = grp_quantize_activation_fu_1802_v24_16_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_60_ce0 = grp_linear_forward_no_mu_fu_1330_v78_16_3_0_ce0.read();
    } else {
        quantized_final_outp_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_60_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_60_we0 = grp_quantize_activation_fu_1802_v24_16_3_0_we0.read();
    } else {
        quantized_final_outp_60_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_61_address0 = grp_quantize_activation_fu_1802_v24_16_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_61_address0 = grp_linear_forward_no_mu_fu_1330_v78_16_2_0_address0.read();
    } else {
        quantized_final_outp_61_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_61_ce0 = grp_quantize_activation_fu_1802_v24_16_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_61_ce0 = grp_linear_forward_no_mu_fu_1330_v78_16_2_0_ce0.read();
    } else {
        quantized_final_outp_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_61_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_61_we0 = grp_quantize_activation_fu_1802_v24_16_2_0_we0.read();
    } else {
        quantized_final_outp_61_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_62_address0 = grp_quantize_activation_fu_1802_v24_16_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_62_address0 = grp_linear_forward_no_mu_fu_1330_v78_16_1_0_address0.read();
    } else {
        quantized_final_outp_62_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_62_ce0 = grp_quantize_activation_fu_1802_v24_16_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_62_ce0 = grp_linear_forward_no_mu_fu_1330_v78_16_1_0_ce0.read();
    } else {
        quantized_final_outp_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_62_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_62_we0 = grp_quantize_activation_fu_1802_v24_16_1_0_we0.read();
    } else {
        quantized_final_outp_62_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_63_address0 = grp_quantize_activation_fu_1802_v24_16_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_63_address0 = grp_linear_forward_no_mu_fu_1330_v78_16_0_0_address0.read();
    } else {
        quantized_final_outp_63_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_63_ce0 = grp_quantize_activation_fu_1802_v24_16_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_63_ce0 = grp_linear_forward_no_mu_fu_1330_v78_16_0_0_ce0.read();
    } else {
        quantized_final_outp_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_63_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_63_we0 = grp_quantize_activation_fu_1802_v24_16_0_0_we0.read();
    } else {
        quantized_final_outp_63_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_64_address0 = grp_quantize_activation_fu_1802_v24_15_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_64_address0 = grp_linear_forward_no_mu_fu_1330_v78_15_3_0_address0.read();
    } else {
        quantized_final_outp_64_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_64_ce0 = grp_quantize_activation_fu_1802_v24_15_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_64_ce0 = grp_linear_forward_no_mu_fu_1330_v78_15_3_0_ce0.read();
    } else {
        quantized_final_outp_64_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_64_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_64_we0 = grp_quantize_activation_fu_1802_v24_15_3_0_we0.read();
    } else {
        quantized_final_outp_64_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_65_address0 = grp_quantize_activation_fu_1802_v24_15_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_65_address0 = grp_linear_forward_no_mu_fu_1330_v78_15_2_0_address0.read();
    } else {
        quantized_final_outp_65_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_65_ce0 = grp_quantize_activation_fu_1802_v24_15_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_65_ce0 = grp_linear_forward_no_mu_fu_1330_v78_15_2_0_ce0.read();
    } else {
        quantized_final_outp_65_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_65_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_65_we0 = grp_quantize_activation_fu_1802_v24_15_2_0_we0.read();
    } else {
        quantized_final_outp_65_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_66_address0 = grp_quantize_activation_fu_1802_v24_15_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_66_address0 = grp_linear_forward_no_mu_fu_1330_v78_15_1_0_address0.read();
    } else {
        quantized_final_outp_66_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_66_ce0 = grp_quantize_activation_fu_1802_v24_15_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_66_ce0 = grp_linear_forward_no_mu_fu_1330_v78_15_1_0_ce0.read();
    } else {
        quantized_final_outp_66_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_66_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_66_we0 = grp_quantize_activation_fu_1802_v24_15_1_0_we0.read();
    } else {
        quantized_final_outp_66_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_67_address0 = grp_quantize_activation_fu_1802_v24_15_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_67_address0 = grp_linear_forward_no_mu_fu_1330_v78_15_0_0_address0.read();
    } else {
        quantized_final_outp_67_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_67_ce0 = grp_quantize_activation_fu_1802_v24_15_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_67_ce0 = grp_linear_forward_no_mu_fu_1330_v78_15_0_0_ce0.read();
    } else {
        quantized_final_outp_67_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_67_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_67_we0 = grp_quantize_activation_fu_1802_v24_15_0_0_we0.read();
    } else {
        quantized_final_outp_67_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_68_address0 = grp_quantize_activation_fu_1802_v24_14_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_68_address0 = grp_linear_forward_no_mu_fu_1330_v78_14_3_0_address0.read();
    } else {
        quantized_final_outp_68_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_68_ce0 = grp_quantize_activation_fu_1802_v24_14_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_68_ce0 = grp_linear_forward_no_mu_fu_1330_v78_14_3_0_ce0.read();
    } else {
        quantized_final_outp_68_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_68_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_68_we0 = grp_quantize_activation_fu_1802_v24_14_3_0_we0.read();
    } else {
        quantized_final_outp_68_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_69_address0 = grp_quantize_activation_fu_1802_v24_14_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_69_address0 = grp_linear_forward_no_mu_fu_1330_v78_14_2_0_address0.read();
    } else {
        quantized_final_outp_69_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_69_ce0 = grp_quantize_activation_fu_1802_v24_14_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_69_ce0 = grp_linear_forward_no_mu_fu_1330_v78_14_2_0_ce0.read();
    } else {
        quantized_final_outp_69_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_69_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_69_we0 = grp_quantize_activation_fu_1802_v24_14_2_0_we0.read();
    } else {
        quantized_final_outp_69_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_6_address0 = grp_quantize_activation_fu_1802_v24_8_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_6_address0 = grp_linear_forward_no_mu_fu_1330_v78_8_1_0_address0.read();
    } else {
        quantized_final_outp_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_6_ce0 = grp_quantize_activation_fu_1802_v24_8_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_6_ce0 = grp_linear_forward_no_mu_fu_1330_v78_8_1_0_ce0.read();
    } else {
        quantized_final_outp_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_6_we0 = grp_quantize_activation_fu_1802_v24_8_1_0_we0.read();
    } else {
        quantized_final_outp_6_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_70_address0 = grp_quantize_activation_fu_1802_v24_14_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_70_address0 = grp_linear_forward_no_mu_fu_1330_v78_14_1_0_address0.read();
    } else {
        quantized_final_outp_70_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_70_ce0 = grp_quantize_activation_fu_1802_v24_14_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_70_ce0 = grp_linear_forward_no_mu_fu_1330_v78_14_1_0_ce0.read();
    } else {
        quantized_final_outp_70_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_70_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_70_we0 = grp_quantize_activation_fu_1802_v24_14_1_0_we0.read();
    } else {
        quantized_final_outp_70_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_71_address0 = grp_quantize_activation_fu_1802_v24_14_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_71_address0 = grp_linear_forward_no_mu_fu_1330_v78_14_0_0_address0.read();
    } else {
        quantized_final_outp_71_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_71_ce0 = grp_quantize_activation_fu_1802_v24_14_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_71_ce0 = grp_linear_forward_no_mu_fu_1330_v78_14_0_0_ce0.read();
    } else {
        quantized_final_outp_71_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_71_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_71_we0 = grp_quantize_activation_fu_1802_v24_14_0_0_we0.read();
    } else {
        quantized_final_outp_71_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_72_address0 = grp_quantize_activation_fu_1802_v24_13_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_72_address0 = grp_linear_forward_no_mu_fu_1330_v78_13_3_0_address0.read();
    } else {
        quantized_final_outp_72_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_72_ce0 = grp_quantize_activation_fu_1802_v24_13_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_72_ce0 = grp_linear_forward_no_mu_fu_1330_v78_13_3_0_ce0.read();
    } else {
        quantized_final_outp_72_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_72_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_72_we0 = grp_quantize_activation_fu_1802_v24_13_3_0_we0.read();
    } else {
        quantized_final_outp_72_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_73_address0 = grp_quantize_activation_fu_1802_v24_13_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_73_address0 = grp_linear_forward_no_mu_fu_1330_v78_13_2_0_address0.read();
    } else {
        quantized_final_outp_73_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_73_ce0 = grp_quantize_activation_fu_1802_v24_13_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_73_ce0 = grp_linear_forward_no_mu_fu_1330_v78_13_2_0_ce0.read();
    } else {
        quantized_final_outp_73_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_73_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_73_we0 = grp_quantize_activation_fu_1802_v24_13_2_0_we0.read();
    } else {
        quantized_final_outp_73_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_74_address0 = grp_quantize_activation_fu_1802_v24_13_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_74_address0 = grp_linear_forward_no_mu_fu_1330_v78_13_1_0_address0.read();
    } else {
        quantized_final_outp_74_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_74_ce0 = grp_quantize_activation_fu_1802_v24_13_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_74_ce0 = grp_linear_forward_no_mu_fu_1330_v78_13_1_0_ce0.read();
    } else {
        quantized_final_outp_74_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_74_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_74_we0 = grp_quantize_activation_fu_1802_v24_13_1_0_we0.read();
    } else {
        quantized_final_outp_74_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_75_address0 = grp_quantize_activation_fu_1802_v24_13_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_75_address0 = grp_linear_forward_no_mu_fu_1330_v78_13_0_0_address0.read();
    } else {
        quantized_final_outp_75_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_75_ce0 = grp_quantize_activation_fu_1802_v24_13_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_75_ce0 = grp_linear_forward_no_mu_fu_1330_v78_13_0_0_ce0.read();
    } else {
        quantized_final_outp_75_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_75_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_75_we0 = grp_quantize_activation_fu_1802_v24_13_0_0_we0.read();
    } else {
        quantized_final_outp_75_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_76_address0 = grp_quantize_activation_fu_1802_v24_12_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_76_address0 = grp_linear_forward_no_mu_fu_1330_v78_12_3_0_address0.read();
    } else {
        quantized_final_outp_76_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_76_ce0 = grp_quantize_activation_fu_1802_v24_12_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_76_ce0 = grp_linear_forward_no_mu_fu_1330_v78_12_3_0_ce0.read();
    } else {
        quantized_final_outp_76_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_76_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_76_we0 = grp_quantize_activation_fu_1802_v24_12_3_0_we0.read();
    } else {
        quantized_final_outp_76_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_77_address0 = grp_quantize_activation_fu_1802_v24_12_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_77_address0 = grp_linear_forward_no_mu_fu_1330_v78_12_2_0_address0.read();
    } else {
        quantized_final_outp_77_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_77_ce0 = grp_quantize_activation_fu_1802_v24_12_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_77_ce0 = grp_linear_forward_no_mu_fu_1330_v78_12_2_0_ce0.read();
    } else {
        quantized_final_outp_77_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_77_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_77_we0 = grp_quantize_activation_fu_1802_v24_12_2_0_we0.read();
    } else {
        quantized_final_outp_77_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_78_address0 = grp_quantize_activation_fu_1802_v24_12_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_78_address0 = grp_linear_forward_no_mu_fu_1330_v78_12_1_0_address0.read();
    } else {
        quantized_final_outp_78_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_78_ce0 = grp_quantize_activation_fu_1802_v24_12_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_78_ce0 = grp_linear_forward_no_mu_fu_1330_v78_12_1_0_ce0.read();
    } else {
        quantized_final_outp_78_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_78_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_78_we0 = grp_quantize_activation_fu_1802_v24_12_1_0_we0.read();
    } else {
        quantized_final_outp_78_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_79_address0 = grp_quantize_activation_fu_1802_v24_12_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_79_address0 = grp_linear_forward_no_mu_fu_1330_v78_12_0_0_address0.read();
    } else {
        quantized_final_outp_79_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_79_ce0 = grp_quantize_activation_fu_1802_v24_12_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_79_ce0 = grp_linear_forward_no_mu_fu_1330_v78_12_0_0_ce0.read();
    } else {
        quantized_final_outp_79_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_79_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_79_we0 = grp_quantize_activation_fu_1802_v24_12_0_0_we0.read();
    } else {
        quantized_final_outp_79_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_7_address0 = grp_quantize_activation_fu_1802_v24_8_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_7_address0 = grp_linear_forward_no_mu_fu_1330_v78_8_0_0_address0.read();
    } else {
        quantized_final_outp_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_7_ce0 = grp_quantize_activation_fu_1802_v24_8_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_7_ce0 = grp_linear_forward_no_mu_fu_1330_v78_8_0_0_ce0.read();
    } else {
        quantized_final_outp_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_7_we0 = grp_quantize_activation_fu_1802_v24_8_0_0_we0.read();
    } else {
        quantized_final_outp_7_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_80_address0 = grp_quantize_activation_fu_1802_v24_11_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_80_address0 = grp_linear_forward_no_mu_fu_1330_v78_11_3_0_address0.read();
    } else {
        quantized_final_outp_80_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_80_ce0 = grp_quantize_activation_fu_1802_v24_11_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_80_ce0 = grp_linear_forward_no_mu_fu_1330_v78_11_3_0_ce0.read();
    } else {
        quantized_final_outp_80_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_80_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_80_we0 = grp_quantize_activation_fu_1802_v24_11_3_0_we0.read();
    } else {
        quantized_final_outp_80_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_81_address0 = grp_quantize_activation_fu_1802_v24_11_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_81_address0 = grp_linear_forward_no_mu_fu_1330_v78_11_2_0_address0.read();
    } else {
        quantized_final_outp_81_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_81_ce0 = grp_quantize_activation_fu_1802_v24_11_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_81_ce0 = grp_linear_forward_no_mu_fu_1330_v78_11_2_0_ce0.read();
    } else {
        quantized_final_outp_81_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_81_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_81_we0 = grp_quantize_activation_fu_1802_v24_11_2_0_we0.read();
    } else {
        quantized_final_outp_81_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_82_address0 = grp_quantize_activation_fu_1802_v24_11_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_82_address0 = grp_linear_forward_no_mu_fu_1330_v78_11_1_0_address0.read();
    } else {
        quantized_final_outp_82_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_82_ce0 = grp_quantize_activation_fu_1802_v24_11_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_82_ce0 = grp_linear_forward_no_mu_fu_1330_v78_11_1_0_ce0.read();
    } else {
        quantized_final_outp_82_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_82_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_82_we0 = grp_quantize_activation_fu_1802_v24_11_1_0_we0.read();
    } else {
        quantized_final_outp_82_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_83_address0 = grp_quantize_activation_fu_1802_v24_11_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_83_address0 = grp_linear_forward_no_mu_fu_1330_v78_11_0_0_address0.read();
    } else {
        quantized_final_outp_83_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_83_ce0 = grp_quantize_activation_fu_1802_v24_11_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_83_ce0 = grp_linear_forward_no_mu_fu_1330_v78_11_0_0_ce0.read();
    } else {
        quantized_final_outp_83_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_83_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_83_we0 = grp_quantize_activation_fu_1802_v24_11_0_0_we0.read();
    } else {
        quantized_final_outp_83_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_84_address0 = grp_quantize_activation_fu_1802_v24_10_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_84_address0 = grp_linear_forward_no_mu_fu_1330_v78_10_3_0_address0.read();
    } else {
        quantized_final_outp_84_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_84_ce0 = grp_quantize_activation_fu_1802_v24_10_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_84_ce0 = grp_linear_forward_no_mu_fu_1330_v78_10_3_0_ce0.read();
    } else {
        quantized_final_outp_84_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_84_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_84_we0 = grp_quantize_activation_fu_1802_v24_10_3_0_we0.read();
    } else {
        quantized_final_outp_84_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_85_address0 = grp_quantize_activation_fu_1802_v24_10_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_85_address0 = grp_linear_forward_no_mu_fu_1330_v78_10_2_0_address0.read();
    } else {
        quantized_final_outp_85_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_85_ce0 = grp_quantize_activation_fu_1802_v24_10_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_85_ce0 = grp_linear_forward_no_mu_fu_1330_v78_10_2_0_ce0.read();
    } else {
        quantized_final_outp_85_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_85_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_85_we0 = grp_quantize_activation_fu_1802_v24_10_2_0_we0.read();
    } else {
        quantized_final_outp_85_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_86_address0 = grp_quantize_activation_fu_1802_v24_10_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_86_address0 = grp_linear_forward_no_mu_fu_1330_v78_10_1_0_address0.read();
    } else {
        quantized_final_outp_86_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_86_ce0 = grp_quantize_activation_fu_1802_v24_10_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_86_ce0 = grp_linear_forward_no_mu_fu_1330_v78_10_1_0_ce0.read();
    } else {
        quantized_final_outp_86_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_86_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_86_we0 = grp_quantize_activation_fu_1802_v24_10_1_0_we0.read();
    } else {
        quantized_final_outp_86_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_87_address0 = grp_quantize_activation_fu_1802_v24_10_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_87_address0 = grp_linear_forward_no_mu_fu_1330_v78_10_0_0_address0.read();
    } else {
        quantized_final_outp_87_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_87_ce0 = grp_quantize_activation_fu_1802_v24_10_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_87_ce0 = grp_linear_forward_no_mu_fu_1330_v78_10_0_0_ce0.read();
    } else {
        quantized_final_outp_87_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_87_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_87_we0 = grp_quantize_activation_fu_1802_v24_10_0_0_we0.read();
    } else {
        quantized_final_outp_87_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_88_address0 = grp_quantize_activation_fu_1802_v24_1_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_88_address0 = grp_linear_forward_no_mu_fu_1330_v78_1_3_0_address0.read();
    } else {
        quantized_final_outp_88_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_88_ce0 = grp_quantize_activation_fu_1802_v24_1_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_88_ce0 = grp_linear_forward_no_mu_fu_1330_v78_1_3_0_ce0.read();
    } else {
        quantized_final_outp_88_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_88_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_88_we0 = grp_quantize_activation_fu_1802_v24_1_3_0_we0.read();
    } else {
        quantized_final_outp_88_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_89_address0 = grp_quantize_activation_fu_1802_v24_1_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_89_address0 = grp_linear_forward_no_mu_fu_1330_v78_1_2_0_address0.read();
    } else {
        quantized_final_outp_89_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_89_ce0 = grp_quantize_activation_fu_1802_v24_1_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_89_ce0 = grp_linear_forward_no_mu_fu_1330_v78_1_2_0_ce0.read();
    } else {
        quantized_final_outp_89_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_89_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_89_we0 = grp_quantize_activation_fu_1802_v24_1_2_0_we0.read();
    } else {
        quantized_final_outp_89_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_8_address0 = grp_quantize_activation_fu_1802_v24_7_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_8_address0 = grp_linear_forward_no_mu_fu_1330_v78_7_3_0_address0.read();
    } else {
        quantized_final_outp_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_8_ce0 = grp_quantize_activation_fu_1802_v24_7_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_8_ce0 = grp_linear_forward_no_mu_fu_1330_v78_7_3_0_ce0.read();
    } else {
        quantized_final_outp_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_8_we0 = grp_quantize_activation_fu_1802_v24_7_3_0_we0.read();
    } else {
        quantized_final_outp_8_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_90_address0 = grp_quantize_activation_fu_1802_v24_1_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_90_address0 = grp_linear_forward_no_mu_fu_1330_v78_1_1_0_address0.read();
    } else {
        quantized_final_outp_90_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_90_ce0 = grp_quantize_activation_fu_1802_v24_1_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_90_ce0 = grp_linear_forward_no_mu_fu_1330_v78_1_1_0_ce0.read();
    } else {
        quantized_final_outp_90_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_90_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_90_we0 = grp_quantize_activation_fu_1802_v24_1_1_0_we0.read();
    } else {
        quantized_final_outp_90_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_91_address0 = grp_quantize_activation_fu_1802_v24_1_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_91_address0 = grp_linear_forward_no_mu_fu_1330_v78_1_0_0_address0.read();
    } else {
        quantized_final_outp_91_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_91_ce0 = grp_quantize_activation_fu_1802_v24_1_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_91_ce0 = grp_linear_forward_no_mu_fu_1330_v78_1_0_0_ce0.read();
    } else {
        quantized_final_outp_91_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_91_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_91_we0 = grp_quantize_activation_fu_1802_v24_1_0_0_we0.read();
    } else {
        quantized_final_outp_91_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_92_address0 = grp_quantize_activation_fu_1802_v24_0_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_92_address0 = grp_linear_forward_no_mu_fu_1330_v78_0_3_0_address0.read();
    } else {
        quantized_final_outp_92_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_92_ce0 = grp_quantize_activation_fu_1802_v24_0_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_92_ce0 = grp_linear_forward_no_mu_fu_1330_v78_0_3_0_ce0.read();
    } else {
        quantized_final_outp_92_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_92_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_92_we0 = grp_quantize_activation_fu_1802_v24_0_3_0_we0.read();
    } else {
        quantized_final_outp_92_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_93_address0 = grp_quantize_activation_fu_1802_v24_0_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_93_address0 = grp_linear_forward_no_mu_fu_1330_v78_0_2_0_address0.read();
    } else {
        quantized_final_outp_93_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_93_ce0 = grp_quantize_activation_fu_1802_v24_0_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_93_ce0 = grp_linear_forward_no_mu_fu_1330_v78_0_2_0_ce0.read();
    } else {
        quantized_final_outp_93_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_93_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_93_we0 = grp_quantize_activation_fu_1802_v24_0_2_0_we0.read();
    } else {
        quantized_final_outp_93_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_94_address0 = grp_quantize_activation_fu_1802_v24_0_1_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_94_address0 = grp_linear_forward_no_mu_fu_1330_v78_0_1_0_address0.read();
    } else {
        quantized_final_outp_94_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_94_ce0 = grp_quantize_activation_fu_1802_v24_0_1_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_94_ce0 = grp_linear_forward_no_mu_fu_1330_v78_0_1_0_ce0.read();
    } else {
        quantized_final_outp_94_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_94_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_94_we0 = grp_quantize_activation_fu_1802_v24_0_1_0_we0.read();
    } else {
        quantized_final_outp_94_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_95_address0 = grp_quantize_activation_fu_1802_v24_0_0_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_95_address0 = grp_linear_forward_no_mu_fu_1330_v78_0_0_0_address0.read();
    } else {
        quantized_final_outp_95_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_95_ce0 = grp_quantize_activation_fu_1802_v24_0_0_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_95_ce0 = grp_linear_forward_no_mu_fu_1330_v78_0_0_0_ce0.read();
    } else {
        quantized_final_outp_95_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_95_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_95_we0 = grp_quantize_activation_fu_1802_v24_0_0_0_we0.read();
    } else {
        quantized_final_outp_95_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_9_address0 = grp_quantize_activation_fu_1802_v24_7_2_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_9_address0 = grp_linear_forward_no_mu_fu_1330_v78_7_2_0_address0.read();
    } else {
        quantized_final_outp_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_9_ce0 = grp_quantize_activation_fu_1802_v24_7_2_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_9_ce0 = grp_linear_forward_no_mu_fu_1330_v78_7_2_0_ce0.read();
    } else {
        quantized_final_outp_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_9_we0 = grp_quantize_activation_fu_1802_v24_7_2_0_we0.read();
    } else {
        quantized_final_outp_9_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_address0 = grp_quantize_activation_fu_1802_v24_9_3_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_address0 = grp_linear_forward_no_mu_fu_1330_v78_9_3_0_address0.read();
    } else {
        quantized_final_outp_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_final_outp_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_ce0 = grp_quantize_activation_fu_1802_v24_9_3_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        quantized_final_outp_ce0 = grp_linear_forward_no_mu_fu_1330_v78_9_3_0_ce0.read();
    } else {
        quantized_final_outp_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_final_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        quantized_final_outp_we0 = grp_quantize_activation_fu_1802_v24_9_3_0_we0.read();
    } else {
        quantized_final_outp_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_10_address0 = grp_quantize_activation_fu_1802_v24_7_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_10_address0 = grp_linear_forward_no_mu_fu_1330_v78_7_1_0_address0.read();
    } else {
        quantized_hidden_sta_10_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_10_ce0 = grp_quantize_activation_fu_1802_v24_7_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_10_ce0 = grp_linear_forward_no_mu_fu_1330_v78_7_1_0_ce0.read();
    } else {
        quantized_hidden_sta_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_10_we0 = grp_quantize_activation_fu_1802_v24_7_1_0_we0.read();
    } else {
        quantized_hidden_sta_10_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_11_address0 = grp_quantize_activation_fu_1802_v24_7_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_11_address0 = grp_linear_forward_no_mu_fu_1330_v78_7_0_0_address0.read();
    } else {
        quantized_hidden_sta_11_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_11_ce0 = grp_quantize_activation_fu_1802_v24_7_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_11_ce0 = grp_linear_forward_no_mu_fu_1330_v78_7_0_0_ce0.read();
    } else {
        quantized_hidden_sta_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_11_we0 = grp_quantize_activation_fu_1802_v24_7_0_0_we0.read();
    } else {
        quantized_hidden_sta_11_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_12_address0 = grp_quantize_activation_fu_1802_v24_6_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_12_address0 = grp_linear_forward_no_mu_fu_1330_v78_6_3_0_address0.read();
    } else {
        quantized_hidden_sta_12_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_12_ce0 = grp_quantize_activation_fu_1802_v24_6_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_12_ce0 = grp_linear_forward_no_mu_fu_1330_v78_6_3_0_ce0.read();
    } else {
        quantized_hidden_sta_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_12_we0 = grp_quantize_activation_fu_1802_v24_6_3_0_we0.read();
    } else {
        quantized_hidden_sta_12_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_13_address0 = grp_quantize_activation_fu_1802_v24_6_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_13_address0 = grp_linear_forward_no_mu_fu_1330_v78_6_2_0_address0.read();
    } else {
        quantized_hidden_sta_13_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_13_ce0 = grp_quantize_activation_fu_1802_v24_6_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_13_ce0 = grp_linear_forward_no_mu_fu_1330_v78_6_2_0_ce0.read();
    } else {
        quantized_hidden_sta_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_13_we0 = grp_quantize_activation_fu_1802_v24_6_2_0_we0.read();
    } else {
        quantized_hidden_sta_13_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_14_address0 = grp_quantize_activation_fu_1802_v24_6_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_14_address0 = grp_linear_forward_no_mu_fu_1330_v78_6_1_0_address0.read();
    } else {
        quantized_hidden_sta_14_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_14_ce0 = grp_quantize_activation_fu_1802_v24_6_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_14_ce0 = grp_linear_forward_no_mu_fu_1330_v78_6_1_0_ce0.read();
    } else {
        quantized_hidden_sta_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_14_we0 = grp_quantize_activation_fu_1802_v24_6_1_0_we0.read();
    } else {
        quantized_hidden_sta_14_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_15_address0 = grp_quantize_activation_fu_1802_v24_6_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_15_address0 = grp_linear_forward_no_mu_fu_1330_v78_6_0_0_address0.read();
    } else {
        quantized_hidden_sta_15_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_15_ce0 = grp_quantize_activation_fu_1802_v24_6_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_15_ce0 = grp_linear_forward_no_mu_fu_1330_v78_6_0_0_ce0.read();
    } else {
        quantized_hidden_sta_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_15_we0 = grp_quantize_activation_fu_1802_v24_6_0_0_we0.read();
    } else {
        quantized_hidden_sta_15_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_16_address0 = grp_quantize_activation_fu_1802_v24_5_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_16_address0 = grp_linear_forward_no_mu_fu_1330_v78_5_3_0_address0.read();
    } else {
        quantized_hidden_sta_16_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_16_ce0 = grp_quantize_activation_fu_1802_v24_5_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_16_ce0 = grp_linear_forward_no_mu_fu_1330_v78_5_3_0_ce0.read();
    } else {
        quantized_hidden_sta_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_16_we0 = grp_quantize_activation_fu_1802_v24_5_3_0_we0.read();
    } else {
        quantized_hidden_sta_16_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_17_address0 = grp_quantize_activation_fu_1802_v24_5_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_17_address0 = grp_linear_forward_no_mu_fu_1330_v78_5_2_0_address0.read();
    } else {
        quantized_hidden_sta_17_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_17_ce0 = grp_quantize_activation_fu_1802_v24_5_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_17_ce0 = grp_linear_forward_no_mu_fu_1330_v78_5_2_0_ce0.read();
    } else {
        quantized_hidden_sta_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_17_we0 = grp_quantize_activation_fu_1802_v24_5_2_0_we0.read();
    } else {
        quantized_hidden_sta_17_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_18_address0 = grp_quantize_activation_fu_1802_v24_5_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_18_address0 = grp_linear_forward_no_mu_fu_1330_v78_5_1_0_address0.read();
    } else {
        quantized_hidden_sta_18_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_18_ce0 = grp_quantize_activation_fu_1802_v24_5_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_18_ce0 = grp_linear_forward_no_mu_fu_1330_v78_5_1_0_ce0.read();
    } else {
        quantized_hidden_sta_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_18_we0 = grp_quantize_activation_fu_1802_v24_5_1_0_we0.read();
    } else {
        quantized_hidden_sta_18_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_19_address0 = grp_quantize_activation_fu_1802_v24_5_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_19_address0 = grp_linear_forward_no_mu_fu_1330_v78_5_0_0_address0.read();
    } else {
        quantized_hidden_sta_19_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_19_ce0 = grp_quantize_activation_fu_1802_v24_5_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_19_ce0 = grp_linear_forward_no_mu_fu_1330_v78_5_0_0_ce0.read();
    } else {
        quantized_hidden_sta_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_19_we0 = grp_quantize_activation_fu_1802_v24_5_0_0_we0.read();
    } else {
        quantized_hidden_sta_19_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_1_address0 = grp_quantize_activation_fu_1802_v24_9_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_1_address0 = grp_linear_forward_no_mu_fu_1330_v78_9_2_0_address0.read();
    } else {
        quantized_hidden_sta_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_1_ce0 = grp_quantize_activation_fu_1802_v24_9_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_1_ce0 = grp_linear_forward_no_mu_fu_1330_v78_9_2_0_ce0.read();
    } else {
        quantized_hidden_sta_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_1_we0 = grp_quantize_activation_fu_1802_v24_9_2_0_we0.read();
    } else {
        quantized_hidden_sta_1_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_20_address0 = grp_quantize_activation_fu_1802_v24_4_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_20_address0 = grp_linear_forward_no_mu_fu_1330_v78_4_3_0_address0.read();
    } else {
        quantized_hidden_sta_20_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_20_ce0 = grp_quantize_activation_fu_1802_v24_4_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_20_ce0 = grp_linear_forward_no_mu_fu_1330_v78_4_3_0_ce0.read();
    } else {
        quantized_hidden_sta_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_20_we0 = grp_quantize_activation_fu_1802_v24_4_3_0_we0.read();
    } else {
        quantized_hidden_sta_20_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_21_address0 = grp_quantize_activation_fu_1802_v24_4_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_21_address0 = grp_linear_forward_no_mu_fu_1330_v78_4_2_0_address0.read();
    } else {
        quantized_hidden_sta_21_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_21_ce0 = grp_quantize_activation_fu_1802_v24_4_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_21_ce0 = grp_linear_forward_no_mu_fu_1330_v78_4_2_0_ce0.read();
    } else {
        quantized_hidden_sta_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_21_we0 = grp_quantize_activation_fu_1802_v24_4_2_0_we0.read();
    } else {
        quantized_hidden_sta_21_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_22_address0 = grp_quantize_activation_fu_1802_v24_4_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_22_address0 = grp_linear_forward_no_mu_fu_1330_v78_4_1_0_address0.read();
    } else {
        quantized_hidden_sta_22_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_22_ce0 = grp_quantize_activation_fu_1802_v24_4_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_22_ce0 = grp_linear_forward_no_mu_fu_1330_v78_4_1_0_ce0.read();
    } else {
        quantized_hidden_sta_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_22_we0 = grp_quantize_activation_fu_1802_v24_4_1_0_we0.read();
    } else {
        quantized_hidden_sta_22_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_23_address0 = grp_quantize_activation_fu_1802_v24_4_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_23_address0 = grp_linear_forward_no_mu_fu_1330_v78_4_0_0_address0.read();
    } else {
        quantized_hidden_sta_23_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_23_ce0 = grp_quantize_activation_fu_1802_v24_4_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_23_ce0 = grp_linear_forward_no_mu_fu_1330_v78_4_0_0_ce0.read();
    } else {
        quantized_hidden_sta_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_23_we0 = grp_quantize_activation_fu_1802_v24_4_0_0_we0.read();
    } else {
        quantized_hidden_sta_23_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_24_address0 = grp_quantize_activation_fu_1802_v24_3_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_24_address0 = grp_linear_forward_no_mu_fu_1330_v78_3_3_0_address0.read();
    } else {
        quantized_hidden_sta_24_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_24_ce0 = grp_quantize_activation_fu_1802_v24_3_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_24_ce0 = grp_linear_forward_no_mu_fu_1330_v78_3_3_0_ce0.read();
    } else {
        quantized_hidden_sta_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_24_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_24_we0 = grp_quantize_activation_fu_1802_v24_3_3_0_we0.read();
    } else {
        quantized_hidden_sta_24_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_25_address0 = grp_quantize_activation_fu_1802_v24_3_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_25_address0 = grp_linear_forward_no_mu_fu_1330_v78_3_2_0_address0.read();
    } else {
        quantized_hidden_sta_25_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_25_ce0 = grp_quantize_activation_fu_1802_v24_3_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_25_ce0 = grp_linear_forward_no_mu_fu_1330_v78_3_2_0_ce0.read();
    } else {
        quantized_hidden_sta_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_25_we0 = grp_quantize_activation_fu_1802_v24_3_2_0_we0.read();
    } else {
        quantized_hidden_sta_25_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_26_address0 = grp_quantize_activation_fu_1802_v24_3_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_26_address0 = grp_linear_forward_no_mu_fu_1330_v78_3_1_0_address0.read();
    } else {
        quantized_hidden_sta_26_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_26_ce0 = grp_quantize_activation_fu_1802_v24_3_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_26_ce0 = grp_linear_forward_no_mu_fu_1330_v78_3_1_0_ce0.read();
    } else {
        quantized_hidden_sta_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_26_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_26_we0 = grp_quantize_activation_fu_1802_v24_3_1_0_we0.read();
    } else {
        quantized_hidden_sta_26_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_27_address0 = grp_quantize_activation_fu_1802_v24_3_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_27_address0 = grp_linear_forward_no_mu_fu_1330_v78_3_0_0_address0.read();
    } else {
        quantized_hidden_sta_27_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_27_ce0 = grp_quantize_activation_fu_1802_v24_3_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_27_ce0 = grp_linear_forward_no_mu_fu_1330_v78_3_0_0_ce0.read();
    } else {
        quantized_hidden_sta_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_27_we0 = grp_quantize_activation_fu_1802_v24_3_0_0_we0.read();
    } else {
        quantized_hidden_sta_27_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_28_address0 = grp_quantize_activation_fu_1802_v24_23_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_28_address0 = grp_linear_forward_no_mu_fu_1330_v78_23_3_0_address0.read();
    } else {
        quantized_hidden_sta_28_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_28_ce0 = grp_quantize_activation_fu_1802_v24_23_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_28_ce0 = grp_linear_forward_no_mu_fu_1330_v78_23_3_0_ce0.read();
    } else {
        quantized_hidden_sta_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_28_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_28_we0 = grp_quantize_activation_fu_1802_v24_23_3_0_we0.read();
    } else {
        quantized_hidden_sta_28_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_29_address0 = grp_quantize_activation_fu_1802_v24_23_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_29_address0 = grp_linear_forward_no_mu_fu_1330_v78_23_2_0_address0.read();
    } else {
        quantized_hidden_sta_29_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_29_ce0 = grp_quantize_activation_fu_1802_v24_23_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_29_ce0 = grp_linear_forward_no_mu_fu_1330_v78_23_2_0_ce0.read();
    } else {
        quantized_hidden_sta_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_29_we0 = grp_quantize_activation_fu_1802_v24_23_2_0_we0.read();
    } else {
        quantized_hidden_sta_29_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_2_address0 = grp_quantize_activation_fu_1802_v24_9_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_2_address0 = grp_linear_forward_no_mu_fu_1330_v78_9_1_0_address0.read();
    } else {
        quantized_hidden_sta_2_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_2_ce0 = grp_quantize_activation_fu_1802_v24_9_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_2_ce0 = grp_linear_forward_no_mu_fu_1330_v78_9_1_0_ce0.read();
    } else {
        quantized_hidden_sta_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_2_we0 = grp_quantize_activation_fu_1802_v24_9_1_0_we0.read();
    } else {
        quantized_hidden_sta_2_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_30_address0 = grp_quantize_activation_fu_1802_v24_23_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_30_address0 = grp_linear_forward_no_mu_fu_1330_v78_23_1_0_address0.read();
    } else {
        quantized_hidden_sta_30_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_30_ce0 = grp_quantize_activation_fu_1802_v24_23_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_30_ce0 = grp_linear_forward_no_mu_fu_1330_v78_23_1_0_ce0.read();
    } else {
        quantized_hidden_sta_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_30_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_30_we0 = grp_quantize_activation_fu_1802_v24_23_1_0_we0.read();
    } else {
        quantized_hidden_sta_30_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_31_address0 = grp_quantize_activation_fu_1802_v24_23_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_31_address0 = grp_linear_forward_no_mu_fu_1330_v78_23_0_0_address0.read();
    } else {
        quantized_hidden_sta_31_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_31_ce0 = grp_quantize_activation_fu_1802_v24_23_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_31_ce0 = grp_linear_forward_no_mu_fu_1330_v78_23_0_0_ce0.read();
    } else {
        quantized_hidden_sta_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_31_we0 = grp_quantize_activation_fu_1802_v24_23_0_0_we0.read();
    } else {
        quantized_hidden_sta_31_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_32_address0 = grp_quantize_activation_fu_1802_v24_22_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_32_address0 = grp_linear_forward_no_mu_fu_1330_v78_22_3_0_address0.read();
    } else {
        quantized_hidden_sta_32_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_32_ce0 = grp_quantize_activation_fu_1802_v24_22_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_32_ce0 = grp_linear_forward_no_mu_fu_1330_v78_22_3_0_ce0.read();
    } else {
        quantized_hidden_sta_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_32_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_32_we0 = grp_quantize_activation_fu_1802_v24_22_3_0_we0.read();
    } else {
        quantized_hidden_sta_32_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_33_address0 = grp_quantize_activation_fu_1802_v24_22_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_33_address0 = grp_linear_forward_no_mu_fu_1330_v78_22_2_0_address0.read();
    } else {
        quantized_hidden_sta_33_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_33_ce0 = grp_quantize_activation_fu_1802_v24_22_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_33_ce0 = grp_linear_forward_no_mu_fu_1330_v78_22_2_0_ce0.read();
    } else {
        quantized_hidden_sta_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_33_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_33_we0 = grp_quantize_activation_fu_1802_v24_22_2_0_we0.read();
    } else {
        quantized_hidden_sta_33_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_34_address0 = grp_quantize_activation_fu_1802_v24_22_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_34_address0 = grp_linear_forward_no_mu_fu_1330_v78_22_1_0_address0.read();
    } else {
        quantized_hidden_sta_34_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_34_ce0 = grp_quantize_activation_fu_1802_v24_22_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_34_ce0 = grp_linear_forward_no_mu_fu_1330_v78_22_1_0_ce0.read();
    } else {
        quantized_hidden_sta_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_34_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_34_we0 = grp_quantize_activation_fu_1802_v24_22_1_0_we0.read();
    } else {
        quantized_hidden_sta_34_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_35_address0 = grp_quantize_activation_fu_1802_v24_22_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_35_address0 = grp_linear_forward_no_mu_fu_1330_v78_22_0_0_address0.read();
    } else {
        quantized_hidden_sta_35_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_35_ce0 = grp_quantize_activation_fu_1802_v24_22_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_35_ce0 = grp_linear_forward_no_mu_fu_1330_v78_22_0_0_ce0.read();
    } else {
        quantized_hidden_sta_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_35_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_35_we0 = grp_quantize_activation_fu_1802_v24_22_0_0_we0.read();
    } else {
        quantized_hidden_sta_35_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_36_address0 = grp_quantize_activation_fu_1802_v24_21_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_36_address0 = grp_linear_forward_no_mu_fu_1330_v78_21_3_0_address0.read();
    } else {
        quantized_hidden_sta_36_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_36_ce0 = grp_quantize_activation_fu_1802_v24_21_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_36_ce0 = grp_linear_forward_no_mu_fu_1330_v78_21_3_0_ce0.read();
    } else {
        quantized_hidden_sta_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_36_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_36_we0 = grp_quantize_activation_fu_1802_v24_21_3_0_we0.read();
    } else {
        quantized_hidden_sta_36_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_37_address0 = grp_quantize_activation_fu_1802_v24_21_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_37_address0 = grp_linear_forward_no_mu_fu_1330_v78_21_2_0_address0.read();
    } else {
        quantized_hidden_sta_37_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_37_ce0 = grp_quantize_activation_fu_1802_v24_21_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_37_ce0 = grp_linear_forward_no_mu_fu_1330_v78_21_2_0_ce0.read();
    } else {
        quantized_hidden_sta_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_37_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_37_we0 = grp_quantize_activation_fu_1802_v24_21_2_0_we0.read();
    } else {
        quantized_hidden_sta_37_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_38_address0 = grp_quantize_activation_fu_1802_v24_21_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_38_address0 = grp_linear_forward_no_mu_fu_1330_v78_21_1_0_address0.read();
    } else {
        quantized_hidden_sta_38_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_38_ce0 = grp_quantize_activation_fu_1802_v24_21_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_38_ce0 = grp_linear_forward_no_mu_fu_1330_v78_21_1_0_ce0.read();
    } else {
        quantized_hidden_sta_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_38_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_38_we0 = grp_quantize_activation_fu_1802_v24_21_1_0_we0.read();
    } else {
        quantized_hidden_sta_38_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_39_address0 = grp_quantize_activation_fu_1802_v24_21_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_39_address0 = grp_linear_forward_no_mu_fu_1330_v78_21_0_0_address0.read();
    } else {
        quantized_hidden_sta_39_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_39_ce0 = grp_quantize_activation_fu_1802_v24_21_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_39_ce0 = grp_linear_forward_no_mu_fu_1330_v78_21_0_0_ce0.read();
    } else {
        quantized_hidden_sta_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_39_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_39_we0 = grp_quantize_activation_fu_1802_v24_21_0_0_we0.read();
    } else {
        quantized_hidden_sta_39_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_3_address0 = grp_quantize_activation_fu_1802_v24_9_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_3_address0 = grp_linear_forward_no_mu_fu_1330_v78_9_0_0_address0.read();
    } else {
        quantized_hidden_sta_3_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_3_ce0 = grp_quantize_activation_fu_1802_v24_9_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_3_ce0 = grp_linear_forward_no_mu_fu_1330_v78_9_0_0_ce0.read();
    } else {
        quantized_hidden_sta_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_3_we0 = grp_quantize_activation_fu_1802_v24_9_0_0_we0.read();
    } else {
        quantized_hidden_sta_3_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_40_address0 = grp_quantize_activation_fu_1802_v24_20_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_40_address0 = grp_linear_forward_no_mu_fu_1330_v78_20_3_0_address0.read();
    } else {
        quantized_hidden_sta_40_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_40_ce0 = grp_quantize_activation_fu_1802_v24_20_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_40_ce0 = grp_linear_forward_no_mu_fu_1330_v78_20_3_0_ce0.read();
    } else {
        quantized_hidden_sta_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_40_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_40_we0 = grp_quantize_activation_fu_1802_v24_20_3_0_we0.read();
    } else {
        quantized_hidden_sta_40_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_41_address0 = grp_quantize_activation_fu_1802_v24_20_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_41_address0 = grp_linear_forward_no_mu_fu_1330_v78_20_2_0_address0.read();
    } else {
        quantized_hidden_sta_41_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_41_ce0 = grp_quantize_activation_fu_1802_v24_20_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_41_ce0 = grp_linear_forward_no_mu_fu_1330_v78_20_2_0_ce0.read();
    } else {
        quantized_hidden_sta_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_41_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_41_we0 = grp_quantize_activation_fu_1802_v24_20_2_0_we0.read();
    } else {
        quantized_hidden_sta_41_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_42_address0 = grp_quantize_activation_fu_1802_v24_20_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_42_address0 = grp_linear_forward_no_mu_fu_1330_v78_20_1_0_address0.read();
    } else {
        quantized_hidden_sta_42_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_42_ce0 = grp_quantize_activation_fu_1802_v24_20_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_42_ce0 = grp_linear_forward_no_mu_fu_1330_v78_20_1_0_ce0.read();
    } else {
        quantized_hidden_sta_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_42_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_42_we0 = grp_quantize_activation_fu_1802_v24_20_1_0_we0.read();
    } else {
        quantized_hidden_sta_42_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_43_address0 = grp_quantize_activation_fu_1802_v24_20_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_43_address0 = grp_linear_forward_no_mu_fu_1330_v78_20_0_0_address0.read();
    } else {
        quantized_hidden_sta_43_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_43_ce0 = grp_quantize_activation_fu_1802_v24_20_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_43_ce0 = grp_linear_forward_no_mu_fu_1330_v78_20_0_0_ce0.read();
    } else {
        quantized_hidden_sta_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_43_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_43_we0 = grp_quantize_activation_fu_1802_v24_20_0_0_we0.read();
    } else {
        quantized_hidden_sta_43_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_44_address0 = grp_quantize_activation_fu_1802_v24_2_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_44_address0 = grp_linear_forward_no_mu_fu_1330_v78_2_3_0_address0.read();
    } else {
        quantized_hidden_sta_44_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_44_ce0 = grp_quantize_activation_fu_1802_v24_2_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_44_ce0 = grp_linear_forward_no_mu_fu_1330_v78_2_3_0_ce0.read();
    } else {
        quantized_hidden_sta_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_44_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_44_we0 = grp_quantize_activation_fu_1802_v24_2_3_0_we0.read();
    } else {
        quantized_hidden_sta_44_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_45_address0 = grp_quantize_activation_fu_1802_v24_2_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_45_address0 = grp_linear_forward_no_mu_fu_1330_v78_2_2_0_address0.read();
    } else {
        quantized_hidden_sta_45_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_45_ce0 = grp_quantize_activation_fu_1802_v24_2_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_45_ce0 = grp_linear_forward_no_mu_fu_1330_v78_2_2_0_ce0.read();
    } else {
        quantized_hidden_sta_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_45_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_45_we0 = grp_quantize_activation_fu_1802_v24_2_2_0_we0.read();
    } else {
        quantized_hidden_sta_45_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_46_address0 = grp_quantize_activation_fu_1802_v24_2_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_46_address0 = grp_linear_forward_no_mu_fu_1330_v78_2_1_0_address0.read();
    } else {
        quantized_hidden_sta_46_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_46_ce0 = grp_quantize_activation_fu_1802_v24_2_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_46_ce0 = grp_linear_forward_no_mu_fu_1330_v78_2_1_0_ce0.read();
    } else {
        quantized_hidden_sta_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_46_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_46_we0 = grp_quantize_activation_fu_1802_v24_2_1_0_we0.read();
    } else {
        quantized_hidden_sta_46_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_47_address0 = grp_quantize_activation_fu_1802_v24_2_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_47_address0 = grp_linear_forward_no_mu_fu_1330_v78_2_0_0_address0.read();
    } else {
        quantized_hidden_sta_47_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_47_ce0 = grp_quantize_activation_fu_1802_v24_2_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_47_ce0 = grp_linear_forward_no_mu_fu_1330_v78_2_0_0_ce0.read();
    } else {
        quantized_hidden_sta_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_47_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_47_we0 = grp_quantize_activation_fu_1802_v24_2_0_0_we0.read();
    } else {
        quantized_hidden_sta_47_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_48_address0 = grp_quantize_activation_fu_1802_v24_19_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_48_address0 = grp_linear_forward_no_mu_fu_1330_v78_19_3_0_address0.read();
    } else {
        quantized_hidden_sta_48_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_48_ce0 = grp_quantize_activation_fu_1802_v24_19_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_48_ce0 = grp_linear_forward_no_mu_fu_1330_v78_19_3_0_ce0.read();
    } else {
        quantized_hidden_sta_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_48_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_48_we0 = grp_quantize_activation_fu_1802_v24_19_3_0_we0.read();
    } else {
        quantized_hidden_sta_48_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_49_address0 = grp_quantize_activation_fu_1802_v24_19_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_49_address0 = grp_linear_forward_no_mu_fu_1330_v78_19_2_0_address0.read();
    } else {
        quantized_hidden_sta_49_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_49_ce0 = grp_quantize_activation_fu_1802_v24_19_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_49_ce0 = grp_linear_forward_no_mu_fu_1330_v78_19_2_0_ce0.read();
    } else {
        quantized_hidden_sta_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_49_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_49_we0 = grp_quantize_activation_fu_1802_v24_19_2_0_we0.read();
    } else {
        quantized_hidden_sta_49_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_4_address0 = grp_quantize_activation_fu_1802_v24_8_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_4_address0 = grp_linear_forward_no_mu_fu_1330_v78_8_3_0_address0.read();
    } else {
        quantized_hidden_sta_4_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_4_ce0 = grp_quantize_activation_fu_1802_v24_8_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_4_ce0 = grp_linear_forward_no_mu_fu_1330_v78_8_3_0_ce0.read();
    } else {
        quantized_hidden_sta_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_4_we0 = grp_quantize_activation_fu_1802_v24_8_3_0_we0.read();
    } else {
        quantized_hidden_sta_4_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_50_address0 = grp_quantize_activation_fu_1802_v24_19_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_50_address0 = grp_linear_forward_no_mu_fu_1330_v78_19_1_0_address0.read();
    } else {
        quantized_hidden_sta_50_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_50_ce0 = grp_quantize_activation_fu_1802_v24_19_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_50_ce0 = grp_linear_forward_no_mu_fu_1330_v78_19_1_0_ce0.read();
    } else {
        quantized_hidden_sta_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_50_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_50_we0 = grp_quantize_activation_fu_1802_v24_19_1_0_we0.read();
    } else {
        quantized_hidden_sta_50_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_51_address0 = grp_quantize_activation_fu_1802_v24_19_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_51_address0 = grp_linear_forward_no_mu_fu_1330_v78_19_0_0_address0.read();
    } else {
        quantized_hidden_sta_51_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_51_ce0 = grp_quantize_activation_fu_1802_v24_19_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_51_ce0 = grp_linear_forward_no_mu_fu_1330_v78_19_0_0_ce0.read();
    } else {
        quantized_hidden_sta_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_51_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_51_we0 = grp_quantize_activation_fu_1802_v24_19_0_0_we0.read();
    } else {
        quantized_hidden_sta_51_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_52_address0 = grp_quantize_activation_fu_1802_v24_18_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_52_address0 = grp_linear_forward_no_mu_fu_1330_v78_18_3_0_address0.read();
    } else {
        quantized_hidden_sta_52_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_52_ce0 = grp_quantize_activation_fu_1802_v24_18_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_52_ce0 = grp_linear_forward_no_mu_fu_1330_v78_18_3_0_ce0.read();
    } else {
        quantized_hidden_sta_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_52_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_52_we0 = grp_quantize_activation_fu_1802_v24_18_3_0_we0.read();
    } else {
        quantized_hidden_sta_52_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_53_address0 = grp_quantize_activation_fu_1802_v24_18_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_53_address0 = grp_linear_forward_no_mu_fu_1330_v78_18_2_0_address0.read();
    } else {
        quantized_hidden_sta_53_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_53_ce0 = grp_quantize_activation_fu_1802_v24_18_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_53_ce0 = grp_linear_forward_no_mu_fu_1330_v78_18_2_0_ce0.read();
    } else {
        quantized_hidden_sta_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_53_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_53_we0 = grp_quantize_activation_fu_1802_v24_18_2_0_we0.read();
    } else {
        quantized_hidden_sta_53_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_54_address0 = grp_quantize_activation_fu_1802_v24_18_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_54_address0 = grp_linear_forward_no_mu_fu_1330_v78_18_1_0_address0.read();
    } else {
        quantized_hidden_sta_54_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_54_ce0 = grp_quantize_activation_fu_1802_v24_18_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_54_ce0 = grp_linear_forward_no_mu_fu_1330_v78_18_1_0_ce0.read();
    } else {
        quantized_hidden_sta_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_54_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_54_we0 = grp_quantize_activation_fu_1802_v24_18_1_0_we0.read();
    } else {
        quantized_hidden_sta_54_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_55_address0 = grp_quantize_activation_fu_1802_v24_18_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_55_address0 = grp_linear_forward_no_mu_fu_1330_v78_18_0_0_address0.read();
    } else {
        quantized_hidden_sta_55_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_55_ce0 = grp_quantize_activation_fu_1802_v24_18_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_55_ce0 = grp_linear_forward_no_mu_fu_1330_v78_18_0_0_ce0.read();
    } else {
        quantized_hidden_sta_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_55_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_55_we0 = grp_quantize_activation_fu_1802_v24_18_0_0_we0.read();
    } else {
        quantized_hidden_sta_55_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_56_address0 = grp_quantize_activation_fu_1802_v24_17_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_56_address0 = grp_linear_forward_no_mu_fu_1330_v78_17_3_0_address0.read();
    } else {
        quantized_hidden_sta_56_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_56_ce0 = grp_quantize_activation_fu_1802_v24_17_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_56_ce0 = grp_linear_forward_no_mu_fu_1330_v78_17_3_0_ce0.read();
    } else {
        quantized_hidden_sta_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_56_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_56_we0 = grp_quantize_activation_fu_1802_v24_17_3_0_we0.read();
    } else {
        quantized_hidden_sta_56_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_57_address0 = grp_quantize_activation_fu_1802_v24_17_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_57_address0 = grp_linear_forward_no_mu_fu_1330_v78_17_2_0_address0.read();
    } else {
        quantized_hidden_sta_57_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_57_ce0 = grp_quantize_activation_fu_1802_v24_17_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_57_ce0 = grp_linear_forward_no_mu_fu_1330_v78_17_2_0_ce0.read();
    } else {
        quantized_hidden_sta_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_57_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_57_we0 = grp_quantize_activation_fu_1802_v24_17_2_0_we0.read();
    } else {
        quantized_hidden_sta_57_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_58_address0 = grp_quantize_activation_fu_1802_v24_17_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_58_address0 = grp_linear_forward_no_mu_fu_1330_v78_17_1_0_address0.read();
    } else {
        quantized_hidden_sta_58_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_58_ce0 = grp_quantize_activation_fu_1802_v24_17_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_58_ce0 = grp_linear_forward_no_mu_fu_1330_v78_17_1_0_ce0.read();
    } else {
        quantized_hidden_sta_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_58_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_58_we0 = grp_quantize_activation_fu_1802_v24_17_1_0_we0.read();
    } else {
        quantized_hidden_sta_58_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_59_address0 = grp_quantize_activation_fu_1802_v24_17_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_59_address0 = grp_linear_forward_no_mu_fu_1330_v78_17_0_0_address0.read();
    } else {
        quantized_hidden_sta_59_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_59_ce0 = grp_quantize_activation_fu_1802_v24_17_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_59_ce0 = grp_linear_forward_no_mu_fu_1330_v78_17_0_0_ce0.read();
    } else {
        quantized_hidden_sta_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_59_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_59_we0 = grp_quantize_activation_fu_1802_v24_17_0_0_we0.read();
    } else {
        quantized_hidden_sta_59_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_5_address0 = grp_quantize_activation_fu_1802_v24_8_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_5_address0 = grp_linear_forward_no_mu_fu_1330_v78_8_2_0_address0.read();
    } else {
        quantized_hidden_sta_5_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_5_ce0 = grp_quantize_activation_fu_1802_v24_8_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_5_ce0 = grp_linear_forward_no_mu_fu_1330_v78_8_2_0_ce0.read();
    } else {
        quantized_hidden_sta_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_5_we0 = grp_quantize_activation_fu_1802_v24_8_2_0_we0.read();
    } else {
        quantized_hidden_sta_5_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_60_address0 = grp_quantize_activation_fu_1802_v24_16_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_60_address0 = grp_linear_forward_no_mu_fu_1330_v78_16_3_0_address0.read();
    } else {
        quantized_hidden_sta_60_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_60_ce0 = grp_quantize_activation_fu_1802_v24_16_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_60_ce0 = grp_linear_forward_no_mu_fu_1330_v78_16_3_0_ce0.read();
    } else {
        quantized_hidden_sta_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_60_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_60_we0 = grp_quantize_activation_fu_1802_v24_16_3_0_we0.read();
    } else {
        quantized_hidden_sta_60_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_61_address0 = grp_quantize_activation_fu_1802_v24_16_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_61_address0 = grp_linear_forward_no_mu_fu_1330_v78_16_2_0_address0.read();
    } else {
        quantized_hidden_sta_61_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_61_ce0 = grp_quantize_activation_fu_1802_v24_16_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_61_ce0 = grp_linear_forward_no_mu_fu_1330_v78_16_2_0_ce0.read();
    } else {
        quantized_hidden_sta_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_61_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_61_we0 = grp_quantize_activation_fu_1802_v24_16_2_0_we0.read();
    } else {
        quantized_hidden_sta_61_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_62_address0 = grp_quantize_activation_fu_1802_v24_16_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_62_address0 = grp_linear_forward_no_mu_fu_1330_v78_16_1_0_address0.read();
    } else {
        quantized_hidden_sta_62_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_62_ce0 = grp_quantize_activation_fu_1802_v24_16_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_62_ce0 = grp_linear_forward_no_mu_fu_1330_v78_16_1_0_ce0.read();
    } else {
        quantized_hidden_sta_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_62_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_62_we0 = grp_quantize_activation_fu_1802_v24_16_1_0_we0.read();
    } else {
        quantized_hidden_sta_62_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_63_address0 = grp_quantize_activation_fu_1802_v24_16_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_63_address0 = grp_linear_forward_no_mu_fu_1330_v78_16_0_0_address0.read();
    } else {
        quantized_hidden_sta_63_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_63_ce0 = grp_quantize_activation_fu_1802_v24_16_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_63_ce0 = grp_linear_forward_no_mu_fu_1330_v78_16_0_0_ce0.read();
    } else {
        quantized_hidden_sta_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_63_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_63_we0 = grp_quantize_activation_fu_1802_v24_16_0_0_we0.read();
    } else {
        quantized_hidden_sta_63_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_64_address0 = grp_quantize_activation_fu_1802_v24_15_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_64_address0 = grp_linear_forward_no_mu_fu_1330_v78_15_3_0_address0.read();
    } else {
        quantized_hidden_sta_64_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_64_ce0 = grp_quantize_activation_fu_1802_v24_15_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_64_ce0 = grp_linear_forward_no_mu_fu_1330_v78_15_3_0_ce0.read();
    } else {
        quantized_hidden_sta_64_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_64_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_64_we0 = grp_quantize_activation_fu_1802_v24_15_3_0_we0.read();
    } else {
        quantized_hidden_sta_64_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_65_address0 = grp_quantize_activation_fu_1802_v24_15_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_65_address0 = grp_linear_forward_no_mu_fu_1330_v78_15_2_0_address0.read();
    } else {
        quantized_hidden_sta_65_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_65_ce0 = grp_quantize_activation_fu_1802_v24_15_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_65_ce0 = grp_linear_forward_no_mu_fu_1330_v78_15_2_0_ce0.read();
    } else {
        quantized_hidden_sta_65_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_65_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_65_we0 = grp_quantize_activation_fu_1802_v24_15_2_0_we0.read();
    } else {
        quantized_hidden_sta_65_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_66_address0 = grp_quantize_activation_fu_1802_v24_15_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_66_address0 = grp_linear_forward_no_mu_fu_1330_v78_15_1_0_address0.read();
    } else {
        quantized_hidden_sta_66_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_66_ce0 = grp_quantize_activation_fu_1802_v24_15_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_66_ce0 = grp_linear_forward_no_mu_fu_1330_v78_15_1_0_ce0.read();
    } else {
        quantized_hidden_sta_66_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_66_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_66_we0 = grp_quantize_activation_fu_1802_v24_15_1_0_we0.read();
    } else {
        quantized_hidden_sta_66_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_67_address0 = grp_quantize_activation_fu_1802_v24_15_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_67_address0 = grp_linear_forward_no_mu_fu_1330_v78_15_0_0_address0.read();
    } else {
        quantized_hidden_sta_67_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_67_ce0 = grp_quantize_activation_fu_1802_v24_15_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_67_ce0 = grp_linear_forward_no_mu_fu_1330_v78_15_0_0_ce0.read();
    } else {
        quantized_hidden_sta_67_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_67_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_67_we0 = grp_quantize_activation_fu_1802_v24_15_0_0_we0.read();
    } else {
        quantized_hidden_sta_67_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_68_address0 = grp_quantize_activation_fu_1802_v24_14_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_68_address0 = grp_linear_forward_no_mu_fu_1330_v78_14_3_0_address0.read();
    } else {
        quantized_hidden_sta_68_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_68_ce0 = grp_quantize_activation_fu_1802_v24_14_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_68_ce0 = grp_linear_forward_no_mu_fu_1330_v78_14_3_0_ce0.read();
    } else {
        quantized_hidden_sta_68_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_68_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_68_we0 = grp_quantize_activation_fu_1802_v24_14_3_0_we0.read();
    } else {
        quantized_hidden_sta_68_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_69_address0 = grp_quantize_activation_fu_1802_v24_14_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_69_address0 = grp_linear_forward_no_mu_fu_1330_v78_14_2_0_address0.read();
    } else {
        quantized_hidden_sta_69_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_69_ce0 = grp_quantize_activation_fu_1802_v24_14_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_69_ce0 = grp_linear_forward_no_mu_fu_1330_v78_14_2_0_ce0.read();
    } else {
        quantized_hidden_sta_69_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_69_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_69_we0 = grp_quantize_activation_fu_1802_v24_14_2_0_we0.read();
    } else {
        quantized_hidden_sta_69_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_6_address0 = grp_quantize_activation_fu_1802_v24_8_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_6_address0 = grp_linear_forward_no_mu_fu_1330_v78_8_1_0_address0.read();
    } else {
        quantized_hidden_sta_6_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_6_ce0 = grp_quantize_activation_fu_1802_v24_8_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_6_ce0 = grp_linear_forward_no_mu_fu_1330_v78_8_1_0_ce0.read();
    } else {
        quantized_hidden_sta_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_6_we0 = grp_quantize_activation_fu_1802_v24_8_1_0_we0.read();
    } else {
        quantized_hidden_sta_6_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_70_address0 = grp_quantize_activation_fu_1802_v24_14_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_70_address0 = grp_linear_forward_no_mu_fu_1330_v78_14_1_0_address0.read();
    } else {
        quantized_hidden_sta_70_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_70_ce0 = grp_quantize_activation_fu_1802_v24_14_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_70_ce0 = grp_linear_forward_no_mu_fu_1330_v78_14_1_0_ce0.read();
    } else {
        quantized_hidden_sta_70_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_70_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_70_we0 = grp_quantize_activation_fu_1802_v24_14_1_0_we0.read();
    } else {
        quantized_hidden_sta_70_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_71_address0 = grp_quantize_activation_fu_1802_v24_14_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_71_address0 = grp_linear_forward_no_mu_fu_1330_v78_14_0_0_address0.read();
    } else {
        quantized_hidden_sta_71_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_71_ce0 = grp_quantize_activation_fu_1802_v24_14_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_71_ce0 = grp_linear_forward_no_mu_fu_1330_v78_14_0_0_ce0.read();
    } else {
        quantized_hidden_sta_71_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_71_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_71_we0 = grp_quantize_activation_fu_1802_v24_14_0_0_we0.read();
    } else {
        quantized_hidden_sta_71_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_72_address0 = grp_quantize_activation_fu_1802_v24_13_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_72_address0 = grp_linear_forward_no_mu_fu_1330_v78_13_3_0_address0.read();
    } else {
        quantized_hidden_sta_72_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_72_ce0 = grp_quantize_activation_fu_1802_v24_13_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_72_ce0 = grp_linear_forward_no_mu_fu_1330_v78_13_3_0_ce0.read();
    } else {
        quantized_hidden_sta_72_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_72_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_72_we0 = grp_quantize_activation_fu_1802_v24_13_3_0_we0.read();
    } else {
        quantized_hidden_sta_72_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_73_address0 = grp_quantize_activation_fu_1802_v24_13_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_73_address0 = grp_linear_forward_no_mu_fu_1330_v78_13_2_0_address0.read();
    } else {
        quantized_hidden_sta_73_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_73_ce0 = grp_quantize_activation_fu_1802_v24_13_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_73_ce0 = grp_linear_forward_no_mu_fu_1330_v78_13_2_0_ce0.read();
    } else {
        quantized_hidden_sta_73_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_73_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_73_we0 = grp_quantize_activation_fu_1802_v24_13_2_0_we0.read();
    } else {
        quantized_hidden_sta_73_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_74_address0 = grp_quantize_activation_fu_1802_v24_13_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_74_address0 = grp_linear_forward_no_mu_fu_1330_v78_13_1_0_address0.read();
    } else {
        quantized_hidden_sta_74_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_74_ce0 = grp_quantize_activation_fu_1802_v24_13_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_74_ce0 = grp_linear_forward_no_mu_fu_1330_v78_13_1_0_ce0.read();
    } else {
        quantized_hidden_sta_74_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_74_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_74_we0 = grp_quantize_activation_fu_1802_v24_13_1_0_we0.read();
    } else {
        quantized_hidden_sta_74_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_75_address0 = grp_quantize_activation_fu_1802_v24_13_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_75_address0 = grp_linear_forward_no_mu_fu_1330_v78_13_0_0_address0.read();
    } else {
        quantized_hidden_sta_75_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_75_ce0 = grp_quantize_activation_fu_1802_v24_13_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_75_ce0 = grp_linear_forward_no_mu_fu_1330_v78_13_0_0_ce0.read();
    } else {
        quantized_hidden_sta_75_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_75_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_75_we0 = grp_quantize_activation_fu_1802_v24_13_0_0_we0.read();
    } else {
        quantized_hidden_sta_75_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_76_address0 = grp_quantize_activation_fu_1802_v24_12_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_76_address0 = grp_linear_forward_no_mu_fu_1330_v78_12_3_0_address0.read();
    } else {
        quantized_hidden_sta_76_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_76_ce0 = grp_quantize_activation_fu_1802_v24_12_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_76_ce0 = grp_linear_forward_no_mu_fu_1330_v78_12_3_0_ce0.read();
    } else {
        quantized_hidden_sta_76_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_76_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_76_we0 = grp_quantize_activation_fu_1802_v24_12_3_0_we0.read();
    } else {
        quantized_hidden_sta_76_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_77_address0 = grp_quantize_activation_fu_1802_v24_12_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_77_address0 = grp_linear_forward_no_mu_fu_1330_v78_12_2_0_address0.read();
    } else {
        quantized_hidden_sta_77_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_77_ce0 = grp_quantize_activation_fu_1802_v24_12_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_77_ce0 = grp_linear_forward_no_mu_fu_1330_v78_12_2_0_ce0.read();
    } else {
        quantized_hidden_sta_77_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_77_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_77_we0 = grp_quantize_activation_fu_1802_v24_12_2_0_we0.read();
    } else {
        quantized_hidden_sta_77_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_78_address0 = grp_quantize_activation_fu_1802_v24_12_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_78_address0 = grp_linear_forward_no_mu_fu_1330_v78_12_1_0_address0.read();
    } else {
        quantized_hidden_sta_78_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_78_ce0 = grp_quantize_activation_fu_1802_v24_12_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_78_ce0 = grp_linear_forward_no_mu_fu_1330_v78_12_1_0_ce0.read();
    } else {
        quantized_hidden_sta_78_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_78_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_78_we0 = grp_quantize_activation_fu_1802_v24_12_1_0_we0.read();
    } else {
        quantized_hidden_sta_78_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_79_address0 = grp_quantize_activation_fu_1802_v24_12_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_79_address0 = grp_linear_forward_no_mu_fu_1330_v78_12_0_0_address0.read();
    } else {
        quantized_hidden_sta_79_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_79_ce0 = grp_quantize_activation_fu_1802_v24_12_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_79_ce0 = grp_linear_forward_no_mu_fu_1330_v78_12_0_0_ce0.read();
    } else {
        quantized_hidden_sta_79_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_79_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_79_we0 = grp_quantize_activation_fu_1802_v24_12_0_0_we0.read();
    } else {
        quantized_hidden_sta_79_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_7_address0 = grp_quantize_activation_fu_1802_v24_8_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_7_address0 = grp_linear_forward_no_mu_fu_1330_v78_8_0_0_address0.read();
    } else {
        quantized_hidden_sta_7_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_7_ce0 = grp_quantize_activation_fu_1802_v24_8_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_7_ce0 = grp_linear_forward_no_mu_fu_1330_v78_8_0_0_ce0.read();
    } else {
        quantized_hidden_sta_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_7_we0 = grp_quantize_activation_fu_1802_v24_8_0_0_we0.read();
    } else {
        quantized_hidden_sta_7_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_80_address0 = grp_quantize_activation_fu_1802_v24_11_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_80_address0 = grp_linear_forward_no_mu_fu_1330_v78_11_3_0_address0.read();
    } else {
        quantized_hidden_sta_80_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_80_ce0 = grp_quantize_activation_fu_1802_v24_11_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_80_ce0 = grp_linear_forward_no_mu_fu_1330_v78_11_3_0_ce0.read();
    } else {
        quantized_hidden_sta_80_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_80_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_80_we0 = grp_quantize_activation_fu_1802_v24_11_3_0_we0.read();
    } else {
        quantized_hidden_sta_80_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_81_address0 = grp_quantize_activation_fu_1802_v24_11_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_81_address0 = grp_linear_forward_no_mu_fu_1330_v78_11_2_0_address0.read();
    } else {
        quantized_hidden_sta_81_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_81_ce0 = grp_quantize_activation_fu_1802_v24_11_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_81_ce0 = grp_linear_forward_no_mu_fu_1330_v78_11_2_0_ce0.read();
    } else {
        quantized_hidden_sta_81_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_81_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_81_we0 = grp_quantize_activation_fu_1802_v24_11_2_0_we0.read();
    } else {
        quantized_hidden_sta_81_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_82_address0 = grp_quantize_activation_fu_1802_v24_11_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_82_address0 = grp_linear_forward_no_mu_fu_1330_v78_11_1_0_address0.read();
    } else {
        quantized_hidden_sta_82_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_82_ce0 = grp_quantize_activation_fu_1802_v24_11_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_82_ce0 = grp_linear_forward_no_mu_fu_1330_v78_11_1_0_ce0.read();
    } else {
        quantized_hidden_sta_82_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_82_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_82_we0 = grp_quantize_activation_fu_1802_v24_11_1_0_we0.read();
    } else {
        quantized_hidden_sta_82_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_83_address0 = grp_quantize_activation_fu_1802_v24_11_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_83_address0 = grp_linear_forward_no_mu_fu_1330_v78_11_0_0_address0.read();
    } else {
        quantized_hidden_sta_83_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_83_ce0 = grp_quantize_activation_fu_1802_v24_11_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_83_ce0 = grp_linear_forward_no_mu_fu_1330_v78_11_0_0_ce0.read();
    } else {
        quantized_hidden_sta_83_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_83_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_83_we0 = grp_quantize_activation_fu_1802_v24_11_0_0_we0.read();
    } else {
        quantized_hidden_sta_83_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_84_address0 = grp_quantize_activation_fu_1802_v24_10_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_84_address0 = grp_linear_forward_no_mu_fu_1330_v78_10_3_0_address0.read();
    } else {
        quantized_hidden_sta_84_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_84_ce0 = grp_quantize_activation_fu_1802_v24_10_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_84_ce0 = grp_linear_forward_no_mu_fu_1330_v78_10_3_0_ce0.read();
    } else {
        quantized_hidden_sta_84_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_84_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_84_we0 = grp_quantize_activation_fu_1802_v24_10_3_0_we0.read();
    } else {
        quantized_hidden_sta_84_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_85_address0 = grp_quantize_activation_fu_1802_v24_10_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_85_address0 = grp_linear_forward_no_mu_fu_1330_v78_10_2_0_address0.read();
    } else {
        quantized_hidden_sta_85_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_85_ce0 = grp_quantize_activation_fu_1802_v24_10_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_85_ce0 = grp_linear_forward_no_mu_fu_1330_v78_10_2_0_ce0.read();
    } else {
        quantized_hidden_sta_85_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_85_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_85_we0 = grp_quantize_activation_fu_1802_v24_10_2_0_we0.read();
    } else {
        quantized_hidden_sta_85_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_86_address0 = grp_quantize_activation_fu_1802_v24_10_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_86_address0 = grp_linear_forward_no_mu_fu_1330_v78_10_1_0_address0.read();
    } else {
        quantized_hidden_sta_86_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_86_ce0 = grp_quantize_activation_fu_1802_v24_10_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_86_ce0 = grp_linear_forward_no_mu_fu_1330_v78_10_1_0_ce0.read();
    } else {
        quantized_hidden_sta_86_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_86_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_86_we0 = grp_quantize_activation_fu_1802_v24_10_1_0_we0.read();
    } else {
        quantized_hidden_sta_86_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_87_address0 = grp_quantize_activation_fu_1802_v24_10_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_87_address0 = grp_linear_forward_no_mu_fu_1330_v78_10_0_0_address0.read();
    } else {
        quantized_hidden_sta_87_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_87_ce0 = grp_quantize_activation_fu_1802_v24_10_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_87_ce0 = grp_linear_forward_no_mu_fu_1330_v78_10_0_0_ce0.read();
    } else {
        quantized_hidden_sta_87_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_87_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_87_we0 = grp_quantize_activation_fu_1802_v24_10_0_0_we0.read();
    } else {
        quantized_hidden_sta_87_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_88_address0 = grp_quantize_activation_fu_1802_v24_1_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_88_address0 = grp_linear_forward_no_mu_fu_1330_v78_1_3_0_address0.read();
    } else {
        quantized_hidden_sta_88_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_88_ce0 = grp_quantize_activation_fu_1802_v24_1_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_88_ce0 = grp_linear_forward_no_mu_fu_1330_v78_1_3_0_ce0.read();
    } else {
        quantized_hidden_sta_88_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_88_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_88_we0 = grp_quantize_activation_fu_1802_v24_1_3_0_we0.read();
    } else {
        quantized_hidden_sta_88_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_89_address0 = grp_quantize_activation_fu_1802_v24_1_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_89_address0 = grp_linear_forward_no_mu_fu_1330_v78_1_2_0_address0.read();
    } else {
        quantized_hidden_sta_89_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_89_ce0 = grp_quantize_activation_fu_1802_v24_1_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_89_ce0 = grp_linear_forward_no_mu_fu_1330_v78_1_2_0_ce0.read();
    } else {
        quantized_hidden_sta_89_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_89_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_89_we0 = grp_quantize_activation_fu_1802_v24_1_2_0_we0.read();
    } else {
        quantized_hidden_sta_89_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_8_address0 = grp_quantize_activation_fu_1802_v24_7_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_8_address0 = grp_linear_forward_no_mu_fu_1330_v78_7_3_0_address0.read();
    } else {
        quantized_hidden_sta_8_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_8_ce0 = grp_quantize_activation_fu_1802_v24_7_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_8_ce0 = grp_linear_forward_no_mu_fu_1330_v78_7_3_0_ce0.read();
    } else {
        quantized_hidden_sta_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_8_we0 = grp_quantize_activation_fu_1802_v24_7_3_0_we0.read();
    } else {
        quantized_hidden_sta_8_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_90_address0 = grp_quantize_activation_fu_1802_v24_1_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_90_address0 = grp_linear_forward_no_mu_fu_1330_v78_1_1_0_address0.read();
    } else {
        quantized_hidden_sta_90_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_90_ce0 = grp_quantize_activation_fu_1802_v24_1_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_90_ce0 = grp_linear_forward_no_mu_fu_1330_v78_1_1_0_ce0.read();
    } else {
        quantized_hidden_sta_90_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_90_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_90_we0 = grp_quantize_activation_fu_1802_v24_1_1_0_we0.read();
    } else {
        quantized_hidden_sta_90_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_91_address0 = grp_quantize_activation_fu_1802_v24_1_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_91_address0 = grp_linear_forward_no_mu_fu_1330_v78_1_0_0_address0.read();
    } else {
        quantized_hidden_sta_91_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_91_ce0 = grp_quantize_activation_fu_1802_v24_1_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_91_ce0 = grp_linear_forward_no_mu_fu_1330_v78_1_0_0_ce0.read();
    } else {
        quantized_hidden_sta_91_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_91_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_91_we0 = grp_quantize_activation_fu_1802_v24_1_0_0_we0.read();
    } else {
        quantized_hidden_sta_91_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_92_address0 = grp_quantize_activation_fu_1802_v24_0_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_92_address0 = grp_linear_forward_no_mu_fu_1330_v78_0_3_0_address0.read();
    } else {
        quantized_hidden_sta_92_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_92_ce0 = grp_quantize_activation_fu_1802_v24_0_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_92_ce0 = grp_linear_forward_no_mu_fu_1330_v78_0_3_0_ce0.read();
    } else {
        quantized_hidden_sta_92_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_92_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_92_we0 = grp_quantize_activation_fu_1802_v24_0_3_0_we0.read();
    } else {
        quantized_hidden_sta_92_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_93_address0 = grp_quantize_activation_fu_1802_v24_0_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_93_address0 = grp_linear_forward_no_mu_fu_1330_v78_0_2_0_address0.read();
    } else {
        quantized_hidden_sta_93_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_93_ce0 = grp_quantize_activation_fu_1802_v24_0_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_93_ce0 = grp_linear_forward_no_mu_fu_1330_v78_0_2_0_ce0.read();
    } else {
        quantized_hidden_sta_93_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_93_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_93_we0 = grp_quantize_activation_fu_1802_v24_0_2_0_we0.read();
    } else {
        quantized_hidden_sta_93_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_94_address0 = grp_quantize_activation_fu_1802_v24_0_1_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_94_address0 = grp_linear_forward_no_mu_fu_1330_v78_0_1_0_address0.read();
    } else {
        quantized_hidden_sta_94_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_94_ce0 = grp_quantize_activation_fu_1802_v24_0_1_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_94_ce0 = grp_linear_forward_no_mu_fu_1330_v78_0_1_0_ce0.read();
    } else {
        quantized_hidden_sta_94_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_94_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_94_we0 = grp_quantize_activation_fu_1802_v24_0_1_0_we0.read();
    } else {
        quantized_hidden_sta_94_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_95_address0 = grp_quantize_activation_fu_1802_v24_0_0_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_95_address0 = grp_linear_forward_no_mu_fu_1330_v78_0_0_0_address0.read();
    } else {
        quantized_hidden_sta_95_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_95_ce0 = grp_quantize_activation_fu_1802_v24_0_0_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_95_ce0 = grp_linear_forward_no_mu_fu_1330_v78_0_0_0_ce0.read();
    } else {
        quantized_hidden_sta_95_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_95_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_95_we0 = grp_quantize_activation_fu_1802_v24_0_0_0_we0.read();
    } else {
        quantized_hidden_sta_95_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_9_address0 = grp_quantize_activation_fu_1802_v24_7_2_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_9_address0 = grp_linear_forward_no_mu_fu_1330_v78_7_2_0_address0.read();
    } else {
        quantized_hidden_sta_9_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_9_ce0 = grp_quantize_activation_fu_1802_v24_7_2_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_9_ce0 = grp_linear_forward_no_mu_fu_1330_v78_7_2_0_ce0.read();
    } else {
        quantized_hidden_sta_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_9_we0 = grp_quantize_activation_fu_1802_v24_7_2_0_we0.read();
    } else {
        quantized_hidden_sta_9_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_address0 = grp_quantize_activation_fu_1802_v24_9_3_0_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_address0 = grp_linear_forward_no_mu_fu_1330_v78_9_3_0_address0.read();
    } else {
        quantized_hidden_sta_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_quantized_hidden_sta_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_ce0 = grp_quantize_activation_fu_1802_v24_9_3_0_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
        quantized_hidden_sta_ce0 = grp_linear_forward_no_mu_fu_1330_v78_9_3_0_ce0.read();
    } else {
        quantized_hidden_sta_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        quantized_hidden_sta_we0 = grp_quantize_activation_fu_1802_v24_9_3_0_we0.read();
    } else {
        quantized_hidden_sta_we0 = ap_const_logic_0;
    }
}

void attention::thread_rms_attn_output_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln646_fu_3049_p2.read()))) {
        rms_attn_output_0_V_address0 =  (sc_lv<11>) (zext_ln647_fu_3061_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        rms_attn_output_0_V_address0 = grp_quantize_activation_fu_1802_v22_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        rms_attn_output_0_V_address0 = grp_rms_norm_fu_1746_v3_0_V_address0.read();
    } else {
        rms_attn_output_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_rms_attn_output_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln646_fu_3049_p2.read()))) {
        rms_attn_output_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        rms_attn_output_0_V_ce0 = grp_quantize_activation_fu_1802_v22_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        rms_attn_output_0_V_ce0 = grp_rms_norm_fu_1746_v3_0_V_ce0.read();
    } else {
        rms_attn_output_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_rms_attn_output_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln646_fu_3049_p2.read()))) {
        rms_attn_output_0_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        rms_attn_output_0_V_d0 = grp_rms_norm_fu_1746_v3_0_V_d0.read();
    } else {
        rms_attn_output_0_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_rms_attn_output_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln646_fu_3049_p2.read()))) {
        rms_attn_output_0_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        rms_attn_output_0_V_we0 = grp_rms_norm_fu_1746_v3_0_V_we0.read();
    } else {
        rms_attn_output_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_rms_hidden_states_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln463_fu_2155_p2.read()))) {
        rms_hidden_states_0_address0 =  (sc_lv<11>) (zext_ln464_fu_2167_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        rms_hidden_states_0_address0 = grp_quantize_activation_fu_1802_v22_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rms_hidden_states_0_address0 = grp_rms_norm_fu_1746_v3_0_V_address0.read();
    } else {
        rms_hidden_states_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_rms_hidden_states_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln463_fu_2155_p2.read()))) {
        rms_hidden_states_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        rms_hidden_states_0_ce0 = grp_quantize_activation_fu_1802_v22_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rms_hidden_states_0_ce0 = grp_rms_norm_fu_1746_v3_0_V_ce0.read();
    } else {
        rms_hidden_states_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_rms_hidden_states_0_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln463_fu_2155_p2.read()))) {
        rms_hidden_states_0_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rms_hidden_states_0_d0 = grp_rms_norm_fu_1746_v3_0_V_d0.read();
    } else {
        rms_hidden_states_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_rms_hidden_states_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln463_fu_2155_p2.read()))) {
        rms_hidden_states_0_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        rms_hidden_states_0_we0 = grp_rms_norm_fu_1746_v3_0_V_we0.read();
    } else {
        rms_hidden_states_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_select_ln1148_2_fu_2785_p3() {
    select_ln1148_2_fu_2785_p3 = (!tmp_168_reg_3297.read()[0].is_01())? sc_lv<32>(): ((tmp_168_reg_3297.read()[0].to_bool())? sub_ln703_fu_2776_p2.read(): sext_ln703_65_fu_2782_p1.read());
}

void attention::thread_select_ln1148_fu_2767_p3() {
    select_ln1148_fu_2767_p3 = (!tmp_168_reg_3297.read()[0].is_01())? sc_lv<29>(): ((tmp_168_reg_3297.read()[0].to_bool())? tmp_169_fu_2757_p4.read(): tmp_170_reg_3313.read());
}

void attention::thread_sext_ln203_2_fu_2393_p1() {
    sext_ln203_2_fu_2393_p1 = esl_sext<10,9>(sub_ln203_4_fu_2387_p2.read());
}

void attention::thread_sext_ln203_3_fu_2346_p1() {
    sext_ln203_3_fu_2346_p1 = esl_sext<64,12>(add_ln203_6_fu_2341_p2.read());
}

void attention::thread_sext_ln203_4_fu_2512_p1() {
    sext_ln203_4_fu_2512_p1 = esl_sext<10,9>(sub_ln203_5_fu_2506_p2.read());
}

void attention::thread_sext_ln203_5_fu_2648_p1() {
    sext_ln203_5_fu_2648_p1 = esl_sext<64,8>(add_ln203_10_fu_2643_p2.read());
}

void attention::thread_sext_ln203_6_fu_2852_p1() {
    sext_ln203_6_fu_2852_p1 = esl_sext<64,8>(add_ln203_12_fu_2847_p2.read());
}

void attention::thread_sext_ln203_7_fu_2916_p1() {
    sext_ln203_7_fu_2916_p1 = esl_sext<64,12>(add_ln203_13_fu_2911_p2.read());
}

void attention::thread_sext_ln203_fu_2282_p1() {
    sext_ln203_fu_2282_p1 = esl_sext<64,12>(add_ln203_fu_2277_p2.read());
}

void attention::thread_sext_ln588_fu_2712_p1() {
    sext_ln588_fu_2712_p1 = esl_sext<64,8>(add_ln588_fu_2707_p2.read());
}

void attention::thread_sext_ln639_fu_3031_p1() {
    sext_ln639_fu_3031_p1 = esl_sext<64,12>(add_ln639_fu_3026_p2.read());
}

void attention::thread_sext_ln640_fu_3041_p1() {
    sext_ln640_fu_3041_p1 = esl_sext<32,12>(add_ln640_reg_3405.read());
}

void attention::thread_sext_ln703_65_fu_2782_p1() {
    sext_ln703_65_fu_2782_p1 = esl_sext<32,29>(select_ln1148_reg_3318.read());
}

void attention::thread_sext_ln703_fu_2773_p1() {
    sext_ln703_fu_2773_p1 = esl_sext<32,29>(select_ln1148_reg_3318.read());
}

void attention::thread_shl_ln3_fu_2980_p3() {
    shl_ln3_fu_2980_p3 = esl_concat<4,7>(trunc_ln640_fu_2976_p1.read(), ap_const_lv7_0);
}

void attention::thread_shl_ln640_1_fu_2992_p3() {
    shl_ln640_1_fu_2992_p3 = esl_concat<4,5>(trunc_ln640_fu_2976_p1.read(), ap_const_lv5_0);
}

void attention::thread_shl_ln_fu_2725_p3() {
    shl_ln_fu_2725_p3 = esl_concat<32,12>(attn_weights_0_V_lo_reg_3292.read(), ap_const_lv12_0);
}

void attention::thread_softmax_attn_weights_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        softmax_attn_weights_address0 =  (sc_lv<7>) (sext_ln203_6_fu_2852_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        softmax_attn_weights_address0 = grp_GEMM_3D_float2_fu_2127_v244_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        softmax_attn_weights_address0 = grp_softmax_fu_1776_v218_0_V_address0.read();
    } else {
        softmax_attn_weights_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_softmax_attn_weights_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        softmax_attn_weights_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        softmax_attn_weights_ce0 = grp_GEMM_3D_float2_fu_2127_v244_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        softmax_attn_weights_ce0 = grp_softmax_fu_1776_v218_0_V_ce0.read();
    } else {
        softmax_attn_weights_ce0 = ap_const_logic_0;
    }
}

void attention::thread_softmax_attn_weights_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        softmax_attn_weights_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        softmax_attn_weights_d0 = grp_softmax_fu_1776_v218_0_V_d0.read();
    } else {
        softmax_attn_weights_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_softmax_attn_weights_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln615_fu_2831_p2.read()))) {
        softmax_attn_weights_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        softmax_attn_weights_we0 = grp_softmax_fu_1776_v218_0_V_we0.read();
    } else {
        softmax_attn_weights_we0 = ap_const_logic_0;
    }
}

void attention::thread_sub_ln1148_fu_2752_p2() {
    sub_ln1148_fu_2752_p2 = (!ap_const_lv89_0.is_01() || !mul_ln1148_reg_3308.read().is_01())? sc_lv<89>(): (sc_biguint<89>(ap_const_lv89_0) - sc_biguint<89>(mul_ln1148_reg_3308.read()));
}

void attention::thread_sub_ln203_10_fu_2889_p2() {
    sub_ln203_10_fu_2889_p2 = (!tmp_37_fu_2869_p3.read().is_01() || !zext_ln203_23_fu_2885_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_37_fu_2869_p3.read()) - sc_biguint<12>(zext_ln203_23_fu_2885_p1.read()));
}

void attention::thread_sub_ln203_3_fu_2319_p2() {
    sub_ln203_3_fu_2319_p2 = (!tmp_25_fu_2299_p3.read().is_01() || !zext_ln203_7_fu_2315_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_25_fu_2299_p3.read()) - sc_biguint<12>(zext_ln203_7_fu_2315_p1.read()));
}

void attention::thread_sub_ln203_4_fu_2387_p2() {
    sub_ln203_4_fu_2387_p2 = (!zext_ln203_9_fu_2371_p1.read().is_01() || !zext_ln203_10_fu_2383_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_9_fu_2371_p1.read()) - sc_biguint<9>(zext_ln203_10_fu_2383_p1.read()));
}

void attention::thread_sub_ln203_5_fu_2506_p2() {
    sub_ln203_5_fu_2506_p2 = (!zext_ln203_12_fu_2490_p1.read().is_01() || !zext_ln203_13_fu_2502_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_12_fu_2490_p1.read()) - sc_biguint<9>(zext_ln203_13_fu_2502_p1.read()));
}

void attention::thread_sub_ln203_6_fu_2438_p2() {
    sub_ln203_6_fu_2438_p2 = (!p_shl6_cast_fu_2422_p3.read().is_01() || !p_shl7_cast_fu_2430_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl6_cast_fu_2422_p3.read()) - sc_biguint<15>(p_shl7_cast_fu_2430_p3.read()));
}

void attention::thread_sub_ln203_7_fu_2621_p2() {
    sub_ln203_7_fu_2621_p2 = (!tmp_31_fu_2601_p3.read().is_01() || !zext_ln203_15_fu_2617_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_31_fu_2601_p3.read()) - sc_biguint<8>(zext_ln203_15_fu_2617_p1.read()));
}

void attention::thread_sub_ln203_8_fu_2557_p2() {
    sub_ln203_8_fu_2557_p2 = (!p_shl_cast_fu_2541_p3.read().is_01() || !p_shl2_cast_fu_2549_p3.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl_cast_fu_2541_p3.read()) - sc_biguint<15>(p_shl2_cast_fu_2549_p3.read()));
}

void attention::thread_sub_ln203_9_fu_2825_p2() {
    sub_ln203_9_fu_2825_p2 = (!tmp_35_fu_2805_p3.read().is_01() || !zext_ln203_22_fu_2821_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_35_fu_2805_p3.read()) - sc_biguint<8>(zext_ln203_22_fu_2821_p1.read()));
}

void attention::thread_sub_ln203_fu_2255_p2() {
    sub_ln203_fu_2255_p2 = (!tmp_23_fu_2235_p3.read().is_01() || !zext_ln203_fu_2251_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_23_fu_2235_p3.read()) - sc_biguint<12>(zext_ln203_fu_2251_p1.read()));
}

void attention::thread_sub_ln588_fu_2685_p2() {
    sub_ln588_fu_2685_p2 = (!tmp_33_fu_2665_p3.read().is_01() || !zext_ln588_fu_2681_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_33_fu_2665_p3.read()) - sc_biguint<8>(zext_ln588_fu_2681_p1.read()));
}

void attention::thread_sub_ln639_fu_2970_p2() {
    sub_ln639_fu_2970_p2 = (!tmp_39_fu_2950_p3.read().is_01() || !zext_ln639_fu_2966_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_39_fu_2950_p3.read()) - sc_biguint<12>(zext_ln639_fu_2966_p1.read()));
}

void attention::thread_sub_ln640_fu_3004_p2() {
    sub_ln640_fu_3004_p2 = (!zext_ln640_1_fu_2988_p1.read().is_01() || !zext_ln640_2_fu_3000_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln640_1_fu_2988_p1.read()) - sc_biguint<12>(zext_ln640_2_fu_3000_p1.read()));
}

void attention::thread_sub_ln703_fu_2776_p2() {
    sub_ln703_fu_2776_p2 = (!ap_const_lv32_0.is_01() || !sext_ln703_fu_2773_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_bigint<32>(sext_ln703_fu_2773_p1.read()));
}

void attention::thread_tmp_169_fu_2757_p4() {
    tmp_169_fu_2757_p4 = sub_ln1148_fu_2752_p2.read().range(88, 60);
}

void attention::thread_tmp_23_fu_2235_p3() {
    tmp_23_fu_2235_p3 = esl_concat<5,7>(v306_0_reg_1077.read(), ap_const_lv7_0);
}

void attention::thread_tmp_24_fu_2243_p3() {
    tmp_24_fu_2243_p3 = esl_concat<5,5>(v306_0_reg_1077.read(), ap_const_lv5_0);
}

void attention::thread_tmp_25_fu_2299_p3() {
    tmp_25_fu_2299_p3 = esl_concat<5,7>(v310_0_reg_1099.read(), ap_const_lv7_0);
}

void attention::thread_tmp_26_fu_2307_p3() {
    tmp_26_fu_2307_p3 = esl_concat<5,5>(v310_0_reg_1099.read(), ap_const_lv5_0);
}

void attention::thread_tmp_27_fu_2363_p3() {
    tmp_27_fu_2363_p3 = esl_concat<5,3>(v314_0_reg_1121.read(), ap_const_lv3_0);
}

void attention::thread_tmp_28_fu_2375_p3() {
    tmp_28_fu_2375_p3 = esl_concat<5,1>(v314_0_reg_1121.read(), ap_const_lv1_0);
}

void attention::thread_tmp_29_fu_2482_p3() {
    tmp_29_fu_2482_p3 = esl_concat<5,3>(v318_0_reg_1154.read(), ap_const_lv3_0);
}

void attention::thread_tmp_30_fu_2494_p3() {
    tmp_30_fu_2494_p3 = esl_concat<5,1>(v318_0_reg_1154.read(), ap_const_lv1_0);
}

void attention::thread_tmp_31_fu_2601_p3() {
    tmp_31_fu_2601_p3 = esl_concat<5,3>(v326_0_reg_1187.read(), ap_const_lv3_0);
}

void attention::thread_tmp_32_fu_2609_p3() {
    tmp_32_fu_2609_p3 = esl_concat<5,1>(v326_0_reg_1187.read(), ap_const_lv1_0);
}

void attention::thread_tmp_33_fu_2665_p3() {
    tmp_33_fu_2665_p3 = esl_concat<5,3>(i10_0_reg_1209.read(), ap_const_lv3_0);
}

void attention::thread_tmp_34_fu_2673_p3() {
    tmp_34_fu_2673_p3 = esl_concat<5,1>(i10_0_reg_1209.read(), ap_const_lv1_0);
}

void attention::thread_tmp_35_fu_2805_p3() {
    tmp_35_fu_2805_p3 = esl_concat<5,3>(v346_0_reg_1231.read(), ap_const_lv3_0);
}

void attention::thread_tmp_36_fu_2813_p3() {
    tmp_36_fu_2813_p3 = esl_concat<5,1>(v346_0_reg_1231.read(), ap_const_lv1_0);
}

void attention::thread_tmp_37_fu_2869_p3() {
    tmp_37_fu_2869_p3 = esl_concat<5,7>(v350_0_reg_1253.read(), ap_const_lv7_0);
}

void attention::thread_tmp_38_fu_2877_p3() {
    tmp_38_fu_2877_p3 = esl_concat<5,5>(v350_0_reg_1253.read(), ap_const_lv5_0);
}

void attention::thread_tmp_39_fu_2950_p3() {
    tmp_39_fu_2950_p3 = esl_concat<5,7>(h7_0_0_reg_1286.read(), ap_const_lv7_0);
}

void attention::thread_tmp_40_fu_2958_p3() {
    tmp_40_fu_2958_p3 = esl_concat<5,5>(h7_0_0_reg_1286.read(), ap_const_lv5_0);
}

void attention::thread_trunc_ln203_1_fu_2537_p1() {
    trunc_ln203_1_fu_2537_p1 = add_ln203_8_fu_2532_p2.read().range(8-1, 0);
}

void attention::thread_trunc_ln203_fu_2418_p1() {
    trunc_ln203_fu_2418_p1 = add_ln203_7_fu_2413_p2.read().range(8-1, 0);
}

void attention::thread_trunc_ln640_fu_2976_p1() {
    trunc_ln640_fu_2976_p1 = h7_0_0_reg_1286.read().range(4-1, 0);
}

void attention::thread_updated_k_cache_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        updated_k_cache_V_address0 =  (sc_lv<14>) (zext_ln203_18_fu_2465_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        updated_k_cache_V_address0 = grp_transpose_last_two_d_fu_2134_v196_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        updated_k_cache_V_address0 = grp_cache_update_fu_2109_v187_V_address0.read();
    } else {
        updated_k_cache_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void attention::thread_updated_k_cache_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        updated_k_cache_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        updated_k_cache_V_ce0 = grp_transpose_last_two_d_fu_2134_v196_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        updated_k_cache_V_ce0 = grp_cache_update_fu_2109_v187_V_ce0.read();
    } else {
        updated_k_cache_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_updated_k_cache_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        updated_k_cache_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        updated_k_cache_V_d0 = grp_cache_update_fu_2109_v187_V_d0.read();
    } else {
        updated_k_cache_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_updated_k_cache_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln550_fu_2444_p2.read()))) {
        updated_k_cache_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        updated_k_cache_V_we0 = grp_cache_update_fu_2109_v187_V_we0.read();
    } else {
        updated_k_cache_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_updated_v_cache_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        updated_v_cache_V_address0 =  (sc_lv<14>) (zext_ln203_21_fu_2584_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        updated_v_cache_V_address0 = grp_GEMM_3D_float2_fu_2127_v245_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        updated_v_cache_V_address0 = grp_cache_update_fu_2109_v187_V_address0.read();
    } else {
        updated_v_cache_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void attention::thread_updated_v_cache_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        updated_v_cache_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        updated_v_cache_V_ce0 = grp_GEMM_3D_float2_fu_2127_v245_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        updated_v_cache_V_ce0 = grp_cache_update_fu_2109_v187_V_ce0.read();
    } else {
        updated_v_cache_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_updated_v_cache_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        updated_v_cache_V_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        updated_v_cache_V_d0 = grp_cache_update_fu_2109_v187_V_d0.read();
    } else {
        updated_v_cache_V_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_updated_v_cache_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln558_fu_2563_p2.read()))) {
        updated_v_cache_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        updated_v_cache_V_we0 = grp_cache_update_fu_2109_v187_V_we0.read();
    } else {
        updated_v_cache_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_v256_V_address0() {
    v256_V_address0 = grp_rms_norm_fu_1746_v0_V_address0.read();
}

void attention::thread_v256_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        v256_V_ce0 = grp_rms_norm_fu_1746_v0_V_ce0.read();
    } else {
        v256_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_0_address0() {
    v257_0_address0 = grp_linear_forward_no_mu_fu_1330_v80_0_address0.read();
}

void attention::thread_v257_0_address1() {
    v257_0_address1 = grp_linear_forward_no_mu_fu_1330_v80_0_address1.read();
}

void attention::thread_v257_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_0_ce0 = grp_linear_forward_no_mu_fu_1330_v80_0_ce0.read();
    } else {
        v257_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_0_ce1 = grp_linear_forward_no_mu_fu_1330_v80_0_ce1.read();
    } else {
        v257_0_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v257_10_address0() {
    v257_10_address0 = grp_linear_forward_no_mu_fu_1330_v80_10_address0.read();
}

void attention::thread_v257_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_10_ce0 = grp_linear_forward_no_mu_fu_1330_v80_10_ce0.read();
    } else {
        v257_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_11_address0() {
    v257_11_address0 = grp_linear_forward_no_mu_fu_1330_v80_11_address0.read();
}

void attention::thread_v257_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_11_ce0 = grp_linear_forward_no_mu_fu_1330_v80_11_ce0.read();
    } else {
        v257_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_12_address0() {
    v257_12_address0 = grp_linear_forward_no_mu_fu_1330_v80_12_address0.read();
}

void attention::thread_v257_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_12_ce0 = grp_linear_forward_no_mu_fu_1330_v80_12_ce0.read();
    } else {
        v257_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_13_address0() {
    v257_13_address0 = grp_linear_forward_no_mu_fu_1330_v80_13_address0.read();
}

void attention::thread_v257_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_13_ce0 = grp_linear_forward_no_mu_fu_1330_v80_13_ce0.read();
    } else {
        v257_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_14_address0() {
    v257_14_address0 = grp_linear_forward_no_mu_fu_1330_v80_14_address0.read();
}

void attention::thread_v257_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_14_ce0 = grp_linear_forward_no_mu_fu_1330_v80_14_ce0.read();
    } else {
        v257_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_15_address0() {
    v257_15_address0 = grp_linear_forward_no_mu_fu_1330_v80_15_address0.read();
}

void attention::thread_v257_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_15_ce0 = grp_linear_forward_no_mu_fu_1330_v80_15_ce0.read();
    } else {
        v257_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_16_address0() {
    v257_16_address0 = grp_linear_forward_no_mu_fu_1330_v80_16_address0.read();
}

void attention::thread_v257_16_address1() {
    v257_16_address1 = grp_linear_forward_no_mu_fu_1330_v80_16_address1.read();
}

void attention::thread_v257_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_16_ce0 = grp_linear_forward_no_mu_fu_1330_v80_16_ce0.read();
    } else {
        v257_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_16_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_16_ce1 = grp_linear_forward_no_mu_fu_1330_v80_16_ce1.read();
    } else {
        v257_16_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v257_17_address0() {
    v257_17_address0 = grp_linear_forward_no_mu_fu_1330_v80_17_address0.read();
}

void attention::thread_v257_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_17_ce0 = grp_linear_forward_no_mu_fu_1330_v80_17_ce0.read();
    } else {
        v257_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_18_address0() {
    v257_18_address0 = grp_linear_forward_no_mu_fu_1330_v80_18_address0.read();
}

void attention::thread_v257_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_18_ce0 = grp_linear_forward_no_mu_fu_1330_v80_18_ce0.read();
    } else {
        v257_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_19_address0() {
    v257_19_address0 = grp_linear_forward_no_mu_fu_1330_v80_19_address0.read();
}

void attention::thread_v257_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_19_ce0 = grp_linear_forward_no_mu_fu_1330_v80_19_ce0.read();
    } else {
        v257_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_1_address0() {
    v257_1_address0 = grp_linear_forward_no_mu_fu_1330_v80_1_address0.read();
}

void attention::thread_v257_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_1_ce0 = grp_linear_forward_no_mu_fu_1330_v80_1_ce0.read();
    } else {
        v257_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_20_address0() {
    v257_20_address0 = grp_linear_forward_no_mu_fu_1330_v80_20_address0.read();
}

void attention::thread_v257_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_20_ce0 = grp_linear_forward_no_mu_fu_1330_v80_20_ce0.read();
    } else {
        v257_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_21_address0() {
    v257_21_address0 = grp_linear_forward_no_mu_fu_1330_v80_21_address0.read();
}

void attention::thread_v257_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_21_ce0 = grp_linear_forward_no_mu_fu_1330_v80_21_ce0.read();
    } else {
        v257_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_22_address0() {
    v257_22_address0 = grp_linear_forward_no_mu_fu_1330_v80_22_address0.read();
}

void attention::thread_v257_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_22_ce0 = grp_linear_forward_no_mu_fu_1330_v80_22_ce0.read();
    } else {
        v257_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_23_address0() {
    v257_23_address0 = grp_linear_forward_no_mu_fu_1330_v80_23_address0.read();
}

void attention::thread_v257_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_23_ce0 = grp_linear_forward_no_mu_fu_1330_v80_23_ce0.read();
    } else {
        v257_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_2_address0() {
    v257_2_address0 = grp_linear_forward_no_mu_fu_1330_v80_2_address0.read();
}

void attention::thread_v257_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_2_ce0 = grp_linear_forward_no_mu_fu_1330_v80_2_ce0.read();
    } else {
        v257_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_3_address0() {
    v257_3_address0 = grp_linear_forward_no_mu_fu_1330_v80_3_address0.read();
}

void attention::thread_v257_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_3_ce0 = grp_linear_forward_no_mu_fu_1330_v80_3_ce0.read();
    } else {
        v257_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_4_address0() {
    v257_4_address0 = grp_linear_forward_no_mu_fu_1330_v80_4_address0.read();
}

void attention::thread_v257_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_4_ce0 = grp_linear_forward_no_mu_fu_1330_v80_4_ce0.read();
    } else {
        v257_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_5_address0() {
    v257_5_address0 = grp_linear_forward_no_mu_fu_1330_v80_5_address0.read();
}

void attention::thread_v257_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_5_ce0 = grp_linear_forward_no_mu_fu_1330_v80_5_ce0.read();
    } else {
        v257_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_6_address0() {
    v257_6_address0 = grp_linear_forward_no_mu_fu_1330_v80_6_address0.read();
}

void attention::thread_v257_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_6_ce0 = grp_linear_forward_no_mu_fu_1330_v80_6_ce0.read();
    } else {
        v257_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_7_address0() {
    v257_7_address0 = grp_linear_forward_no_mu_fu_1330_v80_7_address0.read();
}

void attention::thread_v257_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        v257_7_ce0 = grp_linear_forward_no_mu_fu_1330_v80_7_ce0.read();
    } else {
        v257_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v257_8_address0() {
    v257_8_address0 = grp_linear_forward_no_mu_fu_1330_v80_8_address0.read();
}

}

