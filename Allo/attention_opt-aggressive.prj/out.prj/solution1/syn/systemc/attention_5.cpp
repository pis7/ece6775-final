#include "attention.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void attention::thread_v271_23_address0() {
    v271_23_address0 = grp_linear_forward_no_mu_fu_1372_v81_23_address0.read();
}

void attention::thread_v271_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_23_ce0 = grp_linear_forward_no_mu_fu_1372_v81_23_ce0.read();
    } else {
        v271_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_2_address0() {
    v271_2_address0 = grp_linear_forward_no_mu_fu_1372_v81_2_address0.read();
}

void attention::thread_v271_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_2_ce0 = grp_linear_forward_no_mu_fu_1372_v81_2_ce0.read();
    } else {
        v271_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_3_address0() {
    v271_3_address0 = grp_linear_forward_no_mu_fu_1372_v81_3_address0.read();
}

void attention::thread_v271_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_3_ce0 = grp_linear_forward_no_mu_fu_1372_v81_3_ce0.read();
    } else {
        v271_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_4_address0() {
    v271_4_address0 = grp_linear_forward_no_mu_fu_1372_v81_4_address0.read();
}

void attention::thread_v271_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_4_ce0 = grp_linear_forward_no_mu_fu_1372_v81_4_ce0.read();
    } else {
        v271_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_5_address0() {
    v271_5_address0 = grp_linear_forward_no_mu_fu_1372_v81_5_address0.read();
}

void attention::thread_v271_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_5_ce0 = grp_linear_forward_no_mu_fu_1372_v81_5_ce0.read();
    } else {
        v271_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_6_address0() {
    v271_6_address0 = grp_linear_forward_no_mu_fu_1372_v81_6_address0.read();
}

void attention::thread_v271_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_6_ce0 = grp_linear_forward_no_mu_fu_1372_v81_6_ce0.read();
    } else {
        v271_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_7_address0() {
    v271_7_address0 = grp_linear_forward_no_mu_fu_1372_v81_7_address0.read();
}

void attention::thread_v271_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_7_ce0 = grp_linear_forward_no_mu_fu_1372_v81_7_ce0.read();
    } else {
        v271_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_8_address0() {
    v271_8_address0 = grp_linear_forward_no_mu_fu_1372_v81_8_address0.read();
}

void attention::thread_v271_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_8_ce0 = grp_linear_forward_no_mu_fu_1372_v81_8_ce0.read();
    } else {
        v271_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v271_9_address0() {
    v271_9_address0 = grp_linear_forward_no_mu_fu_1372_v81_9_address0.read();
}

void attention::thread_v271_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v271_9_ce0 = grp_linear_forward_no_mu_fu_1372_v81_9_ce0.read();
    } else {
        v271_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v273_address0() {
    v273_address0 = grp_apply_rotary_pos_emb_fu_2063_v163_address0.read();
}

void attention::thread_v273_ce0() {
    v273_ce0 = grp_apply_rotary_pos_emb_fu_2063_v163_ce0.read();
}

void attention::thread_v274_address0() {
    v274_address0 = grp_apply_rotary_pos_emb_fu_2063_v164_address0.read();
}

void attention::thread_v274_ce0() {
    v274_ce0 = grp_apply_rotary_pos_emb_fu_2063_v164_ce0.read();
}

void attention::thread_v275_address0() {
    v275_address0 = grp_rms_norm_fu_2031_v1_address0.read();
}

void attention::thread_v275_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        v275_ce0 = grp_rms_norm_fu_2031_v1_ce0.read();
    } else {
        v275_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v276_address0() {
    v276_address0 = grp_rms_norm_fu_2031_v1_address0.read();
}

void attention::thread_v276_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        v276_ce0 = grp_rms_norm_fu_2031_v1_ce0.read();
    } else {
        v276_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v277_address0() {
    v277_address0 = grp_cache_update_fu_2092_v193_address0.read();
}

void attention::thread_v277_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        v277_ce0 = grp_cache_update_fu_2092_v193_ce0.read();
    } else {
        v277_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v278_address0() {
    v278_address0 = grp_cache_update_fu_2092_v193_address0.read();
}

void attention::thread_v278_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        v278_ce0 = grp_cache_update_fu_2092_v193_ce0.read();
    } else {
        v278_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v280_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln736_fu_4138_p2.read()))) {
        v280_address0 =  (sc_lv<11>) (zext_ln737_fu_4150_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v280_address0 = grp_linear_forward_no_mu_fu_1372_v83_address0.read();
    } else {
        v280_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_v280_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln736_fu_4138_p2.read()))) {
        v280_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v280_ce0 = grp_linear_forward_no_mu_fu_1372_v83_ce0.read();
    } else {
        v280_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v280_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln736_fu_4138_p2.read()))) {
        v280_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v280_d0 = grp_linear_forward_no_mu_fu_1372_v83_d0.read();
    } else {
        v280_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_v280_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln736_fu_4138_p2.read()))) {
        v280_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        v280_we0 = grp_linear_forward_no_mu_fu_1372_v83_we0.read();
    } else {
        v280_we0 = ap_const_logic_0;
    }
}

void attention::thread_v302_V_fu_2489_p3() {
    v302_V_fu_2489_p3 = (!or_ln603_4_fu_2483_p2.read()[0].is_01())? sc_lv<32>(): ((or_ln603_4_fu_2483_p2.read()[0].to_bool())? select_ln603_5_fu_2475_p3.read(): ap_const_lv32_0);
}

void attention::thread_v304_V_fu_2884_p3() {
    v304_V_fu_2884_p3 = (!or_ln603_7_fu_2878_p2.read()[0].is_01())? sc_lv<32>(): ((or_ln603_7_fu_2878_p2.read()[0].to_bool())? select_ln603_9_fu_2870_p3.read(): ap_const_lv32_0);
}

void attention::thread_v306_V_fu_3043_p3() {
    v306_V_fu_3043_p3 = (!or_ln603_10_fu_3037_p2.read()[0].is_01())? sc_lv<32>(): ((or_ln603_10_fu_3037_p2.read()[0].to_bool())? select_ln603_13_fu_3029_p3.read(): ap_const_lv32_0);
}

void attention::thread_v308_V_fu_3320_p3() {
    v308_V_fu_3320_p3 = (!or_ln603_13_fu_3314_p2.read()[0].is_01())? sc_lv<32>(): ((or_ln603_13_fu_3314_p2.read()[0].to_bool())? select_ln603_17_fu_3306_p3.read(): ap_const_lv32_0);
}

void attention::thread_v334_fu_3334_p2() {
    v334_fu_3334_p2 = (!v334_0_reg_1108.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v334_0_reg_1108.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v338_fu_3398_p2() {
    v338_fu_3398_p2 = (!v338_0_reg_1130.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v338_0_reg_1130.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v342_fu_3462_p2() {
    v342_fu_3462_p2 = (!v342_0_reg_1152.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v342_0_reg_1152.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v343_fu_3508_p2() {
    v343_fu_3508_p2 = (!v343_0_reg_1163.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(v343_0_reg_1163.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_v344_fu_3555_p2() {
    v344_fu_3555_p2 = (!v344_0_reg_1174.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v344_0_reg_1174.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_v346_fu_3581_p2() {
    v346_fu_3581_p2 = (!v346_0_reg_1185.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v346_0_reg_1185.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v347_fu_3627_p2() {
    v347_fu_3627_p2 = (!v347_0_reg_1196.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(v347_0_reg_1196.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_v348_fu_3674_p2() {
    v348_fu_3674_p2 = (!v348_0_reg_1207.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(v348_0_reg_1207.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_v354_fu_3700_p2() {
    v354_fu_3700_p2 = (!v354_0_reg_1218.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v354_0_reg_1218.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v374_fu_3871_p2() {
    v374_fu_3871_p2 = (!v374_0_reg_1273.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v374_0_reg_1273.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v378_fu_3935_p2() {
    v378_fu_3935_p2 = (!v378_0_reg_1295.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(v378_0_reg_1295.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_v_proj_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_proj_0_address0 = grp_reshape_2D_to_3D_fu_2117_v148_0_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        v_proj_0_address0 = grp_cache_update_fu_2092_v194_0_address0.read();
    } else {
        v_proj_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_v_proj_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_proj_0_ce0 = grp_reshape_2D_to_3D_fu_2117_v148_0_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        v_proj_0_ce0 = grp_cache_update_fu_2092_v194_0_ce0.read();
    } else {
        v_proj_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_proj_0_we0 = grp_reshape_2D_to_3D_fu_2117_v148_0_we0.read();
    } else {
        v_proj_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_re_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        v_proj_re_address0 =  (sc_lv<11>) (zext_ln515_fu_2215_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_proj_re_address0 = grp_reshape_2D_to_3D_fu_2117_v147_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v_proj_re_address0 = grp_linear_forward_no_mu_fu_1643_v83_address0.read();
    } else {
        v_proj_re_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_v_proj_re_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        v_proj_re_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_proj_re_ce0 = grp_reshape_2D_to_3D_fu_2117_v147_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v_proj_re_ce0 = grp_linear_forward_no_mu_fu_1643_v83_ce0.read();
    } else {
        v_proj_re_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_re_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        v_proj_re_d0 = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v_proj_re_d0 = grp_linear_forward_no_mu_fu_1643_v83_d0.read();
    } else {
        v_proj_re_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_v_proj_re_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln514_fu_2203_p2.read()))) {
        v_proj_re_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        v_proj_re_we0 = grp_linear_forward_no_mu_fu_1643_v83_we0.read();
    } else {
        v_proj_re_we0 = ap_const_logic_0;
    }
}

void attention::thread_xor_ln571_1_fu_2783_p2() {
    xor_ln571_1_fu_2783_p2 = (icmp_ln571_1_reg_4261.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln571_2_fu_2942_p2() {
    xor_ln571_2_fu_2942_p2 = (icmp_ln571_2_reg_4301.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln571_3_fu_3219_p2() {
    xor_ln571_3_fu_3219_p2 = (icmp_ln571_3_reg_4351.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln571_fu_2388_p2() {
    xor_ln571_fu_2388_p2 = (icmp_ln571_reg_4216.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln581_1_fu_2831_p2() {
    xor_ln581_1_fu_2831_p2 = (or_ln581_1_fu_2826_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln581_2_fu_2990_p2() {
    xor_ln581_2_fu_2990_p2 = (or_ln581_2_fu_2985_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln581_3_fu_3267_p2() {
    xor_ln581_3_fu_3267_p2 = (or_ln581_3_fu_3262_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln581_fu_2436_p2() {
    xor_ln581_fu_2436_p2 = (or_ln581_fu_2431_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln582_1_fu_2797_p2() {
    xor_ln582_1_fu_2797_p2 = (or_ln582_1_fu_2793_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln582_2_fu_2956_p2() {
    xor_ln582_2_fu_2956_p2 = (or_ln582_2_fu_2952_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln582_3_fu_3233_p2() {
    xor_ln582_3_fu_3233_p2 = (or_ln582_3_fu_3229_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln582_fu_2402_p2() {
    xor_ln582_fu_2402_p2 = (or_ln582_fu_2398_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln585_1_fu_2808_p2() {
    xor_ln585_1_fu_2808_p2 = (icmp_ln585_1_fu_2736_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln585_2_fu_2967_p2() {
    xor_ln585_2_fu_2967_p2 = (icmp_ln585_2_fu_2895_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln585_3_fu_3244_p2() {
    xor_ln585_3_fu_3244_p2 = (icmp_ln585_3_fu_3172_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_xor_ln585_fu_2413_p2() {
    xor_ln585_fu_2413_p2 = (icmp_ln585_fu_2341_p2.read() ^ ap_const_lv1_1);
}

void attention::thread_zext_ln461_1_fu_2523_p1() {
    zext_ln461_1_fu_2523_p1 = esl_zext<12,11>(exp_tmp_V_1_fu_2513_p4.read());
}

void attention::thread_zext_ln461_2_fu_2641_p1() {
    zext_ln461_2_fu_2641_p1 = esl_zext<12,11>(exp_tmp_V_2_fu_2631_p4.read());
}

void attention::thread_zext_ln461_3_fu_3077_p1() {
    zext_ln461_3_fu_3077_p1 = esl_zext<12,11>(exp_tmp_V_3_fu_3067_p4.read());
}

void attention::thread_zext_ln461_fu_2246_p1() {
    zext_ln461_fu_2246_p1 = esl_zext<12,11>(exp_tmp_V_fu_2236_p4.read());
}

void attention::thread_zext_ln481_fu_2164_p1() {
    zext_ln481_fu_2164_p1 = esl_zext<64,11>(v284_0_0_reg_1064.read());
}

void attention::thread_zext_ln503_fu_2181_p1() {
    zext_ln503_fu_2181_p1 = esl_zext<64,11>(v295_0_0_reg_1075.read());
}

void attention::thread_zext_ln509_fu_2198_p1() {
    zext_ln509_fu_2198_p1 = esl_zext<64,11>(v298_0_0_reg_1086.read());
}

void attention::thread_zext_ln515_fu_2215_p1() {
    zext_ln515_fu_2215_p1 = esl_zext<64,11>(v301_0_0_reg_1097.read());
}

void attention::thread_zext_ln585_1_fu_3378_p1() {
    zext_ln585_1_fu_3378_p1 = esl_zext<12,7>(v336_0_0_reg_1119.read());
}

void attention::thread_zext_ln585_fu_3356_p1() {
    zext_ln585_fu_3356_p1 = esl_zext<12,10>(tmp_29_fu_3348_p3.read());
}

void attention::thread_zext_ln586_1_fu_2746_p1() {
    zext_ln586_1_fu_2746_p1 = esl_zext<54,32>(sext_ln581_1_fu_2733_p1.read());
}

void attention::thread_zext_ln586_2_fu_2905_p1() {
    zext_ln586_2_fu_2905_p1 = esl_zext<54,32>(sext_ln581_2_fu_2892_p1.read());
}

void attention::thread_zext_ln586_3_fu_3182_p1() {
    zext_ln586_3_fu_3182_p1 = esl_zext<54,32>(sext_ln581_3_fu_3169_p1.read());
}

void attention::thread_zext_ln586_fu_2351_p1() {
    zext_ln586_fu_2351_p1 = esl_zext<54,32>(sext_ln581_fu_2338_p1.read());
}

void attention::thread_zext_ln593_1_fu_3442_p1() {
    zext_ln593_1_fu_3442_p1 = esl_zext<12,7>(v340_0_0_reg_1141.read());
}

void attention::thread_zext_ln593_fu_3420_p1() {
    zext_ln593_fu_3420_p1 = esl_zext<12,10>(tmp_31_fu_3412_p3.read());
}

void attention::thread_zext_ln602_1_fu_3488_p1() {
    zext_ln602_1_fu_3488_p1 = esl_zext<9,6>(tmp_33_fu_3480_p3.read());
}

void attention::thread_zext_ln602_2_fu_3514_p1() {
    zext_ln602_2_fu_3514_p1 = esl_zext<10,3>(v343_0_reg_1163.read());
}

void attention::thread_zext_ln602_3_fu_3561_p1() {
    zext_ln602_3_fu_3561_p1 = esl_zext<15,7>(v344_0_reg_1174.read());
}

void attention::thread_zext_ln602_4_fu_3570_p1() {
    zext_ln602_4_fu_3570_p1 = esl_zext<64,15>(add_ln602_1_fu_3565_p2.read());
}

void attention::thread_zext_ln602_fu_3476_p1() {
    zext_ln602_fu_3476_p1 = esl_zext<9,8>(tmp_32_fu_3468_p3.read());
}

void attention::thread_zext_ln610_1_fu_3607_p1() {
    zext_ln610_1_fu_3607_p1 = esl_zext<9,6>(tmp_35_fu_3599_p3.read());
}

void attention::thread_zext_ln610_2_fu_3633_p1() {
    zext_ln610_2_fu_3633_p1 = esl_zext<10,3>(v347_0_reg_1196.read());
}

void attention::thread_zext_ln610_3_fu_3680_p1() {
    zext_ln610_3_fu_3680_p1 = esl_zext<15,7>(v348_0_reg_1207.read());
}

void attention::thread_zext_ln610_4_fu_3689_p1() {
    zext_ln610_4_fu_3689_p1 = esl_zext<64,15>(add_ln610_1_fu_3684_p2.read());
}

void attention::thread_zext_ln610_fu_3595_p1() {
    zext_ln610_fu_3595_p1 = esl_zext<9,8>(tmp_34_fu_3587_p3.read());
}

void attention::thread_zext_ln629_1_fu_3744_p1() {
    zext_ln629_1_fu_3744_p1 = esl_zext<8,3>(v356_0_0_reg_1229.read());
}

void attention::thread_zext_ln629_fu_3722_p1() {
    zext_ln629_fu_3722_p1 = esl_zext<8,6>(tmp_37_fu_3714_p3.read());
}

void attention::thread_zext_ln639_1_fu_3808_p1() {
    zext_ln639_1_fu_3808_p1 = esl_zext<8,3>(k10_0_0_reg_1251.read());
}

void attention::thread_zext_ln639_fu_3786_p1() {
    zext_ln639_fu_3786_p1 = esl_zext<8,6>(tmp_39_fu_3778_p3.read());
}

void attention::thread_zext_ln657_fu_3850_p1() {
    zext_ln657_fu_3850_p1 = esl_zext<8,6>(tmp_41_fu_3842_p3.read());
}

void attention::thread_zext_ln667_1_fu_3915_p1() {
    zext_ln667_1_fu_3915_p1 = esl_zext<8,3>(v376_0_0_reg_1284.read());
}

void attention::thread_zext_ln667_fu_3893_p1() {
    zext_ln667_fu_3893_p1 = esl_zext<8,6>(tmp_44_fu_3885_p3.read());
}

void attention::thread_zext_ln676_1_fu_3979_p1() {
    zext_ln676_1_fu_3979_p1 = esl_zext<12,7>(v380_0_0_reg_1306.read());
}

void attention::thread_zext_ln676_fu_3957_p1() {
    zext_ln676_fu_3957_p1 = esl_zext<12,10>(tmp_46_fu_3949_p3.read());
}

void attention::thread_zext_ln684_fu_4005_p1() {
    zext_ln684_fu_4005_p1 = esl_zext<64,11>(v383_0_0_reg_1317.read());
}

void attention::thread_zext_ln689_fu_4082_p1() {
    zext_ln689_fu_4082_p1 = esl_zext<12,7>(d4_0_0_reg_1339.read());
}

void attention::thread_zext_ln690_fu_4038_p1() {
    zext_ln690_fu_4038_p1 = esl_zext<12,10>(tmp_48_fu_4030_p3.read());
}

void attention::thread_zext_ln691_1_fu_4060_p1() {
    zext_ln691_1_fu_4060_p1 = esl_zext<12,11>(shl_ln_fu_4052_p3.read());
}

void attention::thread_zext_ln691_2_fu_4072_p1() {
    zext_ln691_2_fu_4072_p1 = esl_zext<12,9>(shl_ln691_1_fu_4064_p3.read());
}

void attention::thread_zext_ln691_fu_4116_p1() {
    zext_ln691_fu_4116_p1 = esl_zext<64,32>(sext_ln691_fu_4113_p1.read());
}

void attention::thread_zext_ln698_fu_4133_p1() {
    zext_ln698_fu_4133_p1 = esl_zext<64,11>(v390_0_0_reg_1350.read());
}

void attention::thread_zext_ln737_fu_4150_p1() {
    zext_ln737_fu_4150_p1 = esl_zext<64,11>(v408_0_0_reg_1361.read());
}

}

