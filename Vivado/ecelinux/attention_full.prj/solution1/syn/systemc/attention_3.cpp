#include "attention.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void attention::thread_add_ln1265_fu_4594_p2() {
    add_ln1265_fu_4594_p2 = (!sub_ln1265_reg_4799.read().is_01() || !zext_ln1265_2_fu_4590_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(sub_ln1265_reg_4799.read()) + sc_biguint<8>(zext_ln1265_2_fu_4590_p1.read()));
}

void attention::thread_add_ln178_fu_4584_p2() {
    add_ln178_fu_4584_p2 = (!d_0_0_reg_3308.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(d_0_0_reg_3308.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void attention::thread_add_ln203_fu_4773_p2() {
    add_ln203_fu_4773_p2 = (!sub_ln203_reg_4862.read().is_01() || !zext_ln209_fu_4752_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(sub_ln203_reg_4862.read()) + sc_biguint<12>(zext_ln209_fu_4752_p1.read()));
}

void attention::thread_add_ln208_fu_4686_p2() {
    add_ln208_fu_4686_p2 = (!h106_0_0_reg_3319.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h106_0_0_reg_3319.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_add_ln209_fu_4762_p2() {
    add_ln209_fu_4762_p2 = (!d107_0_0_reg_3330.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(d107_0_0_reg_3330.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void attention::thread_add_ln210_fu_4768_p2() {
    add_ln210_fu_4768_p2 = (!zext_ln209_fu_4752_p1.read().is_01() || !sub_ln210_reg_4857.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln209_fu_4752_p1.read()) + sc_biguint<12>(sub_ln210_reg_4857.read()));
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

void attention::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
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

void attention::thread_ap_block_state10_on_subcall_done() {
    ap_block_state10_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_linear_forward_no_mu_fu_3341_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_reshape_2D_to_3D_fu_4510_ap_done.read()));
}

void attention::thread_ap_block_state12_on_subcall_done() {
    ap_block_state12_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_reshape_2D_to_3D_fu_4510_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_apply_rotary_pos_emb_fu_4357_ap_done.read()));
}

void attention::thread_ap_block_state16_on_subcall_done() {
    ap_block_state16_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_cache_update_fu_4501_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_transpose_last_two_d_fu_4432_ap_done.read()));
}

void attention::thread_ap_block_state2_on_subcall_done() {
    ap_block_state2_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_rms_norm_1536_s_fu_4062_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_init_2d_mem_fu_4516_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_init_2d_mem_fu_4522_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_init_2d_mem_fu_4528_ap_done.read()));
}

void attention::thread_ap_block_state35_on_subcall_done() {
    ap_block_state35_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_rms_norm_1536_s_fu_4062_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_init_2d_mem_fu_4516_ap_done.read()));
}

void attention::thread_ap_block_state8_on_subcall_done() {
    ap_block_state8_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_linear_forward_no_mu_fu_3341_ap_done.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_reshape_2D_to_3D_fu_4510_ap_done.read()));
}

void attention::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) && 
          esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_3341_ap_done.read(), ap_const_logic_1)))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) && 
         esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_3341_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void attention::thread_attn_output_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        attn_output_0_address0 =  (sc_lv<11>) (sext_ln203_fu_4778_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        attn_output_0_address0 = grp_GEMM_3D_float_1_fu_4350_output_0_V_address0.read();
    } else {
        attn_output_0_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_attn_output_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        attn_output_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        attn_output_0_ce0 = grp_GEMM_3D_float_1_fu_4350_output_0_V_ce0.read();
    } else {
        attn_output_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        attn_output_0_we0 = grp_GEMM_3D_float_1_fu_4350_output_0_V_we0.read();
    } else {
        attn_output_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_2D_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        attn_output_2D_0_V_address0 =  (sc_lv<11>) (zext_ln210_1_fu_4786_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        attn_output_2D_0_V_address0 = grp_quantize_activation_fu_4088_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        attn_output_2D_0_V_address0 = grp_rms_norm_1536_s_fu_4062_input_0_V_address0.read();
    } else {
        attn_output_2D_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_attn_output_2D_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        attn_output_2D_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        attn_output_2D_0_V_ce0 = grp_quantize_activation_fu_4088_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        attn_output_2D_0_V_ce0 = grp_rms_norm_1536_s_fu_4062_input_0_V_ce0.read();
    } else {
        attn_output_2D_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_2D_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        attn_output_2D_0_V_ce1 = grp_quantize_activation_fu_4088_input_0_V_ce1.read();
    } else {
        attn_output_2D_0_V_ce1 = ap_const_logic_0;
    }
}

void attention::thread_attn_output_2D_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        attn_output_2D_0_V_d0 = attn_output_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        attn_output_2D_0_V_d0 = grp_rms_norm_1536_s_fu_4062_input_0_V_d0.read();
    } else {
        attn_output_2D_0_V_d0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_attn_output_2D_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        attn_output_2D_0_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        attn_output_2D_0_V_we0 = grp_rms_norm_1536_s_fu_4062_input_0_V_we0.read();
    } else {
        attn_output_2D_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_attn_weights_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        attn_weights_0_V_address0 = attn_weights_0_V_ad_reg_4812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        attn_weights_0_V_address0 =  (sc_lv<7>) (sext_ln1265_fu_4599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        attn_weights_0_V_address0 = grp_GEMM_3D_float_1_fu_4350_input_1_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        attn_weights_0_V_address0 = grp_softmax_1_16_6_s_fu_4071_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        attn_weights_0_V_address0 = grp_GEMM_3D_float_fu_3929_output_0_V_address0.read();
    } else {
        attn_weights_0_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_attn_weights_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()))) {
        attn_weights_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        attn_weights_0_V_ce0 = grp_GEMM_3D_float_1_fu_4350_input_1_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        attn_weights_0_V_ce0 = grp_softmax_1_16_6_s_fu_4071_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        attn_weights_0_V_ce0 = grp_GEMM_3D_float_fu_3929_output_0_V_ce0.read();
    } else {
        attn_weights_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_attn_weights_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        attn_weights_0_V_ce1 = grp_GEMM_3D_float_1_fu_4350_input_1_0_V_ce1.read();
    } else {
        attn_weights_0_V_ce1 = ap_const_logic_0;
    }
}

void attention::thread_attn_weights_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        attn_weights_0_V_d0 = select_ln1148_2_fu_4672_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        attn_weights_0_V_d0 = grp_softmax_1_16_6_s_fu_4071_input_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        attn_weights_0_V_d0 = grp_GEMM_3D_float_fu_3929_output_0_V_d0.read();
    } else {
        attn_weights_0_V_d0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_attn_weights_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        attn_weights_0_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        attn_weights_0_V_we0 = grp_softmax_1_16_6_s_fu_4071_input_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        attn_weights_0_V_we0 = grp_GEMM_3D_float_fu_3929_output_0_V_we0.read();
    } else {
        attn_weights_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_final_output_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        final_output_0_V_address0 = grp_init_2d_mem_fu_4516_mem_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        final_output_0_V_address0 = grp_linear_forward_no_mu_fu_3341_output_0_V_address0.read();
    } else {
        final_output_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_final_output_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        final_output_0_V_ce0 = grp_init_2d_mem_fu_4516_mem_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        final_output_0_V_ce0 = grp_linear_forward_no_mu_fu_3341_output_0_V_ce0.read();
    } else {
        final_output_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_final_output_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        final_output_0_V_d0 = grp_init_2d_mem_fu_4516_mem_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        final_output_0_V_d0 = grp_linear_forward_no_mu_fu_3341_output_0_V_d0.read();
    } else {
        final_output_0_V_d0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_final_output_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        final_output_0_V_we0 = grp_init_2d_mem_fu_4516_mem_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        final_output_0_V_we0 = grp_linear_forward_no_mu_fu_3341_output_0_V_we0.read();
    } else {
        final_output_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_grp_GEMM_3D_float_1_fu_4350_ap_start() {
    grp_GEMM_3D_float_1_fu_4350_ap_start = grp_GEMM_3D_float_1_fu_4350_ap_start_reg.read();
}

void attention::thread_grp_GEMM_3D_float_fu_3929_ap_start() {
    grp_GEMM_3D_float_fu_3929_ap_start = grp_GEMM_3D_float_fu_3929_ap_start_reg.read();
}

void attention::thread_grp_apply_rotary_pos_emb_fu_4357_ap_start() {
    grp_apply_rotary_pos_emb_fu_4357_ap_start = grp_apply_rotary_pos_emb_fu_4357_ap_start_reg.read();
}

void attention::thread_grp_cache_update_fu_4501_ap_start() {
    grp_cache_update_fu_4501_ap_start = grp_cache_update_fu_4501_ap_start_reg.read();
}

void attention::thread_grp_cache_update_fu_4501_cache_in_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        grp_cache_update_fu_4501_cache_in_V_q0 = v_cache_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_cache_update_fu_4501_cache_in_V_q0 = k_cache_V_q0.read();
    } else {
        grp_cache_update_fu_4501_cache_in_V_q0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_cache_update_fu_4501_update_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        grp_cache_update_fu_4501_update_0_V_q0 = v_proj_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_cache_update_fu_4501_update_0_V_q0 = k_embed_0_V_q0.read();
    } else {
        grp_cache_update_fu_4501_update_0_V_q0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_fu_4623_p0() {
    grp_fu_4623_p0 =  (sc_lv<60>) (ap_const_lv117_6882F62B0C0D07D);
}

void attention::thread_grp_init_2d_mem_fu_4516_ap_start() {
    grp_init_2d_mem_fu_4516_ap_start = grp_init_2d_mem_fu_4516_ap_start_reg.read();
}

void attention::thread_grp_init_2d_mem_fu_4522_ap_start() {
    grp_init_2d_mem_fu_4522_ap_start = grp_init_2d_mem_fu_4522_ap_start_reg.read();
}

void attention::thread_grp_init_2d_mem_fu_4528_ap_start() {
    grp_init_2d_mem_fu_4528_ap_start = grp_init_2d_mem_fu_4528_ap_start_reg.read();
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_ap_start() {
    grp_linear_forward_no_mu_fu_3341_ap_start = grp_linear_forward_no_mu_fu_3341_ap_start_reg.read();
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_0_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_0_0_0_V_q0 = quantized_final_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_0_0_0_V_q0 = quantized_hidden_sta_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_0_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_0_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_0_1_0_V_q0 = quantized_final_outp_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_0_1_0_V_q0 = quantized_hidden_sta_1_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_0_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_0_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_0_2_0_V_q0 = quantized_final_outp_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_0_2_0_V_q0 = quantized_hidden_sta_2_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_0_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_0_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_0_3_0_V_q0 = quantized_final_outp_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_0_3_0_V_q0 = quantized_hidden_sta_3_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_0_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_10_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_10_0_0_V_q0 = quantized_final_outp_40_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_10_0_0_V_q0 = quantized_hidden_sta_40_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_10_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_10_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_10_1_0_V_q0 = quantized_final_outp_41_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_10_1_0_V_q0 = quantized_hidden_sta_41_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_10_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_10_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_10_2_0_V_q0 = quantized_final_outp_42_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_10_2_0_V_q0 = quantized_hidden_sta_42_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_10_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_10_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_10_3_0_V_q0 = quantized_final_outp_43_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_10_3_0_V_q0 = quantized_hidden_sta_43_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_10_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_11_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_11_0_0_V_q0 = quantized_final_outp_44_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_11_0_0_V_q0 = quantized_hidden_sta_44_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_11_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_11_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_11_1_0_V_q0 = quantized_final_outp_45_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_11_1_0_V_q0 = quantized_hidden_sta_45_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_11_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_11_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_11_2_0_V_q0 = quantized_final_outp_46_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_11_2_0_V_q0 = quantized_hidden_sta_46_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_11_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_11_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_11_3_0_V_q0 = quantized_final_outp_47_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_11_3_0_V_q0 = quantized_hidden_sta_47_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_11_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_12_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_12_0_0_V_q0 = quantized_final_outp_48_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_12_0_0_V_q0 = quantized_hidden_sta_48_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_12_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_12_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_12_1_0_V_q0 = quantized_final_outp_49_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_12_1_0_V_q0 = quantized_hidden_sta_49_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_12_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_12_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_12_2_0_V_q0 = quantized_final_outp_50_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_12_2_0_V_q0 = quantized_hidden_sta_50_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_12_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_12_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_12_3_0_V_q0 = quantized_final_outp_51_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_12_3_0_V_q0 = quantized_hidden_sta_51_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_12_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_13_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_13_0_0_V_q0 = quantized_final_outp_52_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_13_0_0_V_q0 = quantized_hidden_sta_52_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_13_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_13_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_13_1_0_V_q0 = quantized_final_outp_53_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_13_1_0_V_q0 = quantized_hidden_sta_53_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_13_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_13_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_13_2_0_V_q0 = quantized_final_outp_54_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_13_2_0_V_q0 = quantized_hidden_sta_54_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_13_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_13_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_13_3_0_V_q0 = quantized_final_outp_55_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_13_3_0_V_q0 = quantized_hidden_sta_55_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_13_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_14_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_14_0_0_V_q0 = quantized_final_outp_56_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_14_0_0_V_q0 = quantized_hidden_sta_56_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_14_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_14_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_14_1_0_V_q0 = quantized_final_outp_57_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_14_1_0_V_q0 = quantized_hidden_sta_57_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_14_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_14_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_14_2_0_V_q0 = quantized_final_outp_58_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_14_2_0_V_q0 = quantized_hidden_sta_58_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_14_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_14_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_14_3_0_V_q0 = quantized_final_outp_59_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_14_3_0_V_q0 = quantized_hidden_sta_59_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_14_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_15_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_15_0_0_V_q0 = quantized_final_outp_60_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_15_0_0_V_q0 = quantized_hidden_sta_60_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_15_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_15_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_15_1_0_V_q0 = quantized_final_outp_61_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_15_1_0_V_q0 = quantized_hidden_sta_61_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_15_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_15_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_15_2_0_V_q0 = quantized_final_outp_62_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_15_2_0_V_q0 = quantized_hidden_sta_62_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_15_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_15_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_15_3_0_V_q0 = quantized_final_outp_63_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_15_3_0_V_q0 = quantized_hidden_sta_63_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_15_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_16_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_16_0_0_V_q0 = quantized_final_outp_64_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_16_0_0_V_q0 = quantized_hidden_sta_64_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_16_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_16_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_16_1_0_V_q0 = quantized_final_outp_65_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_16_1_0_V_q0 = quantized_hidden_sta_65_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_16_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_16_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_16_2_0_V_q0 = quantized_final_outp_66_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_16_2_0_V_q0 = quantized_hidden_sta_66_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_16_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_16_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_16_3_0_V_q0 = quantized_final_outp_67_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_16_3_0_V_q0 = quantized_hidden_sta_67_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_16_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_17_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_17_0_0_V_q0 = quantized_final_outp_68_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_17_0_0_V_q0 = quantized_hidden_sta_68_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_17_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_17_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_17_1_0_V_q0 = quantized_final_outp_69_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_17_1_0_V_q0 = quantized_hidden_sta_69_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_17_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_17_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_17_2_0_V_q0 = quantized_final_outp_70_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_17_2_0_V_q0 = quantized_hidden_sta_70_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_17_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_17_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_17_3_0_V_q0 = quantized_final_outp_71_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_17_3_0_V_q0 = quantized_hidden_sta_71_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_17_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_18_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_18_0_0_V_q0 = quantized_final_outp_72_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_18_0_0_V_q0 = quantized_hidden_sta_72_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_18_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_18_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_18_1_0_V_q0 = quantized_final_outp_73_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_18_1_0_V_q0 = quantized_hidden_sta_73_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_18_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_18_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_18_2_0_V_q0 = quantized_final_outp_74_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_18_2_0_V_q0 = quantized_hidden_sta_74_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_18_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_18_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_18_3_0_V_q0 = quantized_final_outp_75_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_18_3_0_V_q0 = quantized_hidden_sta_75_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_18_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_19_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_19_0_0_V_q0 = quantized_final_outp_76_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_19_0_0_V_q0 = quantized_hidden_sta_76_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_19_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_19_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_19_1_0_V_q0 = quantized_final_outp_77_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_19_1_0_V_q0 = quantized_hidden_sta_77_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_19_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_19_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_19_2_0_V_q0 = quantized_final_outp_78_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_19_2_0_V_q0 = quantized_hidden_sta_78_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_19_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_19_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_19_3_0_V_q0 = quantized_final_outp_79_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_19_3_0_V_q0 = quantized_hidden_sta_79_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_19_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_1_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_1_0_0_V_q0 = quantized_final_outp_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_1_0_0_V_q0 = quantized_hidden_sta_4_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_1_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_1_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_1_1_0_V_q0 = quantized_final_outp_5_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_1_1_0_V_q0 = quantized_hidden_sta_5_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_1_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_1_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_1_2_0_V_q0 = quantized_final_outp_6_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_1_2_0_V_q0 = quantized_hidden_sta_6_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_1_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_1_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_1_3_0_V_q0 = quantized_final_outp_7_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_1_3_0_V_q0 = quantized_hidden_sta_7_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_1_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_20_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_20_0_0_V_q0 = quantized_final_outp_80_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_20_0_0_V_q0 = quantized_hidden_sta_80_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_20_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_20_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_20_1_0_V_q0 = quantized_final_outp_81_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_20_1_0_V_q0 = quantized_hidden_sta_81_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_20_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_20_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_20_2_0_V_q0 = quantized_final_outp_82_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_20_2_0_V_q0 = quantized_hidden_sta_82_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_20_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_20_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_20_3_0_V_q0 = quantized_final_outp_83_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_20_3_0_V_q0 = quantized_hidden_sta_83_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_20_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_21_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_21_0_0_V_q0 = quantized_final_outp_84_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_21_0_0_V_q0 = quantized_hidden_sta_84_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_21_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_21_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_21_1_0_V_q0 = quantized_final_outp_85_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_21_1_0_V_q0 = quantized_hidden_sta_85_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_21_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_21_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_21_2_0_V_q0 = quantized_final_outp_86_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_21_2_0_V_q0 = quantized_hidden_sta_86_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_21_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_21_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_21_3_0_V_q0 = quantized_final_outp_87_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_21_3_0_V_q0 = quantized_hidden_sta_87_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_21_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_22_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_22_0_0_V_q0 = quantized_final_outp_88_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_22_0_0_V_q0 = quantized_hidden_sta_88_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_22_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_22_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_22_1_0_V_q0 = quantized_final_outp_89_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_22_1_0_V_q0 = quantized_hidden_sta_89_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_22_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_22_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_22_2_0_V_q0 = quantized_final_outp_90_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_22_2_0_V_q0 = quantized_hidden_sta_90_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_22_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_22_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_22_3_0_V_q0 = quantized_final_outp_91_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_22_3_0_V_q0 = quantized_hidden_sta_91_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_22_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_23_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_23_0_0_V_q0 = quantized_final_outp_92_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_23_0_0_V_q0 = quantized_hidden_sta_92_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_23_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_23_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_23_1_0_V_q0 = quantized_final_outp_93_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_23_1_0_V_q0 = quantized_hidden_sta_93_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_23_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_23_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_23_2_0_V_q0 = quantized_final_outp_94_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_23_2_0_V_q0 = quantized_hidden_sta_94_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_23_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_23_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_23_3_0_V_q0 = quantized_final_outp_95_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_23_3_0_V_q0 = quantized_hidden_sta_95_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_23_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_24_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_24_0_0_V_q0 = quantized_final_outp_96_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_24_0_0_V_q0 = quantized_hidden_sta_96_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_24_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_24_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_24_1_0_V_q0 = quantized_final_outp_97_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_24_1_0_V_q0 = quantized_hidden_sta_97_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_24_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_24_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_24_2_0_V_q0 = quantized_final_outp_98_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_24_2_0_V_q0 = quantized_hidden_sta_98_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_24_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_24_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_24_3_0_V_q0 = quantized_final_outp_99_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_24_3_0_V_q0 = quantized_hidden_sta_99_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_24_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_25_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_25_0_0_V_q0 = quantized_final_outp_100_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_25_0_0_V_q0 = quantized_hidden_sta_100_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_25_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_25_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_25_1_0_V_q0 = quantized_final_outp_101_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_25_1_0_V_q0 = quantized_hidden_sta_101_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_25_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_25_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_25_2_0_V_q0 = quantized_final_outp_102_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_25_2_0_V_q0 = quantized_hidden_sta_102_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_25_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_25_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_25_3_0_V_q0 = quantized_final_outp_103_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_25_3_0_V_q0 = quantized_hidden_sta_103_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_25_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_26_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_26_0_0_V_q0 = quantized_final_outp_104_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_26_0_0_V_q0 = quantized_hidden_sta_104_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_26_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_26_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_26_1_0_V_q0 = quantized_final_outp_105_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_26_1_0_V_q0 = quantized_hidden_sta_105_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_26_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_26_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_26_2_0_V_q0 = quantized_final_outp_106_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_26_2_0_V_q0 = quantized_hidden_sta_106_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_26_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_26_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_26_3_0_V_q0 = quantized_final_outp_107_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_26_3_0_V_q0 = quantized_hidden_sta_107_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_26_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_27_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_27_0_0_V_q0 = quantized_final_outp_108_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_27_0_0_V_q0 = quantized_hidden_sta_108_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_27_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_27_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_27_1_0_V_q0 = quantized_final_outp_109_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_27_1_0_V_q0 = quantized_hidden_sta_109_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_27_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_27_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_27_2_0_V_q0 = quantized_final_outp_110_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_27_2_0_V_q0 = quantized_hidden_sta_110_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_27_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_27_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_27_3_0_V_q0 = quantized_final_outp_111_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_27_3_0_V_q0 = quantized_hidden_sta_111_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_27_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_28_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_28_0_0_V_q0 = quantized_final_outp_112_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_28_0_0_V_q0 = quantized_hidden_sta_112_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_28_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_28_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_28_1_0_V_q0 = quantized_final_outp_113_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_28_1_0_V_q0 = quantized_hidden_sta_113_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_28_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_28_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_28_2_0_V_q0 = quantized_final_outp_114_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_28_2_0_V_q0 = quantized_hidden_sta_114_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_28_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_28_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_28_3_0_V_q0 = quantized_final_outp_115_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_28_3_0_V_q0 = quantized_hidden_sta_115_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_28_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_29_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_29_0_0_V_q0 = quantized_final_outp_116_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_29_0_0_V_q0 = quantized_hidden_sta_116_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_29_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_29_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_29_1_0_V_q0 = quantized_final_outp_117_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_29_1_0_V_q0 = quantized_hidden_sta_117_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_29_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_29_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_29_2_0_V_q0 = quantized_final_outp_118_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_29_2_0_V_q0 = quantized_hidden_sta_118_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_29_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_29_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_29_3_0_V_q0 = quantized_final_outp_119_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_29_3_0_V_q0 = quantized_hidden_sta_119_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_29_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_2_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_2_0_0_V_q0 = quantized_final_outp_8_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_2_0_0_V_q0 = quantized_hidden_sta_8_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_2_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_2_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_2_1_0_V_q0 = quantized_final_outp_9_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_2_1_0_V_q0 = quantized_hidden_sta_9_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_2_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_2_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_2_2_0_V_q0 = quantized_final_outp_10_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_2_2_0_V_q0 = quantized_hidden_sta_10_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_2_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_2_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_2_3_0_V_q0 = quantized_final_outp_11_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_2_3_0_V_q0 = quantized_hidden_sta_11_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_2_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_30_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_30_0_0_V_q0 = quantized_final_outp_120_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_30_0_0_V_q0 = quantized_hidden_sta_120_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_30_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_30_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_30_1_0_V_q0 = quantized_final_outp_121_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_30_1_0_V_q0 = quantized_hidden_sta_121_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_30_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_30_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_30_2_0_V_q0 = quantized_final_outp_122_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_30_2_0_V_q0 = quantized_hidden_sta_122_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_30_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_30_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_30_3_0_V_q0 = quantized_final_outp_123_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_30_3_0_V_q0 = quantized_hidden_sta_123_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_30_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_31_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_31_0_0_V_q0 = quantized_final_outp_124_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_31_0_0_V_q0 = quantized_hidden_sta_124_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_31_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_31_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_31_1_0_V_q0 = quantized_final_outp_125_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_31_1_0_V_q0 = quantized_hidden_sta_125_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_31_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_31_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_31_2_0_V_q0 = quantized_final_outp_126_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_31_2_0_V_q0 = quantized_hidden_sta_126_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_31_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_31_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_31_3_0_V_q0 = quantized_final_outp_127_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_31_3_0_V_q0 = quantized_hidden_sta_127_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_31_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_32_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_32_0_0_V_q0 = quantized_final_outp_128_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_32_0_0_V_q0 = quantized_hidden_sta_128_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_32_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_32_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_32_1_0_V_q0 = quantized_final_outp_129_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_32_1_0_V_q0 = quantized_hidden_sta_129_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_32_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_32_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_32_2_0_V_q0 = quantized_final_outp_130_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_32_2_0_V_q0 = quantized_hidden_sta_130_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_32_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_32_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_32_3_0_V_q0 = quantized_final_outp_131_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_32_3_0_V_q0 = quantized_hidden_sta_131_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_32_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_33_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_33_0_0_V_q0 = quantized_final_outp_132_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_33_0_0_V_q0 = quantized_hidden_sta_132_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_33_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_33_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_33_1_0_V_q0 = quantized_final_outp_133_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_33_1_0_V_q0 = quantized_hidden_sta_133_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_33_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_33_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_33_2_0_V_q0 = quantized_final_outp_134_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_33_2_0_V_q0 = quantized_hidden_sta_134_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_33_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_33_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_33_3_0_V_q0 = quantized_final_outp_135_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_33_3_0_V_q0 = quantized_hidden_sta_135_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_33_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_34_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_34_0_0_V_q0 = quantized_final_outp_136_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_34_0_0_V_q0 = quantized_hidden_sta_136_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_34_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_34_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_34_1_0_V_q0 = quantized_final_outp_137_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_34_1_0_V_q0 = quantized_hidden_sta_137_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_34_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_34_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_34_2_0_V_q0 = quantized_final_outp_138_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_34_2_0_V_q0 = quantized_hidden_sta_138_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_34_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_34_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_34_3_0_V_q0 = quantized_final_outp_139_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_34_3_0_V_q0 = quantized_hidden_sta_139_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_34_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_35_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_35_0_0_V_q0 = quantized_final_outp_140_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_35_0_0_V_q0 = quantized_hidden_sta_140_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_35_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_35_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_35_1_0_V_q0 = quantized_final_outp_141_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_35_1_0_V_q0 = quantized_hidden_sta_141_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_35_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_35_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_35_2_0_V_q0 = quantized_final_outp_142_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_35_2_0_V_q0 = quantized_hidden_sta_142_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_35_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_35_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_35_3_0_V_q0 = quantized_final_outp_143_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_35_3_0_V_q0 = quantized_hidden_sta_143_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_35_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_36_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_36_0_0_V_q0 = quantized_final_outp_144_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_36_0_0_V_q0 = quantized_hidden_sta_144_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_36_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_36_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_36_1_0_V_q0 = quantized_final_outp_145_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_36_1_0_V_q0 = quantized_hidden_sta_145_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_36_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_36_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_36_2_0_V_q0 = quantized_final_outp_146_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_36_2_0_V_q0 = quantized_hidden_sta_146_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_36_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_36_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_36_3_0_V_q0 = quantized_final_outp_147_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_36_3_0_V_q0 = quantized_hidden_sta_147_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_36_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_37_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_37_0_0_V_q0 = quantized_final_outp_148_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_37_0_0_V_q0 = quantized_hidden_sta_148_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_37_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_37_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_37_1_0_V_q0 = quantized_final_outp_149_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_37_1_0_V_q0 = quantized_hidden_sta_149_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_37_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_37_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_37_2_0_V_q0 = quantized_final_outp_150_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_37_2_0_V_q0 = quantized_hidden_sta_150_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_37_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_37_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_37_3_0_V_q0 = quantized_final_outp_151_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_37_3_0_V_q0 = quantized_hidden_sta_151_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_37_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_38_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_38_0_0_V_q0 = quantized_final_outp_152_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_38_0_0_V_q0 = quantized_hidden_sta_152_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_38_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_38_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_38_1_0_V_q0 = quantized_final_outp_153_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_38_1_0_V_q0 = quantized_hidden_sta_153_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_38_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_38_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_38_2_0_V_q0 = quantized_final_outp_154_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_38_2_0_V_q0 = quantized_hidden_sta_154_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_38_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_38_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_38_3_0_V_q0 = quantized_final_outp_155_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_38_3_0_V_q0 = quantized_hidden_sta_155_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_38_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_39_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_39_0_0_V_q0 = quantized_final_outp_156_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_39_0_0_V_q0 = quantized_hidden_sta_156_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_39_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_39_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_39_1_0_V_q0 = quantized_final_outp_157_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_39_1_0_V_q0 = quantized_hidden_sta_157_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_39_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_39_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_39_2_0_V_q0 = quantized_final_outp_158_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_39_2_0_V_q0 = quantized_hidden_sta_158_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_39_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_39_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_39_3_0_V_q0 = quantized_final_outp_159_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_39_3_0_V_q0 = quantized_hidden_sta_159_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_39_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_3_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_3_0_0_V_q0 = quantized_final_outp_12_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_3_0_0_V_q0 = quantized_hidden_sta_12_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_3_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_3_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_3_1_0_V_q0 = quantized_final_outp_13_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_3_1_0_V_q0 = quantized_hidden_sta_13_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_3_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_3_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_3_2_0_V_q0 = quantized_final_outp_14_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_3_2_0_V_q0 = quantized_hidden_sta_14_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_3_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_3_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_3_3_0_V_q0 = quantized_final_outp_15_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_3_3_0_V_q0 = quantized_hidden_sta_15_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_3_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_40_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_40_0_0_V_q0 = quantized_final_outp_160_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_40_0_0_V_q0 = quantized_hidden_sta_160_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_40_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_40_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_40_1_0_V_q0 = quantized_final_outp_161_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_40_1_0_V_q0 = quantized_hidden_sta_161_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_40_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_40_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_40_2_0_V_q0 = quantized_final_outp_162_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_40_2_0_V_q0 = quantized_hidden_sta_162_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_40_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_40_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_40_3_0_V_q0 = quantized_final_outp_163_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_40_3_0_V_q0 = quantized_hidden_sta_163_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_40_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_41_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_41_0_0_V_q0 = quantized_final_outp_164_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_41_0_0_V_q0 = quantized_hidden_sta_164_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_41_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_41_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_41_1_0_V_q0 = quantized_final_outp_165_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_41_1_0_V_q0 = quantized_hidden_sta_165_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_41_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_41_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_41_2_0_V_q0 = quantized_final_outp_166_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_41_2_0_V_q0 = quantized_hidden_sta_166_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_41_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_41_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_41_3_0_V_q0 = quantized_final_outp_167_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_41_3_0_V_q0 = quantized_hidden_sta_167_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_41_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_42_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_42_0_0_V_q0 = quantized_final_outp_168_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_42_0_0_V_q0 = quantized_hidden_sta_168_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_42_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_42_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_42_1_0_V_q0 = quantized_final_outp_169_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_42_1_0_V_q0 = quantized_hidden_sta_169_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_42_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_42_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_42_2_0_V_q0 = quantized_final_outp_170_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_42_2_0_V_q0 = quantized_hidden_sta_170_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_42_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_42_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_42_3_0_V_q0 = quantized_final_outp_171_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_42_3_0_V_q0 = quantized_hidden_sta_171_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_42_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_43_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_43_0_0_V_q0 = quantized_final_outp_172_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_43_0_0_V_q0 = quantized_hidden_sta_172_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_43_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_43_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_43_1_0_V_q0 = quantized_final_outp_173_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_43_1_0_V_q0 = quantized_hidden_sta_173_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_43_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_43_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_43_2_0_V_q0 = quantized_final_outp_174_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_43_2_0_V_q0 = quantized_hidden_sta_174_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_43_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_43_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_43_3_0_V_q0 = quantized_final_outp_175_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_43_3_0_V_q0 = quantized_hidden_sta_175_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_43_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_44_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_44_0_0_V_q0 = quantized_final_outp_176_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_44_0_0_V_q0 = quantized_hidden_sta_176_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_44_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_44_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_44_1_0_V_q0 = quantized_final_outp_177_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_44_1_0_V_q0 = quantized_hidden_sta_177_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_44_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_44_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_44_2_0_V_q0 = quantized_final_outp_178_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_44_2_0_V_q0 = quantized_hidden_sta_178_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_44_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_44_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_44_3_0_V_q0 = quantized_final_outp_179_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_44_3_0_V_q0 = quantized_hidden_sta_179_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_44_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_45_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_45_0_0_V_q0 = quantized_final_outp_180_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_45_0_0_V_q0 = quantized_hidden_sta_180_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_45_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_45_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_45_1_0_V_q0 = quantized_final_outp_181_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_45_1_0_V_q0 = quantized_hidden_sta_181_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_45_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_45_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_45_2_0_V_q0 = quantized_final_outp_182_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_45_2_0_V_q0 = quantized_hidden_sta_182_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_45_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_45_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_45_3_0_V_q0 = quantized_final_outp_183_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_45_3_0_V_q0 = quantized_hidden_sta_183_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_45_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_46_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_46_0_0_V_q0 = quantized_final_outp_184_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_46_0_0_V_q0 = quantized_hidden_sta_184_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_46_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_46_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_46_1_0_V_q0 = quantized_final_outp_185_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_46_1_0_V_q0 = quantized_hidden_sta_185_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_46_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_46_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_46_2_0_V_q0 = quantized_final_outp_186_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_46_2_0_V_q0 = quantized_hidden_sta_186_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_46_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_46_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_46_3_0_V_q0 = quantized_final_outp_187_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_46_3_0_V_q0 = quantized_hidden_sta_187_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_46_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_47_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_47_0_0_V_q0 = quantized_final_outp_188_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_47_0_0_V_q0 = quantized_hidden_sta_188_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_47_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_47_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_47_1_0_V_q0 = quantized_final_outp_189_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_47_1_0_V_q0 = quantized_hidden_sta_189_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_47_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_47_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_47_2_0_V_q0 = quantized_final_outp_190_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_47_2_0_V_q0 = quantized_hidden_sta_190_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_47_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_47_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_47_3_0_V_q0 = quantized_final_outp_191_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_47_3_0_V_q0 = quantized_hidden_sta_191_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_47_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_48_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_48_0_0_V_q0 = quantized_final_outp_192_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_48_0_0_V_q0 = quantized_hidden_sta_192_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_48_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_48_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_48_1_0_V_q0 = quantized_final_outp_193_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_48_1_0_V_q0 = quantized_hidden_sta_193_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_48_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_48_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_48_2_0_V_q0 = quantized_final_outp_194_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_48_2_0_V_q0 = quantized_hidden_sta_194_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_48_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_48_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_48_3_0_V_q0 = quantized_final_outp_195_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_48_3_0_V_q0 = quantized_hidden_sta_195_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_48_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_49_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_49_0_0_V_q0 = quantized_final_outp_196_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_49_0_0_V_q0 = quantized_hidden_sta_196_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_49_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_49_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_49_1_0_V_q0 = quantized_final_outp_197_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_49_1_0_V_q0 = quantized_hidden_sta_197_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_49_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_49_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_49_2_0_V_q0 = quantized_final_outp_198_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_49_2_0_V_q0 = quantized_hidden_sta_198_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_49_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_49_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_49_3_0_V_q0 = quantized_final_outp_199_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_49_3_0_V_q0 = quantized_hidden_sta_199_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_49_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_4_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_4_0_0_V_q0 = quantized_final_outp_16_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_4_0_0_V_q0 = quantized_hidden_sta_16_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_4_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_4_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_4_1_0_V_q0 = quantized_final_outp_17_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_4_1_0_V_q0 = quantized_hidden_sta_17_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_4_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_4_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_4_2_0_V_q0 = quantized_final_outp_18_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_4_2_0_V_q0 = quantized_hidden_sta_18_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_4_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_4_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_4_3_0_V_q0 = quantized_final_outp_19_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_4_3_0_V_q0 = quantized_hidden_sta_19_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_4_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_50_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_50_0_0_V_q0 = quantized_final_outp_200_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_50_0_0_V_q0 = quantized_hidden_sta_200_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_50_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_50_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_50_1_0_V_q0 = quantized_final_outp_201_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_50_1_0_V_q0 = quantized_hidden_sta_201_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_50_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_50_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_50_2_0_V_q0 = quantized_final_outp_202_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_50_2_0_V_q0 = quantized_hidden_sta_202_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_50_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_50_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_50_3_0_V_q0 = quantized_final_outp_203_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_50_3_0_V_q0 = quantized_hidden_sta_203_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_50_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_51_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_51_0_0_V_q0 = quantized_final_outp_204_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_51_0_0_V_q0 = quantized_hidden_sta_204_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_51_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_51_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_51_1_0_V_q0 = quantized_final_outp_205_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_51_1_0_V_q0 = quantized_hidden_sta_205_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_51_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_51_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_51_2_0_V_q0 = quantized_final_outp_206_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_51_2_0_V_q0 = quantized_hidden_sta_206_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_51_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_51_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_51_3_0_V_q0 = quantized_final_outp_207_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_51_3_0_V_q0 = quantized_hidden_sta_207_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_51_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_52_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_52_0_0_V_q0 = quantized_final_outp_208_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_52_0_0_V_q0 = quantized_hidden_sta_208_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_52_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_52_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_52_1_0_V_q0 = quantized_final_outp_209_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_52_1_0_V_q0 = quantized_hidden_sta_209_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_52_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_52_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_52_2_0_V_q0 = quantized_final_outp_210_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_52_2_0_V_q0 = quantized_hidden_sta_210_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_52_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_52_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_52_3_0_V_q0 = quantized_final_outp_211_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_52_3_0_V_q0 = quantized_hidden_sta_211_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_52_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_53_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_53_0_0_V_q0 = quantized_final_outp_212_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_53_0_0_V_q0 = quantized_hidden_sta_212_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_53_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_53_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_53_1_0_V_q0 = quantized_final_outp_213_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_53_1_0_V_q0 = quantized_hidden_sta_213_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_53_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_53_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_53_2_0_V_q0 = quantized_final_outp_214_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_53_2_0_V_q0 = quantized_hidden_sta_214_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_53_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_53_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_53_3_0_V_q0 = quantized_final_outp_215_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_53_3_0_V_q0 = quantized_hidden_sta_215_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_53_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_54_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_54_0_0_V_q0 = quantized_final_outp_216_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_54_0_0_V_q0 = quantized_hidden_sta_216_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_54_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_54_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_54_1_0_V_q0 = quantized_final_outp_217_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_54_1_0_V_q0 = quantized_hidden_sta_217_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_54_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_54_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_54_2_0_V_q0 = quantized_final_outp_218_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_54_2_0_V_q0 = quantized_hidden_sta_218_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_54_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_54_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_54_3_0_V_q0 = quantized_final_outp_219_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_54_3_0_V_q0 = quantized_hidden_sta_219_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_54_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_55_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_55_0_0_V_q0 = quantized_final_outp_220_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_55_0_0_V_q0 = quantized_hidden_sta_220_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_55_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_55_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_55_1_0_V_q0 = quantized_final_outp_221_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_55_1_0_V_q0 = quantized_hidden_sta_221_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_55_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_55_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_55_2_0_V_q0 = quantized_final_outp_222_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_55_2_0_V_q0 = quantized_hidden_sta_222_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_55_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_55_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_55_3_0_V_q0 = quantized_final_outp_223_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_55_3_0_V_q0 = quantized_hidden_sta_223_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_55_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_56_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_56_0_0_V_q0 = quantized_final_outp_224_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_56_0_0_V_q0 = quantized_hidden_sta_224_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_56_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_56_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_56_1_0_V_q0 = quantized_final_outp_225_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_56_1_0_V_q0 = quantized_hidden_sta_225_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_56_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_56_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_56_2_0_V_q0 = quantized_final_outp_226_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_56_2_0_V_q0 = quantized_hidden_sta_226_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_56_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_56_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_56_3_0_V_q0 = quantized_final_outp_227_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_56_3_0_V_q0 = quantized_hidden_sta_227_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_56_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_57_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_57_0_0_V_q0 = quantized_final_outp_228_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_57_0_0_V_q0 = quantized_hidden_sta_228_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_57_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_57_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_57_1_0_V_q0 = quantized_final_outp_229_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_57_1_0_V_q0 = quantized_hidden_sta_229_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_57_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_57_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_57_2_0_V_q0 = quantized_final_outp_230_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_57_2_0_V_q0 = quantized_hidden_sta_230_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_57_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_57_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_57_3_0_V_q0 = quantized_final_outp_231_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_57_3_0_V_q0 = quantized_hidden_sta_231_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_57_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_58_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_58_0_0_V_q0 = quantized_final_outp_232_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_58_0_0_V_q0 = quantized_hidden_sta_232_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_58_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_58_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_58_1_0_V_q0 = quantized_final_outp_233_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_58_1_0_V_q0 = quantized_hidden_sta_233_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_58_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_58_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_58_2_0_V_q0 = quantized_final_outp_234_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_58_2_0_V_q0 = quantized_hidden_sta_234_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_58_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_58_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_58_3_0_V_q0 = quantized_final_outp_235_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_58_3_0_V_q0 = quantized_hidden_sta_235_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_58_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_59_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_59_0_0_V_q0 = quantized_final_outp_236_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_59_0_0_V_q0 = quantized_hidden_sta_236_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_59_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_59_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_59_1_0_V_q0 = quantized_final_outp_237_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_59_1_0_V_q0 = quantized_hidden_sta_237_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_59_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_59_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_59_2_0_V_q0 = quantized_final_outp_238_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_59_2_0_V_q0 = quantized_hidden_sta_238_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_59_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_59_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_59_3_0_V_q0 = quantized_final_outp_239_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_59_3_0_V_q0 = quantized_hidden_sta_239_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_59_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_5_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_5_0_0_V_q0 = quantized_final_outp_20_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_5_0_0_V_q0 = quantized_hidden_sta_20_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_5_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_5_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_5_1_0_V_q0 = quantized_final_outp_21_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_5_1_0_V_q0 = quantized_hidden_sta_21_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_5_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_5_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_5_2_0_V_q0 = quantized_final_outp_22_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_5_2_0_V_q0 = quantized_hidden_sta_22_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_5_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_5_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_5_3_0_V_q0 = quantized_final_outp_23_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_5_3_0_V_q0 = quantized_hidden_sta_23_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_5_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_60_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_60_0_0_V_q0 = quantized_final_outp_240_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_60_0_0_V_q0 = quantized_hidden_sta_240_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_60_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_60_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_60_1_0_V_q0 = quantized_final_outp_241_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_60_1_0_V_q0 = quantized_hidden_sta_241_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_60_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_60_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_60_2_0_V_q0 = quantized_final_outp_242_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_60_2_0_V_q0 = quantized_hidden_sta_242_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_60_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_60_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_60_3_0_V_q0 = quantized_final_outp_243_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_60_3_0_V_q0 = quantized_hidden_sta_243_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_60_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_61_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_61_0_0_V_q0 = quantized_final_outp_244_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_61_0_0_V_q0 = quantized_hidden_sta_244_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_61_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_61_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_61_1_0_V_q0 = quantized_final_outp_245_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_61_1_0_V_q0 = quantized_hidden_sta_245_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_61_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_61_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_61_2_0_V_q0 = quantized_final_outp_246_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_61_2_0_V_q0 = quantized_hidden_sta_246_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_61_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_61_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_61_3_0_V_q0 = quantized_final_outp_247_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_61_3_0_V_q0 = quantized_hidden_sta_247_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_61_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_62_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_62_0_0_V_q0 = quantized_final_outp_248_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_62_0_0_V_q0 = quantized_hidden_sta_248_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_62_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_62_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_62_1_0_V_q0 = quantized_final_outp_249_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_62_1_0_V_q0 = quantized_hidden_sta_249_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_62_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_62_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_62_2_0_V_q0 = quantized_final_outp_250_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_62_2_0_V_q0 = quantized_hidden_sta_250_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_62_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_62_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_62_3_0_V_q0 = quantized_final_outp_251_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_62_3_0_V_q0 = quantized_hidden_sta_251_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_62_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_63_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_63_0_0_V_q0 = quantized_final_outp_252_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_63_0_0_V_q0 = quantized_hidden_sta_252_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_63_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_63_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_63_1_0_V_q0 = quantized_final_outp_253_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_63_1_0_V_q0 = quantized_hidden_sta_253_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_63_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_63_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_63_2_0_V_q0 = quantized_final_outp_254_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_63_2_0_V_q0 = quantized_hidden_sta_254_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_63_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_63_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_63_3_0_V_q0 = quantized_final_outp_255_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_63_3_0_V_q0 = quantized_hidden_sta_255_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_63_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_6_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_6_0_0_V_q0 = quantized_final_outp_24_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_6_0_0_V_q0 = quantized_hidden_sta_24_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_6_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_6_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_6_1_0_V_q0 = quantized_final_outp_25_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_6_1_0_V_q0 = quantized_hidden_sta_25_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_6_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_6_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_6_2_0_V_q0 = quantized_final_outp_26_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_6_2_0_V_q0 = quantized_hidden_sta_26_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_6_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_6_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_6_3_0_V_q0 = quantized_final_outp_27_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_6_3_0_V_q0 = quantized_hidden_sta_27_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_6_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_7_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_7_0_0_V_q0 = quantized_final_outp_28_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_7_0_0_V_q0 = quantized_hidden_sta_28_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_7_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_7_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_7_1_0_V_q0 = quantized_final_outp_29_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_7_1_0_V_q0 = quantized_hidden_sta_29_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_7_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_7_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_7_2_0_V_q0 = quantized_final_outp_30_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_7_2_0_V_q0 = quantized_hidden_sta_30_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_7_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_7_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_7_3_0_V_q0 = quantized_final_outp_31_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_7_3_0_V_q0 = quantized_hidden_sta_31_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_7_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_8_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_8_0_0_V_q0 = quantized_final_outp_32_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_8_0_0_V_q0 = quantized_hidden_sta_32_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_8_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_8_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_8_1_0_V_q0 = quantized_final_outp_33_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_8_1_0_V_q0 = quantized_hidden_sta_33_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_8_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_8_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_8_2_0_V_q0 = quantized_final_outp_34_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_8_2_0_V_q0 = quantized_hidden_sta_34_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_8_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_8_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_8_3_0_V_q0 = quantized_final_outp_35_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_8_3_0_V_q0 = quantized_hidden_sta_35_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_8_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_9_0_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_9_0_0_V_q0 = quantized_final_outp_36_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_9_0_0_V_q0 = quantized_hidden_sta_36_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_9_0_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_9_1_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_9_1_0_V_q0 = quantized_final_outp_37_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_9_1_0_V_q0 = quantized_hidden_sta_37_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_9_1_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_9_2_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_9_2_0_V_q0 = quantized_final_outp_38_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_9_2_0_V_q0 = quantized_hidden_sta_38_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_9_2_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_input_9_3_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_input_9_3_0_V_q0 = quantized_final_outp_39_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        grp_linear_forward_no_mu_fu_3341_input_9_3_0_V_q0 = quantized_hidden_sta_39_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_input_9_3_0_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_output_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_output_0_V_q0 = final_output_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_output_0_V_q0 = v_proj_re_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_output_0_V_q0 = k_proj_re_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_output_0_V_q0 = q_proj_re_0_V_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_output_0_V_q0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_0_q0 = o_weights_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_0_q0 = v_weights_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_0_q0 = k_weights_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_0_q0 = q_weights_0_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_0_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_10_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_10_q0 = o_weights_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_10_q0 = v_weights_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_10_q0 = k_weights_10_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_10_q0 = q_weights_10_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_10_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_11_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_11_q0 = o_weights_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_11_q0 = v_weights_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_11_q0 = k_weights_11_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_11_q0 = q_weights_11_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_11_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_12_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_12_q0 = o_weights_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_12_q0 = v_weights_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_12_q0 = k_weights_12_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_12_q0 = q_weights_12_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_12_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_13_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_13_q0 = o_weights_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_13_q0 = v_weights_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_13_q0 = k_weights_13_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_13_q0 = q_weights_13_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_13_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_14_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_14_q0 = o_weights_14_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_14_q0 = v_weights_14_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_14_q0 = k_weights_14_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_14_q0 = q_weights_14_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_14_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_15_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_15_q0 = o_weights_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_15_q0 = v_weights_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_15_q0 = k_weights_15_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_15_q0 = q_weights_15_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_15_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_16_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_16_q0 = o_weights_16_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_16_q0 = v_weights_16_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_16_q0 = k_weights_16_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_16_q0 = q_weights_16_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_16_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_17_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_17_q0 = o_weights_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_17_q0 = v_weights_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_17_q0 = k_weights_17_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_17_q0 = q_weights_17_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_17_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_18_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_18_q0 = o_weights_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_18_q0 = v_weights_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_18_q0 = k_weights_18_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_18_q0 = q_weights_18_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_18_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_19_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_19_q0 = o_weights_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_19_q0 = v_weights_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_19_q0 = k_weights_19_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_19_q0 = q_weights_19_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_19_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_1_q0 = o_weights_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_1_q0 = v_weights_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_1_q0 = k_weights_1_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_1_q0 = q_weights_1_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_1_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_20_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_20_q0 = o_weights_20_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_20_q0 = v_weights_20_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_20_q0 = k_weights_20_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_20_q0 = q_weights_20_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_20_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_21_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_21_q0 = o_weights_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_21_q0 = v_weights_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_21_q0 = k_weights_21_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_21_q0 = q_weights_21_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_21_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_22_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_22_q0 = o_weights_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_22_q0 = v_weights_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_22_q0 = k_weights_22_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_22_q0 = q_weights_22_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_22_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_23_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_23_q0 = o_weights_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_23_q0 = v_weights_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_23_q0 = k_weights_23_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_23_q0 = q_weights_23_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_23_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_24_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_24_q0 = o_weights_24_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_24_q0 = v_weights_24_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_24_q0 = k_weights_24_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_24_q0 = q_weights_24_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_24_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_25_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_25_q0 = o_weights_25_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_25_q0 = v_weights_25_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_25_q0 = k_weights_25_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_25_q0 = q_weights_25_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_25_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_26_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_26_q0 = o_weights_26_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_26_q0 = v_weights_26_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_26_q0 = k_weights_26_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_26_q0 = q_weights_26_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_26_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_27_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_27_q0 = o_weights_27_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_27_q0 = v_weights_27_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_27_q0 = k_weights_27_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_27_q0 = q_weights_27_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_27_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_28_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_28_q0 = o_weights_28_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_28_q0 = v_weights_28_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_28_q0 = k_weights_28_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_28_q0 = q_weights_28_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_28_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_29_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_29_q0 = o_weights_29_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_29_q0 = v_weights_29_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_29_q0 = k_weights_29_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_29_q0 = q_weights_29_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_29_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_2_q0 = o_weights_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_2_q0 = v_weights_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_2_q0 = k_weights_2_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_2_q0 = q_weights_2_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_2_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_30_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_30_q0 = o_weights_30_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_30_q0 = v_weights_30_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_30_q0 = k_weights_30_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_30_q0 = q_weights_30_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_30_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_31_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_31_q0 = o_weights_31_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_31_q0 = v_weights_31_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_31_q0 = k_weights_31_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_31_q0 = q_weights_31_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_31_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_32_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_32_q0 = o_weights_32_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_32_q0 = v_weights_32_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_32_q0 = k_weights_32_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_32_q0 = q_weights_32_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_32_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_33_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_33_q0 = o_weights_33_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_33_q0 = v_weights_33_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_33_q0 = k_weights_33_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_33_q0 = q_weights_33_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_33_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_34_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_34_q0 = o_weights_34_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_34_q0 = v_weights_34_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_34_q0 = k_weights_34_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_34_q0 = q_weights_34_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_34_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_35_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_35_q0 = o_weights_35_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_35_q0 = v_weights_35_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_35_q0 = k_weights_35_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_35_q0 = q_weights_35_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_35_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_36_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_36_q0 = o_weights_36_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_36_q0 = v_weights_36_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_36_q0 = k_weights_36_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_36_q0 = q_weights_36_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_36_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_37_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_37_q0 = o_weights_37_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_37_q0 = v_weights_37_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_37_q0 = k_weights_37_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_37_q0 = q_weights_37_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_37_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_38_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_38_q0 = o_weights_38_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_38_q0 = v_weights_38_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_38_q0 = k_weights_38_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_38_q0 = q_weights_38_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_38_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_39_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_39_q0 = o_weights_39_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_39_q0 = v_weights_39_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_39_q0 = k_weights_39_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_39_q0 = q_weights_39_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_39_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_3_q0 = o_weights_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_3_q0 = v_weights_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_3_q0 = k_weights_3_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_3_q0 = q_weights_3_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_3_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_40_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_40_q0 = o_weights_40_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_40_q0 = v_weights_40_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_40_q0 = k_weights_40_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_40_q0 = q_weights_40_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_40_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_41_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_41_q0 = o_weights_41_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_41_q0 = v_weights_41_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_41_q0 = k_weights_41_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_41_q0 = q_weights_41_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_41_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_42_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_42_q0 = o_weights_42_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_42_q0 = v_weights_42_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_42_q0 = k_weights_42_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_42_q0 = q_weights_42_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_42_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_43_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_43_q0 = o_weights_43_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_43_q0 = v_weights_43_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_43_q0 = k_weights_43_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_43_q0 = q_weights_43_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_43_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_44_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_44_q0 = o_weights_44_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_44_q0 = v_weights_44_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_44_q0 = k_weights_44_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_44_q0 = q_weights_44_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_44_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_45_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_45_q0 = o_weights_45_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_45_q0 = v_weights_45_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_45_q0 = k_weights_45_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_45_q0 = q_weights_45_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_45_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_46_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_46_q0 = o_weights_46_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_46_q0 = v_weights_46_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_46_q0 = k_weights_46_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_46_q0 = q_weights_46_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_46_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_47_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_47_q0 = o_weights_47_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_47_q0 = v_weights_47_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_47_q0 = k_weights_47_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_47_q0 = q_weights_47_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_47_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_48_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_48_q0 = o_weights_48_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_48_q0 = v_weights_48_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_48_q0 = k_weights_48_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_48_q0 = q_weights_48_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_48_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_49_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_49_q0 = o_weights_49_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_49_q0 = v_weights_49_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_49_q0 = k_weights_49_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_49_q0 = q_weights_49_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_49_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_4_q0 = o_weights_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_4_q0 = v_weights_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_4_q0 = k_weights_4_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_4_q0 = q_weights_4_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_4_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_50_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_50_q0 = o_weights_50_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_50_q0 = v_weights_50_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_50_q0 = k_weights_50_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_50_q0 = q_weights_50_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_50_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_51_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_51_q0 = o_weights_51_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_51_q0 = v_weights_51_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_51_q0 = k_weights_51_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_51_q0 = q_weights_51_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_51_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_52_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_52_q0 = o_weights_52_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_52_q0 = v_weights_52_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_52_q0 = k_weights_52_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_52_q0 = q_weights_52_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_52_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_53_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_53_q0 = o_weights_53_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_53_q0 = v_weights_53_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_53_q0 = k_weights_53_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_53_q0 = q_weights_53_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_53_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_54_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_54_q0 = o_weights_54_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_54_q0 = v_weights_54_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_54_q0 = k_weights_54_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_54_q0 = q_weights_54_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_54_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_55_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_55_q0 = o_weights_55_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_55_q0 = v_weights_55_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_55_q0 = k_weights_55_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_55_q0 = q_weights_55_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_55_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_56_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_56_q0 = o_weights_56_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_56_q0 = v_weights_56_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_56_q0 = k_weights_56_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_56_q0 = q_weights_56_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_56_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_57_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_57_q0 = o_weights_57_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_57_q0 = v_weights_57_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_57_q0 = k_weights_57_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_57_q0 = q_weights_57_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_57_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_58_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_58_q0 = o_weights_58_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_58_q0 = v_weights_58_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_58_q0 = k_weights_58_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_58_q0 = q_weights_58_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_58_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_59_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_59_q0 = o_weights_59_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_59_q0 = v_weights_59_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_59_q0 = k_weights_59_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_59_q0 = q_weights_59_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_59_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_5_q0 = o_weights_5_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_5_q0 = v_weights_5_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_5_q0 = k_weights_5_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_5_q0 = q_weights_5_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_5_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_60_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_60_q0 = o_weights_60_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_60_q0 = v_weights_60_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_60_q0 = k_weights_60_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_60_q0 = q_weights_60_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_60_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_61_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_61_q0 = o_weights_61_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_61_q0 = v_weights_61_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_61_q0 = k_weights_61_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_61_q0 = q_weights_61_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_61_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_62_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_62_q0 = o_weights_62_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_62_q0 = v_weights_62_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_62_q0 = k_weights_62_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_62_q0 = q_weights_62_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_62_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_63_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_63_q0 = o_weights_63_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_63_q0 = v_weights_63_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_63_q0 = k_weights_63_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_63_q0 = q_weights_63_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_63_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_6_q0 = o_weights_6_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_6_q0 = v_weights_6_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_6_q0 = k_weights_6_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_6_q0 = q_weights_6_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_6_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_7_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_7_q0 = o_weights_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_7_q0 = v_weights_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_7_q0 = k_weights_7_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_7_q0 = q_weights_7_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_7_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_8_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_8_q0 = o_weights_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_8_q0 = v_weights_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_8_q0 = k_weights_8_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_8_q0 = q_weights_8_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_8_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_packed_weights_9_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_9_q0 = o_weights_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_9_q0 = v_weights_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_9_q0 = k_weights_9_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_packed_weights_9_q0 = q_weights_9_q0.read();
    } else {
        grp_linear_forward_no_mu_fu_3341_packed_weights_9_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_grp_linear_forward_no_mu_fu_3341_w_scale_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        grp_linear_forward_no_mu_fu_3341_w_scale_V = ap_const_lv26_B1C474;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_linear_forward_no_mu_fu_3341_w_scale_V = ap_const_lv26_AED1D0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_linear_forward_no_mu_fu_3341_w_scale_V = ap_const_lv26_12D593F;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        grp_linear_forward_no_mu_fu_3341_w_scale_V = ap_const_lv26_132AE28;
    } else {
        grp_linear_forward_no_mu_fu_3341_w_scale_V =  (sc_lv<26>) ("XXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_quantize_activation_fu_4088_ap_start() {
    grp_quantize_activation_fu_4088_ap_start = grp_quantize_activation_fu_4088_ap_start_reg.read();
}

void attention::thread_grp_quantize_activation_fu_4088_input_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_quantize_activation_fu_4088_input_0_V_q0 = attn_output_2D_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        grp_quantize_activation_fu_4088_input_0_V_q0 = hidden_states_0_V_q0.read();
    } else {
        grp_quantize_activation_fu_4088_input_0_V_q0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_quantize_activation_fu_4088_input_0_V_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        grp_quantize_activation_fu_4088_input_0_V_q1 = attn_output_2D_0_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        grp_quantize_activation_fu_4088_input_0_V_q1 = hidden_states_0_V_q1.read();
    } else {
        grp_quantize_activation_fu_4088_input_0_V_q1 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_reshape_2D_to_3D_fu_4510_ap_start() {
    grp_reshape_2D_to_3D_fu_4510_ap_start = grp_reshape_2D_to_3D_fu_4510_ap_start_reg.read();
}

void attention::thread_grp_reshape_2D_to_3D_fu_4510_input_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        grp_reshape_2D_to_3D_fu_4510_input_0_V_q0 = v_proj_re_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        grp_reshape_2D_to_3D_fu_4510_input_0_V_q0 = k_proj_re_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_reshape_2D_to_3D_fu_4510_input_0_V_q0 = q_proj_re_0_V_q0.read();
    } else {
        grp_reshape_2D_to_3D_fu_4510_input_0_V_q0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_rms_norm_1536_s_fu_4062_ap_start() {
    grp_rms_norm_1536_s_fu_4062_ap_start = grp_rms_norm_1536_s_fu_4062_ap_start_reg.read();
}

void attention::thread_grp_rms_norm_1536_s_fu_4062_input_0_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_rms_norm_1536_s_fu_4062_input_0_V_q0 = attn_output_2D_0_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_rms_norm_1536_s_fu_4062_input_0_V_q0 = hidden_states_0_V_q0.read();
    } else {
        grp_rms_norm_1536_s_fu_4062_input_0_V_q0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_rms_norm_1536_s_fu_4062_weight_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        grp_rms_norm_1536_s_fu_4062_weight_V_q0 = ln_weight_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_rms_norm_1536_s_fu_4062_weight_V_q0 = ln_weight_in_V_q0.read();
    } else {
        grp_rms_norm_1536_s_fu_4062_weight_V_q0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_grp_softmax_1_16_6_s_fu_4071_ap_start() {
    grp_softmax_1_16_6_s_fu_4071_ap_start = grp_softmax_1_16_6_s_fu_4071_ap_start_reg.read();
}

void attention::thread_grp_transpose_last_two_d_fu_4432_ap_start() {
    grp_transpose_last_two_d_fu_4432_ap_start = grp_transpose_last_two_d_fu_4432_ap_start_reg.read();
}

void attention::thread_h_fu_4546_p2() {
    h_fu_4546_p2 = (!h_0_reg_3297.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h_0_reg_3297.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void attention::thread_hidden_states_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        hidden_states_0_V_address0 = grp_quantize_activation_fu_4088_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        hidden_states_0_V_address0 = grp_rms_norm_1536_s_fu_4062_input_0_V_address0.read();
    } else {
        hidden_states_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_hidden_states_0_V_address1() {
    hidden_states_0_V_address1 = grp_quantize_activation_fu_4088_input_0_V_address1.read();
}

void attention::thread_hidden_states_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        hidden_states_0_V_ce0 = grp_quantize_activation_fu_4088_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        hidden_states_0_V_ce0 = grp_rms_norm_1536_s_fu_4062_input_0_V_ce0.read();
    } else {
        hidden_states_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_hidden_states_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        hidden_states_0_V_ce1 = grp_quantize_activation_fu_4088_input_0_V_ce1.read();
    } else {
        hidden_states_0_V_ce1 = ap_const_logic_0;
    }
}

void attention::thread_hidden_states_0_V_d0() {
    hidden_states_0_V_d0 = grp_rms_norm_1536_s_fu_4062_input_0_V_d0.read();
}

void attention::thread_hidden_states_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        hidden_states_0_V_we0 = grp_rms_norm_1536_s_fu_4062_input_0_V_we0.read();
    } else {
        hidden_states_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_icmp_ln176_fu_4540_p2() {
    icmp_ln176_fu_4540_p2 = (!h_0_reg_3297.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h_0_reg_3297.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln178_fu_4578_p2() {
    icmp_ln178_fu_4578_p2 = (!d_0_0_reg_3308.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(d_0_0_reg_3308.read() == ap_const_lv3_6);
}

void attention::thread_icmp_ln208_fu_4680_p2() {
    icmp_ln208_fu_4680_p2 = (!h106_0_0_reg_3319.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h106_0_0_reg_3319.read() == ap_const_lv5_10);
}

void attention::thread_icmp_ln209_fu_4756_p2() {
    icmp_ln209_fu_4756_p2 = (!d107_0_0_reg_3330.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(d107_0_0_reg_3330.read() == ap_const_lv7_60);
}

void attention::thread_k_cache_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_cache_V_ce0 = grp_cache_update_fu_4501_cache_in_V_ce0.read();
    } else {
        k_cache_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_cache_upd_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_cache_upd_V_address0 = grp_cache_update_fu_4501_cache_out_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_cache_upd_V_address0 = grp_transpose_last_two_d_fu_4432_input_V_address0.read();
    } else {
        k_cache_upd_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void attention::thread_k_cache_upd_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_cache_upd_V_ce0 = grp_cache_update_fu_4501_cache_out_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_cache_upd_V_ce0 = grp_transpose_last_two_d_fu_4432_input_V_ce0.read();
    } else {
        k_cache_upd_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_cache_upd_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_cache_upd_V_we0 = grp_cache_update_fu_4501_cache_out_V_we0.read();
    } else {
        k_cache_upd_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_embed_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_embed_0_V_address0 = grp_cache_update_fu_4501_update_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        k_embed_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_k_0_V_address0.read();
    } else {
        k_embed_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_embed_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        k_embed_0_V_ce0 = grp_cache_update_fu_4501_update_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        k_embed_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_k_0_V_ce0.read();
    } else {
        k_embed_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_embed_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        k_embed_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_k_0_V_we0.read();
    } else {
        k_embed_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        k_proj_0_V_address0 = grp_reshape_2D_to_3D_fu_4510_output_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        k_proj_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_input_k_0_V_address0.read();
    } else {
        k_proj_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_proj_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        k_proj_0_V_ce0 = grp_reshape_2D_to_3D_fu_4510_output_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        k_proj_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_input_k_0_V_ce0.read();
    } else {
        k_proj_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        k_proj_0_V_ce1 = grp_apply_rotary_pos_emb_fu_4357_input_k_0_V_ce1.read();
    } else {
        k_proj_0_V_ce1 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        k_proj_0_V_we0 = grp_reshape_2D_to_3D_fu_4510_output_0_V_we0.read();
    } else {
        k_proj_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_re_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        k_proj_re_0_V_address0 = grp_init_2d_mem_fu_4522_mem_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        k_proj_re_0_V_address0 = grp_reshape_2D_to_3D_fu_4510_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_proj_re_0_V_address0 = grp_linear_forward_no_mu_fu_3341_output_0_V_address0.read();
    } else {
        k_proj_re_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_k_proj_re_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        k_proj_re_0_V_ce0 = grp_init_2d_mem_fu_4522_mem_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        k_proj_re_0_V_ce0 = grp_reshape_2D_to_3D_fu_4510_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_proj_re_0_V_ce0 = grp_linear_forward_no_mu_fu_3341_output_0_V_ce0.read();
    } else {
        k_proj_re_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_re_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        k_proj_re_0_V_d0 = grp_init_2d_mem_fu_4522_mem_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_proj_re_0_V_d0 = grp_linear_forward_no_mu_fu_3341_output_0_V_d0.read();
    } else {
        k_proj_re_0_V_d0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_k_proj_re_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        k_proj_re_0_V_we0 = grp_init_2d_mem_fu_4522_mem_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_proj_re_0_V_we0 = grp_linear_forward_no_mu_fu_3341_output_0_V_we0.read();
    } else {
        k_proj_re_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_0_address0 = grp_transpose_last_two_d_fu_4432_output_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_0_address0 = grp_GEMM_3D_float_fu_3929_input_2_0_V_address0.read();
    } else {
        k_proj_transposed_0_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_0_ce0 = grp_transpose_last_two_d_fu_4432_output_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_0_ce0 = grp_GEMM_3D_float_fu_3929_input_2_0_V_ce0.read();
    } else {
        k_proj_transposed_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_0_we0 = grp_transpose_last_two_d_fu_4432_output_0_V_we0.read();
    } else {
        k_proj_transposed_0_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_10_address0 = grp_transpose_last_two_d_fu_4432_output_10_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_10_address0 = grp_GEMM_3D_float_fu_3929_input_2_10_V_address0.read();
    } else {
        k_proj_transposed_10_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_10_ce0 = grp_transpose_last_two_d_fu_4432_output_10_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_10_ce0 = grp_GEMM_3D_float_fu_3929_input_2_10_V_ce0.read();
    } else {
        k_proj_transposed_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_10_we0 = grp_transpose_last_two_d_fu_4432_output_10_V_we0.read();
    } else {
        k_proj_transposed_10_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_11_address0 = grp_transpose_last_two_d_fu_4432_output_11_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_11_address0 = grp_GEMM_3D_float_fu_3929_input_2_11_V_address0.read();
    } else {
        k_proj_transposed_11_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_11_ce0 = grp_transpose_last_two_d_fu_4432_output_11_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_11_ce0 = grp_GEMM_3D_float_fu_3929_input_2_11_V_ce0.read();
    } else {
        k_proj_transposed_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_11_we0 = grp_transpose_last_two_d_fu_4432_output_11_V_we0.read();
    } else {
        k_proj_transposed_11_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_12_address0 = grp_transpose_last_two_d_fu_4432_output_12_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_12_address0 = grp_GEMM_3D_float_fu_3929_input_2_12_V_address0.read();
    } else {
        k_proj_transposed_12_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_12_ce0 = grp_transpose_last_two_d_fu_4432_output_12_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_12_ce0 = grp_GEMM_3D_float_fu_3929_input_2_12_V_ce0.read();
    } else {
        k_proj_transposed_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_12_we0 = grp_transpose_last_two_d_fu_4432_output_12_V_we0.read();
    } else {
        k_proj_transposed_12_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_13_address0 = grp_transpose_last_two_d_fu_4432_output_13_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_13_address0 = grp_GEMM_3D_float_fu_3929_input_2_13_V_address0.read();
    } else {
        k_proj_transposed_13_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_13_ce0 = grp_transpose_last_two_d_fu_4432_output_13_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_13_ce0 = grp_GEMM_3D_float_fu_3929_input_2_13_V_ce0.read();
    } else {
        k_proj_transposed_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_13_we0 = grp_transpose_last_two_d_fu_4432_output_13_V_we0.read();
    } else {
        k_proj_transposed_13_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_14_address0 = grp_transpose_last_two_d_fu_4432_output_14_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_14_address0 = grp_GEMM_3D_float_fu_3929_input_2_14_V_address0.read();
    } else {
        k_proj_transposed_14_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_14_ce0 = grp_transpose_last_two_d_fu_4432_output_14_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_14_ce0 = grp_GEMM_3D_float_fu_3929_input_2_14_V_ce0.read();
    } else {
        k_proj_transposed_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_14_we0 = grp_transpose_last_two_d_fu_4432_output_14_V_we0.read();
    } else {
        k_proj_transposed_14_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_15_address0 = grp_transpose_last_two_d_fu_4432_output_15_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_15_address0 = grp_GEMM_3D_float_fu_3929_input_2_15_V_address0.read();
    } else {
        k_proj_transposed_15_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_15_ce0 = grp_transpose_last_two_d_fu_4432_output_15_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_15_ce0 = grp_GEMM_3D_float_fu_3929_input_2_15_V_ce0.read();
    } else {
        k_proj_transposed_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_15_we0 = grp_transpose_last_two_d_fu_4432_output_15_V_we0.read();
    } else {
        k_proj_transposed_15_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_16_address0 = grp_transpose_last_two_d_fu_4432_output_16_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_16_address0 = grp_GEMM_3D_float_fu_3929_input_2_16_V_address0.read();
    } else {
        k_proj_transposed_16_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_16_ce0 = grp_transpose_last_two_d_fu_4432_output_16_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_16_ce0 = grp_GEMM_3D_float_fu_3929_input_2_16_V_ce0.read();
    } else {
        k_proj_transposed_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_16_we0 = grp_transpose_last_two_d_fu_4432_output_16_V_we0.read();
    } else {
        k_proj_transposed_16_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_17_address0 = grp_transpose_last_two_d_fu_4432_output_17_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_17_address0 = grp_GEMM_3D_float_fu_3929_input_2_17_V_address0.read();
    } else {
        k_proj_transposed_17_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_17_ce0 = grp_transpose_last_two_d_fu_4432_output_17_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_17_ce0 = grp_GEMM_3D_float_fu_3929_input_2_17_V_ce0.read();
    } else {
        k_proj_transposed_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_17_we0 = grp_transpose_last_two_d_fu_4432_output_17_V_we0.read();
    } else {
        k_proj_transposed_17_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_18_address0 = grp_transpose_last_two_d_fu_4432_output_18_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_18_address0 = grp_GEMM_3D_float_fu_3929_input_2_18_V_address0.read();
    } else {
        k_proj_transposed_18_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_18_ce0 = grp_transpose_last_two_d_fu_4432_output_18_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_18_ce0 = grp_GEMM_3D_float_fu_3929_input_2_18_V_ce0.read();
    } else {
        k_proj_transposed_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_18_we0 = grp_transpose_last_two_d_fu_4432_output_18_V_we0.read();
    } else {
        k_proj_transposed_18_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_19_address0 = grp_transpose_last_two_d_fu_4432_output_19_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_19_address0 = grp_GEMM_3D_float_fu_3929_input_2_19_V_address0.read();
    } else {
        k_proj_transposed_19_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_19_ce0 = grp_transpose_last_two_d_fu_4432_output_19_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_19_ce0 = grp_GEMM_3D_float_fu_3929_input_2_19_V_ce0.read();
    } else {
        k_proj_transposed_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_19_we0 = grp_transpose_last_two_d_fu_4432_output_19_V_we0.read();
    } else {
        k_proj_transposed_19_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_1_address0 = grp_transpose_last_two_d_fu_4432_output_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_1_address0 = grp_GEMM_3D_float_fu_3929_input_2_1_V_address0.read();
    } else {
        k_proj_transposed_1_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_1_ce0 = grp_transpose_last_two_d_fu_4432_output_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_1_ce0 = grp_GEMM_3D_float_fu_3929_input_2_1_V_ce0.read();
    } else {
        k_proj_transposed_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_1_we0 = grp_transpose_last_two_d_fu_4432_output_1_V_we0.read();
    } else {
        k_proj_transposed_1_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_20_address0 = grp_transpose_last_two_d_fu_4432_output_20_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_20_address0 = grp_GEMM_3D_float_fu_3929_input_2_20_V_address0.read();
    } else {
        k_proj_transposed_20_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_20_ce0 = grp_transpose_last_two_d_fu_4432_output_20_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_20_ce0 = grp_GEMM_3D_float_fu_3929_input_2_20_V_ce0.read();
    } else {
        k_proj_transposed_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_20_we0 = grp_transpose_last_two_d_fu_4432_output_20_V_we0.read();
    } else {
        k_proj_transposed_20_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_21_address0 = grp_transpose_last_two_d_fu_4432_output_21_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_21_address0 = grp_GEMM_3D_float_fu_3929_input_2_21_V_address0.read();
    } else {
        k_proj_transposed_21_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_21_ce0 = grp_transpose_last_two_d_fu_4432_output_21_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_21_ce0 = grp_GEMM_3D_float_fu_3929_input_2_21_V_ce0.read();
    } else {
        k_proj_transposed_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_21_we0 = grp_transpose_last_two_d_fu_4432_output_21_V_we0.read();
    } else {
        k_proj_transposed_21_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_22_address0 = grp_transpose_last_two_d_fu_4432_output_22_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_22_address0 = grp_GEMM_3D_float_fu_3929_input_2_22_V_address0.read();
    } else {
        k_proj_transposed_22_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_22_ce0 = grp_transpose_last_two_d_fu_4432_output_22_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_22_ce0 = grp_GEMM_3D_float_fu_3929_input_2_22_V_ce0.read();
    } else {
        k_proj_transposed_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_22_we0 = grp_transpose_last_two_d_fu_4432_output_22_V_we0.read();
    } else {
        k_proj_transposed_22_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_23_address0 = grp_transpose_last_two_d_fu_4432_output_23_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_23_address0 = grp_GEMM_3D_float_fu_3929_input_2_23_V_address0.read();
    } else {
        k_proj_transposed_23_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_23_ce0 = grp_transpose_last_two_d_fu_4432_output_23_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_23_ce0 = grp_GEMM_3D_float_fu_3929_input_2_23_V_ce0.read();
    } else {
        k_proj_transposed_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_23_we0 = grp_transpose_last_two_d_fu_4432_output_23_V_we0.read();
    } else {
        k_proj_transposed_23_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_24_address0 = grp_transpose_last_two_d_fu_4432_output_24_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_24_address0 = grp_GEMM_3D_float_fu_3929_input_2_24_V_address0.read();
    } else {
        k_proj_transposed_24_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_24_ce0 = grp_transpose_last_two_d_fu_4432_output_24_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_24_ce0 = grp_GEMM_3D_float_fu_3929_input_2_24_V_ce0.read();
    } else {
        k_proj_transposed_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_24_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_24_we0 = grp_transpose_last_two_d_fu_4432_output_24_V_we0.read();
    } else {
        k_proj_transposed_24_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_25_address0 = grp_transpose_last_two_d_fu_4432_output_25_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_25_address0 = grp_GEMM_3D_float_fu_3929_input_2_25_V_address0.read();
    } else {
        k_proj_transposed_25_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_25_ce0 = grp_transpose_last_two_d_fu_4432_output_25_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_25_ce0 = grp_GEMM_3D_float_fu_3929_input_2_25_V_ce0.read();
    } else {
        k_proj_transposed_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_25_we0 = grp_transpose_last_two_d_fu_4432_output_25_V_we0.read();
    } else {
        k_proj_transposed_25_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_26_address0 = grp_transpose_last_two_d_fu_4432_output_26_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_26_address0 = grp_GEMM_3D_float_fu_3929_input_2_26_V_address0.read();
    } else {
        k_proj_transposed_26_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_26_ce0 = grp_transpose_last_two_d_fu_4432_output_26_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_26_ce0 = grp_GEMM_3D_float_fu_3929_input_2_26_V_ce0.read();
    } else {
        k_proj_transposed_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_26_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_26_we0 = grp_transpose_last_two_d_fu_4432_output_26_V_we0.read();
    } else {
        k_proj_transposed_26_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_27_address0 = grp_transpose_last_two_d_fu_4432_output_27_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_27_address0 = grp_GEMM_3D_float_fu_3929_input_2_27_V_address0.read();
    } else {
        k_proj_transposed_27_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_27_ce0 = grp_transpose_last_two_d_fu_4432_output_27_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_27_ce0 = grp_GEMM_3D_float_fu_3929_input_2_27_V_ce0.read();
    } else {
        k_proj_transposed_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_27_we0 = grp_transpose_last_two_d_fu_4432_output_27_V_we0.read();
    } else {
        k_proj_transposed_27_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_28_address0 = grp_transpose_last_two_d_fu_4432_output_28_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_28_address0 = grp_GEMM_3D_float_fu_3929_input_2_28_V_address0.read();
    } else {
        k_proj_transposed_28_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_28_ce0 = grp_transpose_last_two_d_fu_4432_output_28_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_28_ce0 = grp_GEMM_3D_float_fu_3929_input_2_28_V_ce0.read();
    } else {
        k_proj_transposed_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_28_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_28_we0 = grp_transpose_last_two_d_fu_4432_output_28_V_we0.read();
    } else {
        k_proj_transposed_28_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_29_address0 = grp_transpose_last_two_d_fu_4432_output_29_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_29_address0 = grp_GEMM_3D_float_fu_3929_input_2_29_V_address0.read();
    } else {
        k_proj_transposed_29_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_29_ce0 = grp_transpose_last_two_d_fu_4432_output_29_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_29_ce0 = grp_GEMM_3D_float_fu_3929_input_2_29_V_ce0.read();
    } else {
        k_proj_transposed_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_29_we0 = grp_transpose_last_two_d_fu_4432_output_29_V_we0.read();
    } else {
        k_proj_transposed_29_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_2_address0 = grp_transpose_last_two_d_fu_4432_output_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_2_address0 = grp_GEMM_3D_float_fu_3929_input_2_2_V_address0.read();
    } else {
        k_proj_transposed_2_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_2_ce0 = grp_transpose_last_two_d_fu_4432_output_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_2_ce0 = grp_GEMM_3D_float_fu_3929_input_2_2_V_ce0.read();
    } else {
        k_proj_transposed_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_2_we0 = grp_transpose_last_two_d_fu_4432_output_2_V_we0.read();
    } else {
        k_proj_transposed_2_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_30_address0 = grp_transpose_last_two_d_fu_4432_output_30_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_30_address0 = grp_GEMM_3D_float_fu_3929_input_2_30_V_address0.read();
    } else {
        k_proj_transposed_30_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_30_ce0 = grp_transpose_last_two_d_fu_4432_output_30_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_30_ce0 = grp_GEMM_3D_float_fu_3929_input_2_30_V_ce0.read();
    } else {
        k_proj_transposed_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_30_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_30_we0 = grp_transpose_last_two_d_fu_4432_output_30_V_we0.read();
    } else {
        k_proj_transposed_30_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_31_address0 = grp_transpose_last_two_d_fu_4432_output_31_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_31_address0 = grp_GEMM_3D_float_fu_3929_input_2_31_V_address0.read();
    } else {
        k_proj_transposed_31_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_31_ce0 = grp_transpose_last_two_d_fu_4432_output_31_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_31_ce0 = grp_GEMM_3D_float_fu_3929_input_2_31_V_ce0.read();
    } else {
        k_proj_transposed_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_31_we0 = grp_transpose_last_two_d_fu_4432_output_31_V_we0.read();
    } else {
        k_proj_transposed_31_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_32_address0 = grp_transpose_last_two_d_fu_4432_output_32_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_32_address0 = grp_GEMM_3D_float_fu_3929_input_2_32_0_V_address0.read();
    } else {
        k_proj_transposed_32_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_32_ce0 = grp_transpose_last_two_d_fu_4432_output_32_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_32_ce0 = grp_GEMM_3D_float_fu_3929_input_2_32_0_V_ce0.read();
    } else {
        k_proj_transposed_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_32_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_32_we0 = grp_transpose_last_two_d_fu_4432_output_32_0_V_we0.read();
    } else {
        k_proj_transposed_32_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_33_address0 = grp_transpose_last_two_d_fu_4432_output_33_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_33_address0 = grp_GEMM_3D_float_fu_3929_input_2_33_0_V_address0.read();
    } else {
        k_proj_transposed_33_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_33_ce0 = grp_transpose_last_two_d_fu_4432_output_33_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_33_ce0 = grp_GEMM_3D_float_fu_3929_input_2_33_0_V_ce0.read();
    } else {
        k_proj_transposed_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_33_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_33_we0 = grp_transpose_last_two_d_fu_4432_output_33_0_V_we0.read();
    } else {
        k_proj_transposed_33_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_34_address0 = grp_transpose_last_two_d_fu_4432_output_34_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_34_address0 = grp_GEMM_3D_float_fu_3929_input_2_34_0_V_address0.read();
    } else {
        k_proj_transposed_34_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_34_ce0 = grp_transpose_last_two_d_fu_4432_output_34_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_34_ce0 = grp_GEMM_3D_float_fu_3929_input_2_34_0_V_ce0.read();
    } else {
        k_proj_transposed_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_34_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_34_we0 = grp_transpose_last_two_d_fu_4432_output_34_0_V_we0.read();
    } else {
        k_proj_transposed_34_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_35_address0 = grp_transpose_last_two_d_fu_4432_output_35_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_35_address0 = grp_GEMM_3D_float_fu_3929_input_2_35_0_V_address0.read();
    } else {
        k_proj_transposed_35_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_35_ce0 = grp_transpose_last_two_d_fu_4432_output_35_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_35_ce0 = grp_GEMM_3D_float_fu_3929_input_2_35_0_V_ce0.read();
    } else {
        k_proj_transposed_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_35_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_35_we0 = grp_transpose_last_two_d_fu_4432_output_35_0_V_we0.read();
    } else {
        k_proj_transposed_35_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_36_address0 = grp_transpose_last_two_d_fu_4432_output_36_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_36_address0 = grp_GEMM_3D_float_fu_3929_input_2_36_0_V_address0.read();
    } else {
        k_proj_transposed_36_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_36_ce0 = grp_transpose_last_two_d_fu_4432_output_36_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_36_ce0 = grp_GEMM_3D_float_fu_3929_input_2_36_0_V_ce0.read();
    } else {
        k_proj_transposed_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_36_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_36_we0 = grp_transpose_last_two_d_fu_4432_output_36_0_V_we0.read();
    } else {
        k_proj_transposed_36_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_37_address0 = grp_transpose_last_two_d_fu_4432_output_37_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_37_address0 = grp_GEMM_3D_float_fu_3929_input_2_37_0_V_address0.read();
    } else {
        k_proj_transposed_37_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_37_ce0 = grp_transpose_last_two_d_fu_4432_output_37_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_37_ce0 = grp_GEMM_3D_float_fu_3929_input_2_37_0_V_ce0.read();
    } else {
        k_proj_transposed_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_37_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_37_we0 = grp_transpose_last_two_d_fu_4432_output_37_0_V_we0.read();
    } else {
        k_proj_transposed_37_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_38_address0 = grp_transpose_last_two_d_fu_4432_output_38_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_38_address0 = grp_GEMM_3D_float_fu_3929_input_2_38_0_V_address0.read();
    } else {
        k_proj_transposed_38_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_38_ce0 = grp_transpose_last_two_d_fu_4432_output_38_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_38_ce0 = grp_GEMM_3D_float_fu_3929_input_2_38_0_V_ce0.read();
    } else {
        k_proj_transposed_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_38_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_38_we0 = grp_transpose_last_two_d_fu_4432_output_38_0_V_we0.read();
    } else {
        k_proj_transposed_38_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_39_address0 = grp_transpose_last_two_d_fu_4432_output_39_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_39_address0 = grp_GEMM_3D_float_fu_3929_input_2_39_0_V_address0.read();
    } else {
        k_proj_transposed_39_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_39_ce0 = grp_transpose_last_two_d_fu_4432_output_39_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_39_ce0 = grp_GEMM_3D_float_fu_3929_input_2_39_0_V_ce0.read();
    } else {
        k_proj_transposed_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_39_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_39_we0 = grp_transpose_last_two_d_fu_4432_output_39_0_V_we0.read();
    } else {
        k_proj_transposed_39_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_3_address0 = grp_transpose_last_two_d_fu_4432_output_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_3_address0 = grp_GEMM_3D_float_fu_3929_input_2_3_V_address0.read();
    } else {
        k_proj_transposed_3_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_3_ce0 = grp_transpose_last_two_d_fu_4432_output_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_3_ce0 = grp_GEMM_3D_float_fu_3929_input_2_3_V_ce0.read();
    } else {
        k_proj_transposed_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_3_we0 = grp_transpose_last_two_d_fu_4432_output_3_V_we0.read();
    } else {
        k_proj_transposed_3_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_40_address0 = grp_transpose_last_two_d_fu_4432_output_40_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_40_address0 = grp_GEMM_3D_float_fu_3929_input_2_40_0_V_address0.read();
    } else {
        k_proj_transposed_40_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_40_ce0 = grp_transpose_last_two_d_fu_4432_output_40_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_40_ce0 = grp_GEMM_3D_float_fu_3929_input_2_40_0_V_ce0.read();
    } else {
        k_proj_transposed_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_40_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_40_we0 = grp_transpose_last_two_d_fu_4432_output_40_0_V_we0.read();
    } else {
        k_proj_transposed_40_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_41_address0 = grp_transpose_last_two_d_fu_4432_output_41_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_41_address0 = grp_GEMM_3D_float_fu_3929_input_2_41_0_V_address0.read();
    } else {
        k_proj_transposed_41_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_41_ce0 = grp_transpose_last_two_d_fu_4432_output_41_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_41_ce0 = grp_GEMM_3D_float_fu_3929_input_2_41_0_V_ce0.read();
    } else {
        k_proj_transposed_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_41_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_41_we0 = grp_transpose_last_two_d_fu_4432_output_41_0_V_we0.read();
    } else {
        k_proj_transposed_41_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_42_address0 = grp_transpose_last_two_d_fu_4432_output_42_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_42_address0 = grp_GEMM_3D_float_fu_3929_input_2_42_0_V_address0.read();
    } else {
        k_proj_transposed_42_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_42_ce0 = grp_transpose_last_two_d_fu_4432_output_42_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_42_ce0 = grp_GEMM_3D_float_fu_3929_input_2_42_0_V_ce0.read();
    } else {
        k_proj_transposed_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_42_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_42_we0 = grp_transpose_last_two_d_fu_4432_output_42_0_V_we0.read();
    } else {
        k_proj_transposed_42_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_43_address0 = grp_transpose_last_two_d_fu_4432_output_43_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_43_address0 = grp_GEMM_3D_float_fu_3929_input_2_43_0_V_address0.read();
    } else {
        k_proj_transposed_43_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_43_ce0 = grp_transpose_last_two_d_fu_4432_output_43_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_43_ce0 = grp_GEMM_3D_float_fu_3929_input_2_43_0_V_ce0.read();
    } else {
        k_proj_transposed_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_43_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_43_we0 = grp_transpose_last_two_d_fu_4432_output_43_0_V_we0.read();
    } else {
        k_proj_transposed_43_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_44_address0 = grp_transpose_last_two_d_fu_4432_output_44_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_44_address0 = grp_GEMM_3D_float_fu_3929_input_2_44_0_V_address0.read();
    } else {
        k_proj_transposed_44_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_44_ce0 = grp_transpose_last_two_d_fu_4432_output_44_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_44_ce0 = grp_GEMM_3D_float_fu_3929_input_2_44_0_V_ce0.read();
    } else {
        k_proj_transposed_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_44_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_44_we0 = grp_transpose_last_two_d_fu_4432_output_44_0_V_we0.read();
    } else {
        k_proj_transposed_44_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_45_address0 = grp_transpose_last_two_d_fu_4432_output_45_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_45_address0 = grp_GEMM_3D_float_fu_3929_input_2_45_0_V_address0.read();
    } else {
        k_proj_transposed_45_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_45_ce0 = grp_transpose_last_two_d_fu_4432_output_45_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_45_ce0 = grp_GEMM_3D_float_fu_3929_input_2_45_0_V_ce0.read();
    } else {
        k_proj_transposed_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_45_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_45_we0 = grp_transpose_last_two_d_fu_4432_output_45_0_V_we0.read();
    } else {
        k_proj_transposed_45_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_46_address0 = grp_transpose_last_two_d_fu_4432_output_46_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_46_address0 = grp_GEMM_3D_float_fu_3929_input_2_46_0_V_address0.read();
    } else {
        k_proj_transposed_46_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_46_ce0 = grp_transpose_last_two_d_fu_4432_output_46_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_46_ce0 = grp_GEMM_3D_float_fu_3929_input_2_46_0_V_ce0.read();
    } else {
        k_proj_transposed_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_46_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_46_we0 = grp_transpose_last_two_d_fu_4432_output_46_0_V_we0.read();
    } else {
        k_proj_transposed_46_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_47_address0 = grp_transpose_last_two_d_fu_4432_output_47_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_47_address0 = grp_GEMM_3D_float_fu_3929_input_2_47_0_V_address0.read();
    } else {
        k_proj_transposed_47_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_47_ce0 = grp_transpose_last_two_d_fu_4432_output_47_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_47_ce0 = grp_GEMM_3D_float_fu_3929_input_2_47_0_V_ce0.read();
    } else {
        k_proj_transposed_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_47_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_47_we0 = grp_transpose_last_two_d_fu_4432_output_47_0_V_we0.read();
    } else {
        k_proj_transposed_47_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_48_address0 = grp_transpose_last_two_d_fu_4432_output_48_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_48_address0 = grp_GEMM_3D_float_fu_3929_input_2_48_0_V_address0.read();
    } else {
        k_proj_transposed_48_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_48_ce0 = grp_transpose_last_two_d_fu_4432_output_48_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_48_ce0 = grp_GEMM_3D_float_fu_3929_input_2_48_0_V_ce0.read();
    } else {
        k_proj_transposed_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_48_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_48_we0 = grp_transpose_last_two_d_fu_4432_output_48_0_V_we0.read();
    } else {
        k_proj_transposed_48_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_49_address0 = grp_transpose_last_two_d_fu_4432_output_49_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_49_address0 = grp_GEMM_3D_float_fu_3929_input_2_49_0_V_address0.read();
    } else {
        k_proj_transposed_49_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_49_ce0 = grp_transpose_last_two_d_fu_4432_output_49_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_49_ce0 = grp_GEMM_3D_float_fu_3929_input_2_49_0_V_ce0.read();
    } else {
        k_proj_transposed_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_49_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_49_we0 = grp_transpose_last_two_d_fu_4432_output_49_0_V_we0.read();
    } else {
        k_proj_transposed_49_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_4_address0 = grp_transpose_last_two_d_fu_4432_output_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_4_address0 = grp_GEMM_3D_float_fu_3929_input_2_4_V_address0.read();
    } else {
        k_proj_transposed_4_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_4_ce0 = grp_transpose_last_two_d_fu_4432_output_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_4_ce0 = grp_GEMM_3D_float_fu_3929_input_2_4_V_ce0.read();
    } else {
        k_proj_transposed_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_4_we0 = grp_transpose_last_two_d_fu_4432_output_4_V_we0.read();
    } else {
        k_proj_transposed_4_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_50_address0 = grp_transpose_last_two_d_fu_4432_output_50_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_50_address0 = grp_GEMM_3D_float_fu_3929_input_2_50_0_V_address0.read();
    } else {
        k_proj_transposed_50_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_50_ce0 = grp_transpose_last_two_d_fu_4432_output_50_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_50_ce0 = grp_GEMM_3D_float_fu_3929_input_2_50_0_V_ce0.read();
    } else {
        k_proj_transposed_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_50_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_50_we0 = grp_transpose_last_two_d_fu_4432_output_50_0_V_we0.read();
    } else {
        k_proj_transposed_50_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_51_address0 = grp_transpose_last_two_d_fu_4432_output_51_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_51_address0 = grp_GEMM_3D_float_fu_3929_input_2_51_0_V_address0.read();
    } else {
        k_proj_transposed_51_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_51_ce0 = grp_transpose_last_two_d_fu_4432_output_51_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_51_ce0 = grp_GEMM_3D_float_fu_3929_input_2_51_0_V_ce0.read();
    } else {
        k_proj_transposed_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_51_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_51_we0 = grp_transpose_last_two_d_fu_4432_output_51_0_V_we0.read();
    } else {
        k_proj_transposed_51_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_52_address0 = grp_transpose_last_two_d_fu_4432_output_52_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_52_address0 = grp_GEMM_3D_float_fu_3929_input_2_52_0_V_address0.read();
    } else {
        k_proj_transposed_52_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_52_ce0 = grp_transpose_last_two_d_fu_4432_output_52_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_52_ce0 = grp_GEMM_3D_float_fu_3929_input_2_52_0_V_ce0.read();
    } else {
        k_proj_transposed_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_52_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_52_we0 = grp_transpose_last_two_d_fu_4432_output_52_0_V_we0.read();
    } else {
        k_proj_transposed_52_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_53_address0 = grp_transpose_last_two_d_fu_4432_output_53_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_53_address0 = grp_GEMM_3D_float_fu_3929_input_2_53_0_V_address0.read();
    } else {
        k_proj_transposed_53_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_53_ce0 = grp_transpose_last_two_d_fu_4432_output_53_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_53_ce0 = grp_GEMM_3D_float_fu_3929_input_2_53_0_V_ce0.read();
    } else {
        k_proj_transposed_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_53_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_53_we0 = grp_transpose_last_two_d_fu_4432_output_53_0_V_we0.read();
    } else {
        k_proj_transposed_53_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_54_address0 = grp_transpose_last_two_d_fu_4432_output_54_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_54_address0 = grp_GEMM_3D_float_fu_3929_input_2_54_0_V_address0.read();
    } else {
        k_proj_transposed_54_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_54_ce0 = grp_transpose_last_two_d_fu_4432_output_54_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_54_ce0 = grp_GEMM_3D_float_fu_3929_input_2_54_0_V_ce0.read();
    } else {
        k_proj_transposed_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_54_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_54_we0 = grp_transpose_last_two_d_fu_4432_output_54_0_V_we0.read();
    } else {
        k_proj_transposed_54_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_55_address0 = grp_transpose_last_two_d_fu_4432_output_55_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_55_address0 = grp_GEMM_3D_float_fu_3929_input_2_55_0_V_address0.read();
    } else {
        k_proj_transposed_55_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_55_ce0 = grp_transpose_last_two_d_fu_4432_output_55_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_55_ce0 = grp_GEMM_3D_float_fu_3929_input_2_55_0_V_ce0.read();
    } else {
        k_proj_transposed_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_55_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_55_we0 = grp_transpose_last_two_d_fu_4432_output_55_0_V_we0.read();
    } else {
        k_proj_transposed_55_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_56_address0 = grp_transpose_last_two_d_fu_4432_output_56_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_56_address0 = grp_GEMM_3D_float_fu_3929_input_2_56_0_V_address0.read();
    } else {
        k_proj_transposed_56_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_56_ce0 = grp_transpose_last_two_d_fu_4432_output_56_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_56_ce0 = grp_GEMM_3D_float_fu_3929_input_2_56_0_V_ce0.read();
    } else {
        k_proj_transposed_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_56_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_56_we0 = grp_transpose_last_two_d_fu_4432_output_56_0_V_we0.read();
    } else {
        k_proj_transposed_56_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_57_address0 = grp_transpose_last_two_d_fu_4432_output_57_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_57_address0 = grp_GEMM_3D_float_fu_3929_input_2_57_0_V_address0.read();
    } else {
        k_proj_transposed_57_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_57_ce0 = grp_transpose_last_two_d_fu_4432_output_57_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_57_ce0 = grp_GEMM_3D_float_fu_3929_input_2_57_0_V_ce0.read();
    } else {
        k_proj_transposed_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_57_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_57_we0 = grp_transpose_last_two_d_fu_4432_output_57_0_V_we0.read();
    } else {
        k_proj_transposed_57_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_58_address0 = grp_transpose_last_two_d_fu_4432_output_58_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_58_address0 = grp_GEMM_3D_float_fu_3929_input_2_58_0_V_address0.read();
    } else {
        k_proj_transposed_58_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_58_ce0 = grp_transpose_last_two_d_fu_4432_output_58_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_58_ce0 = grp_GEMM_3D_float_fu_3929_input_2_58_0_V_ce0.read();
    } else {
        k_proj_transposed_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_58_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_58_we0 = grp_transpose_last_two_d_fu_4432_output_58_0_V_we0.read();
    } else {
        k_proj_transposed_58_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_59_address0 = grp_transpose_last_two_d_fu_4432_output_59_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_59_address0 = grp_GEMM_3D_float_fu_3929_input_2_59_0_V_address0.read();
    } else {
        k_proj_transposed_59_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_59_ce0 = grp_transpose_last_two_d_fu_4432_output_59_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_59_ce0 = grp_GEMM_3D_float_fu_3929_input_2_59_0_V_ce0.read();
    } else {
        k_proj_transposed_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_59_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_59_we0 = grp_transpose_last_two_d_fu_4432_output_59_0_V_we0.read();
    } else {
        k_proj_transposed_59_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_5_address0 = grp_transpose_last_two_d_fu_4432_output_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_5_address0 = grp_GEMM_3D_float_fu_3929_input_2_5_V_address0.read();
    } else {
        k_proj_transposed_5_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_5_ce0 = grp_transpose_last_two_d_fu_4432_output_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_5_ce0 = grp_GEMM_3D_float_fu_3929_input_2_5_V_ce0.read();
    } else {
        k_proj_transposed_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_5_we0 = grp_transpose_last_two_d_fu_4432_output_5_V_we0.read();
    } else {
        k_proj_transposed_5_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_60_address0 = grp_transpose_last_two_d_fu_4432_output_60_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_60_address0 = grp_GEMM_3D_float_fu_3929_input_2_60_0_V_address0.read();
    } else {
        k_proj_transposed_60_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_60_ce0 = grp_transpose_last_two_d_fu_4432_output_60_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_60_ce0 = grp_GEMM_3D_float_fu_3929_input_2_60_0_V_ce0.read();
    } else {
        k_proj_transposed_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_60_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_60_we0 = grp_transpose_last_two_d_fu_4432_output_60_0_V_we0.read();
    } else {
        k_proj_transposed_60_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_61_address0 = grp_transpose_last_two_d_fu_4432_output_61_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_61_address0 = grp_GEMM_3D_float_fu_3929_input_2_61_0_V_address0.read();
    } else {
        k_proj_transposed_61_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_61_ce0 = grp_transpose_last_two_d_fu_4432_output_61_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_61_ce0 = grp_GEMM_3D_float_fu_3929_input_2_61_0_V_ce0.read();
    } else {
        k_proj_transposed_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_61_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_61_we0 = grp_transpose_last_two_d_fu_4432_output_61_0_V_we0.read();
    } else {
        k_proj_transposed_61_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_62_address0 = grp_transpose_last_two_d_fu_4432_output_62_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_62_address0 = grp_GEMM_3D_float_fu_3929_input_2_62_0_V_address0.read();
    } else {
        k_proj_transposed_62_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_62_ce0 = grp_transpose_last_two_d_fu_4432_output_62_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_62_ce0 = grp_GEMM_3D_float_fu_3929_input_2_62_0_V_ce0.read();
    } else {
        k_proj_transposed_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_62_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_62_we0 = grp_transpose_last_two_d_fu_4432_output_62_0_V_we0.read();
    } else {
        k_proj_transposed_62_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_63_address0 = grp_transpose_last_two_d_fu_4432_output_63_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_63_address0 = grp_GEMM_3D_float_fu_3929_input_2_63_0_V_address0.read();
    } else {
        k_proj_transposed_63_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void attention::thread_k_proj_transposed_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_63_ce0 = grp_transpose_last_two_d_fu_4432_output_63_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_63_ce0 = grp_GEMM_3D_float_fu_3929_input_2_63_0_V_ce0.read();
    } else {
        k_proj_transposed_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_63_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_63_we0 = grp_transpose_last_two_d_fu_4432_output_63_0_V_we0.read();
    } else {
        k_proj_transposed_63_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_6_address0 = grp_transpose_last_two_d_fu_4432_output_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_6_address0 = grp_GEMM_3D_float_fu_3929_input_2_6_V_address0.read();
    } else {
        k_proj_transposed_6_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_6_ce0 = grp_transpose_last_two_d_fu_4432_output_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_6_ce0 = grp_GEMM_3D_float_fu_3929_input_2_6_V_ce0.read();
    } else {
        k_proj_transposed_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_6_we0 = grp_transpose_last_two_d_fu_4432_output_6_V_we0.read();
    } else {
        k_proj_transposed_6_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_7_address0 = grp_transpose_last_two_d_fu_4432_output_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_7_address0 = grp_GEMM_3D_float_fu_3929_input_2_7_V_address0.read();
    } else {
        k_proj_transposed_7_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_7_ce0 = grp_transpose_last_two_d_fu_4432_output_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_7_ce0 = grp_GEMM_3D_float_fu_3929_input_2_7_V_ce0.read();
    } else {
        k_proj_transposed_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_7_we0 = grp_transpose_last_two_d_fu_4432_output_7_V_we0.read();
    } else {
        k_proj_transposed_7_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_8_address0 = grp_transpose_last_two_d_fu_4432_output_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_8_address0 = grp_GEMM_3D_float_fu_3929_input_2_8_V_address0.read();
    } else {
        k_proj_transposed_8_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_8_ce0 = grp_transpose_last_two_d_fu_4432_output_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_8_ce0 = grp_GEMM_3D_float_fu_3929_input_2_8_V_ce0.read();
    } else {
        k_proj_transposed_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_8_we0 = grp_transpose_last_two_d_fu_4432_output_8_V_we0.read();
    } else {
        k_proj_transposed_8_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_9_address0 = grp_transpose_last_two_d_fu_4432_output_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_9_address0 = grp_GEMM_3D_float_fu_3929_input_2_9_V_address0.read();
    } else {
        k_proj_transposed_9_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void attention::thread_k_proj_transposed_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_9_ce0 = grp_transpose_last_two_d_fu_4432_output_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        k_proj_transposed_9_ce0 = grp_GEMM_3D_float_fu_3929_input_2_9_V_ce0.read();
    } else {
        k_proj_transposed_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_proj_transposed_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        k_proj_transposed_9_we0 = grp_transpose_last_two_d_fu_4432_output_9_V_we0.read();
    } else {
        k_proj_transposed_9_we0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_0_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_0_ce0.read();
    } else {
        k_weights_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_10_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_10_ce0.read();
    } else {
        k_weights_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_11_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_11_ce0.read();
    } else {
        k_weights_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_12_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_12_ce0.read();
    } else {
        k_weights_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_13_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_13_ce0.read();
    } else {
        k_weights_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_14_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_14_ce0.read();
    } else {
        k_weights_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_15_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_15_ce0.read();
    } else {
        k_weights_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_16_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_16_ce0.read();
    } else {
        k_weights_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_17_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_17_ce0.read();
    } else {
        k_weights_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_18_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_18_ce0.read();
    } else {
        k_weights_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_19_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_19_ce0.read();
    } else {
        k_weights_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_1_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_1_ce0.read();
    } else {
        k_weights_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_20_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_20_ce0.read();
    } else {
        k_weights_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_21_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_21_ce0.read();
    } else {
        k_weights_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_22_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_22_ce0.read();
    } else {
        k_weights_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_23_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_23_ce0.read();
    } else {
        k_weights_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_24_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_24_ce0.read();
    } else {
        k_weights_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_25_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_25_ce0.read();
    } else {
        k_weights_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_26_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_26_ce0.read();
    } else {
        k_weights_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_27_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_27_ce0.read();
    } else {
        k_weights_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_28_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_28_ce0.read();
    } else {
        k_weights_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_29_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_29_ce0.read();
    } else {
        k_weights_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_2_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_2_ce0.read();
    } else {
        k_weights_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_30_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_30_ce0.read();
    } else {
        k_weights_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_31_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_31_ce0.read();
    } else {
        k_weights_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_32_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_32_ce0.read();
    } else {
        k_weights_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_33_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_33_ce0.read();
    } else {
        k_weights_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_34_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_34_ce0.read();
    } else {
        k_weights_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_35_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_35_ce0.read();
    } else {
        k_weights_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_36_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_36_ce0.read();
    } else {
        k_weights_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_37_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_37_ce0.read();
    } else {
        k_weights_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_38_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_38_ce0.read();
    } else {
        k_weights_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_39_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_39_ce0.read();
    } else {
        k_weights_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_3_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_3_ce0.read();
    } else {
        k_weights_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_40_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_40_ce0.read();
    } else {
        k_weights_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_41_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_41_ce0.read();
    } else {
        k_weights_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_42_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_42_ce0.read();
    } else {
        k_weights_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_43_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_43_ce0.read();
    } else {
        k_weights_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_44_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_44_ce0.read();
    } else {
        k_weights_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_45_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_45_ce0.read();
    } else {
        k_weights_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_46_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_46_ce0.read();
    } else {
        k_weights_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_47_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_47_ce0.read();
    } else {
        k_weights_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_48_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_48_ce0.read();
    } else {
        k_weights_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_49_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_49_ce0.read();
    } else {
        k_weights_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_4_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_4_ce0.read();
    } else {
        k_weights_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_50_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_50_ce0.read();
    } else {
        k_weights_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_51_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_51_ce0.read();
    } else {
        k_weights_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_52_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_52_ce0.read();
    } else {
        k_weights_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_53_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_53_ce0.read();
    } else {
        k_weights_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_54_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_54_ce0.read();
    } else {
        k_weights_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_55_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_55_ce0.read();
    } else {
        k_weights_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_56_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_56_ce0.read();
    } else {
        k_weights_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_57_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_57_ce0.read();
    } else {
        k_weights_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_58_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_58_ce0.read();
    } else {
        k_weights_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_59_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_59_ce0.read();
    } else {
        k_weights_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_5_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_5_ce0.read();
    } else {
        k_weights_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_60_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_60_ce0.read();
    } else {
        k_weights_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_61_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_61_ce0.read();
    } else {
        k_weights_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_62_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_62_ce0.read();
    } else {
        k_weights_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_63_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_63_ce0.read();
    } else {
        k_weights_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_6_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_6_ce0.read();
    } else {
        k_weights_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_7_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_7_ce0.read();
    } else {
        k_weights_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_8_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_8_ce0.read();
    } else {
        k_weights_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_k_weights_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        k_weights_9_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_9_ce0.read();
    } else {
        k_weights_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_ln_weight_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ln_weight_V_ce0 = grp_rms_norm_1536_s_fu_4062_weight_V_ce0.read();
    } else {
        ln_weight_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_ln_weight_in_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ln_weight_in_V_ce0 = grp_rms_norm_1536_s_fu_4062_weight_V_ce0.read();
    } else {
        ln_weight_in_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_0_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_0_ce0.read();
    } else {
        o_weights_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_10_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_10_ce0.read();
    } else {
        o_weights_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_11_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_11_ce0.read();
    } else {
        o_weights_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_12_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_12_ce0.read();
    } else {
        o_weights_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_13_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_13_ce0.read();
    } else {
        o_weights_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_14_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_14_ce0.read();
    } else {
        o_weights_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_15_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_15_ce0.read();
    } else {
        o_weights_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_16_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_16_ce0.read();
    } else {
        o_weights_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_17_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_17_ce0.read();
    } else {
        o_weights_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_18_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_18_ce0.read();
    } else {
        o_weights_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_19_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_19_ce0.read();
    } else {
        o_weights_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_1_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_1_ce0.read();
    } else {
        o_weights_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_20_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_20_ce0.read();
    } else {
        o_weights_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_21_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_21_ce0.read();
    } else {
        o_weights_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_22_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_22_ce0.read();
    } else {
        o_weights_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_23_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_23_ce0.read();
    } else {
        o_weights_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_24_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_24_ce0.read();
    } else {
        o_weights_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_25_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_25_ce0.read();
    } else {
        o_weights_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_26_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_26_ce0.read();
    } else {
        o_weights_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_27_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_27_ce0.read();
    } else {
        o_weights_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_28_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_28_ce0.read();
    } else {
        o_weights_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_29_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_29_ce0.read();
    } else {
        o_weights_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_2_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_2_ce0.read();
    } else {
        o_weights_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_30_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_30_ce0.read();
    } else {
        o_weights_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_31_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_31_ce0.read();
    } else {
        o_weights_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_32_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_32_ce0.read();
    } else {
        o_weights_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_33_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_33_ce0.read();
    } else {
        o_weights_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_34_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_34_ce0.read();
    } else {
        o_weights_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_35_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_35_ce0.read();
    } else {
        o_weights_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_36_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_36_ce0.read();
    } else {
        o_weights_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_37_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_37_ce0.read();
    } else {
        o_weights_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_38_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_38_ce0.read();
    } else {
        o_weights_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_39_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_39_ce0.read();
    } else {
        o_weights_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_3_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_3_ce0.read();
    } else {
        o_weights_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_40_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_40_ce0.read();
    } else {
        o_weights_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_41_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_41_ce0.read();
    } else {
        o_weights_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_42_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_42_ce0.read();
    } else {
        o_weights_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_43_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_43_ce0.read();
    } else {
        o_weights_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_44_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_44_ce0.read();
    } else {
        o_weights_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_45_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_45_ce0.read();
    } else {
        o_weights_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_46_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_46_ce0.read();
    } else {
        o_weights_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_47_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_47_ce0.read();
    } else {
        o_weights_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_48_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_48_ce0.read();
    } else {
        o_weights_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_49_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_49_ce0.read();
    } else {
        o_weights_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_4_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_4_ce0.read();
    } else {
        o_weights_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_50_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_50_ce0.read();
    } else {
        o_weights_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_51_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_51_ce0.read();
    } else {
        o_weights_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_52_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_52_ce0.read();
    } else {
        o_weights_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_53_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_53_ce0.read();
    } else {
        o_weights_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_54_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_54_ce0.read();
    } else {
        o_weights_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_55_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_55_ce0.read();
    } else {
        o_weights_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_56_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_56_ce0.read();
    } else {
        o_weights_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_57_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_57_ce0.read();
    } else {
        o_weights_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_58_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_58_ce0.read();
    } else {
        o_weights_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_59_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_59_ce0.read();
    } else {
        o_weights_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_5_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_5_ce0.read();
    } else {
        o_weights_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_60_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_60_ce0.read();
    } else {
        o_weights_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_61_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_61_ce0.read();
    } else {
        o_weights_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_62_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_62_ce0.read();
    } else {
        o_weights_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_63_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_63_ce0.read();
    } else {
        o_weights_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_6_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_6_ce0.read();
    } else {
        o_weights_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_7_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_7_ce0.read();
    } else {
        o_weights_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_8_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_8_ce0.read();
    } else {
        o_weights_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_o_weights_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        o_weights_9_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_9_ce0.read();
    } else {
        o_weights_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_0_0_V_address0.read();
    } else {
        q_embed_0_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_0_0_V_ce0.read();
    } else {
        q_embed_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_0_0_V_we0.read();
    } else {
        q_embed_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_10_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_10_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_10_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_10_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_10_0_V_address0.read();
    } else {
        q_embed_10_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_10_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_10_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_10_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_10_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_10_0_V_ce0.read();
    } else {
        q_embed_10_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_10_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_10_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_10_0_V_we0.read();
    } else {
        q_embed_10_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_11_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_11_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_11_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_11_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_11_0_V_address0.read();
    } else {
        q_embed_11_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_11_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_11_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_11_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_11_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_11_0_V_ce0.read();
    } else {
        q_embed_11_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_11_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_11_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_11_0_V_we0.read();
    } else {
        q_embed_11_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_12_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_12_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_12_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_12_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_12_0_V_address0.read();
    } else {
        q_embed_12_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_12_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_12_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_12_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_12_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_12_0_V_ce0.read();
    } else {
        q_embed_12_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_12_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_12_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_12_0_V_we0.read();
    } else {
        q_embed_12_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_13_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_13_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_13_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_13_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_13_0_V_address0.read();
    } else {
        q_embed_13_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_13_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_13_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_13_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_13_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_13_0_V_ce0.read();
    } else {
        q_embed_13_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_13_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_13_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_13_0_V_we0.read();
    } else {
        q_embed_13_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_14_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_14_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_14_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_14_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_14_0_V_address0.read();
    } else {
        q_embed_14_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_14_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_14_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_14_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_14_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_14_0_V_ce0.read();
    } else {
        q_embed_14_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_14_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_14_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_14_0_V_we0.read();
    } else {
        q_embed_14_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_15_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_15_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_15_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_15_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_15_0_V_address0.read();
    } else {
        q_embed_15_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_15_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_15_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_15_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_15_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_15_0_V_ce0.read();
    } else {
        q_embed_15_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_15_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_15_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_15_0_V_we0.read();
    } else {
        q_embed_15_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_16_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_16_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_16_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_16_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_16_0_V_address0.read();
    } else {
        q_embed_16_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_16_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_16_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_16_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_16_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_16_0_V_ce0.read();
    } else {
        q_embed_16_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_16_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_16_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_16_0_V_we0.read();
    } else {
        q_embed_16_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_17_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_17_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_17_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_17_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_17_0_V_address0.read();
    } else {
        q_embed_17_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_17_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_17_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_17_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_17_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_17_0_V_ce0.read();
    } else {
        q_embed_17_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_17_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_17_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_17_0_V_we0.read();
    } else {
        q_embed_17_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_18_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_18_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_18_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_18_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_18_0_V_address0.read();
    } else {
        q_embed_18_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_18_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_18_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_18_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_18_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_18_0_V_ce0.read();
    } else {
        q_embed_18_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_18_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_18_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_18_0_V_we0.read();
    } else {
        q_embed_18_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_19_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_19_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_19_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_19_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_19_0_V_address0.read();
    } else {
        q_embed_19_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_19_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_19_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_19_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_19_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_19_0_V_ce0.read();
    } else {
        q_embed_19_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_19_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_19_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_19_0_V_we0.read();
    } else {
        q_embed_19_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_1_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_1_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_1_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_1_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_1_0_V_address0.read();
    } else {
        q_embed_1_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_1_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_1_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_1_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_1_0_V_ce0.read();
    } else {
        q_embed_1_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_1_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_1_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_1_0_V_we0.read();
    } else {
        q_embed_1_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_20_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_20_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_20_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_20_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_20_0_V_address0.read();
    } else {
        q_embed_20_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_20_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_20_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_20_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_20_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_20_0_V_ce0.read();
    } else {
        q_embed_20_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_20_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_20_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_20_0_V_we0.read();
    } else {
        q_embed_20_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_21_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_21_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_21_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_21_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_21_0_V_address0.read();
    } else {
        q_embed_21_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_21_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_21_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_21_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_21_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_21_0_V_ce0.read();
    } else {
        q_embed_21_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_21_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_21_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_21_0_V_we0.read();
    } else {
        q_embed_21_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_22_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_22_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_22_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_22_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_22_0_V_address0.read();
    } else {
        q_embed_22_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_22_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_22_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_22_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_22_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_22_0_V_ce0.read();
    } else {
        q_embed_22_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_22_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_22_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_22_0_V_we0.read();
    } else {
        q_embed_22_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_23_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_23_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_23_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_23_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_23_0_V_address0.read();
    } else {
        q_embed_23_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_23_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_23_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_23_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_23_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_23_0_V_ce0.read();
    } else {
        q_embed_23_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_23_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_23_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_23_0_V_we0.read();
    } else {
        q_embed_23_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_24_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_24_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_24_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_24_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_24_0_V_address0.read();
    } else {
        q_embed_24_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_24_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_24_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_24_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_24_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_24_0_V_ce0.read();
    } else {
        q_embed_24_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_24_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_24_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_24_0_V_we0.read();
    } else {
        q_embed_24_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_25_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_25_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_25_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_25_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_25_0_V_address0.read();
    } else {
        q_embed_25_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_25_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_25_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_25_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_25_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_25_0_V_ce0.read();
    } else {
        q_embed_25_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_25_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_25_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_25_0_V_we0.read();
    } else {
        q_embed_25_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_26_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_26_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_26_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_26_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_26_0_V_address0.read();
    } else {
        q_embed_26_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_26_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_26_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_26_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_26_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_26_0_V_ce0.read();
    } else {
        q_embed_26_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_26_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_26_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_26_0_V_we0.read();
    } else {
        q_embed_26_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_27_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_27_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_27_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_27_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_27_0_V_address0.read();
    } else {
        q_embed_27_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_27_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_27_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_27_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_27_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_27_0_V_ce0.read();
    } else {
        q_embed_27_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_27_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_27_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_27_0_V_we0.read();
    } else {
        q_embed_27_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_28_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_28_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_28_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_28_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_28_0_V_address0.read();
    } else {
        q_embed_28_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_28_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_28_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_28_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_28_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_28_0_V_ce0.read();
    } else {
        q_embed_28_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_28_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_28_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_28_0_V_we0.read();
    } else {
        q_embed_28_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_29_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_29_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_29_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_29_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_29_0_V_address0.read();
    } else {
        q_embed_29_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_29_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_29_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_29_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_29_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_29_0_V_ce0.read();
    } else {
        q_embed_29_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_29_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_29_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_29_0_V_we0.read();
    } else {
        q_embed_29_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_2_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_2_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_2_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_2_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_2_0_V_address0.read();
    } else {
        q_embed_2_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_2_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_2_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_2_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_2_0_V_ce0.read();
    } else {
        q_embed_2_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_2_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_2_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_2_0_V_we0.read();
    } else {
        q_embed_2_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_30_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_30_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_30_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_30_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_30_0_V_address0.read();
    } else {
        q_embed_30_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_30_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_30_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_30_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_30_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_30_0_V_ce0.read();
    } else {
        q_embed_30_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_30_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_30_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_30_0_V_we0.read();
    } else {
        q_embed_30_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_31_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_31_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_31_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_31_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_31_0_V_address0.read();
    } else {
        q_embed_31_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_31_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_31_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_31_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_31_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_31_0_V_ce0.read();
    } else {
        q_embed_31_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_31_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_31_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_31_0_V_we0.read();
    } else {
        q_embed_31_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_32_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_32_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_32_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_32_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_32_0_0_V_address0.read();
    } else {
        q_embed_32_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_32_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_32_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_32_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_32_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_32_0_0_V_ce0.read();
    } else {
        q_embed_32_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_32_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_32_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_32_0_0_V_we0.read();
    } else {
        q_embed_32_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_33_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_33_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_33_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_33_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_33_0_0_V_address0.read();
    } else {
        q_embed_33_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_33_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_33_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_33_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_33_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_33_0_0_V_ce0.read();
    } else {
        q_embed_33_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_33_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_33_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_33_0_0_V_we0.read();
    } else {
        q_embed_33_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_34_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_34_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_34_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_34_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_34_0_0_V_address0.read();
    } else {
        q_embed_34_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_34_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_34_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_34_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_34_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_34_0_0_V_ce0.read();
    } else {
        q_embed_34_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_34_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_34_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_34_0_0_V_we0.read();
    } else {
        q_embed_34_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_35_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_35_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_35_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_35_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_35_0_0_V_address0.read();
    } else {
        q_embed_35_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_35_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_35_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_35_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_35_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_35_0_0_V_ce0.read();
    } else {
        q_embed_35_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_35_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_35_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_35_0_0_V_we0.read();
    } else {
        q_embed_35_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_36_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_36_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_36_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_36_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_36_0_0_V_address0.read();
    } else {
        q_embed_36_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_36_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_36_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_36_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_36_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_36_0_0_V_ce0.read();
    } else {
        q_embed_36_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_36_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_36_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_36_0_0_V_we0.read();
    } else {
        q_embed_36_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_37_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_37_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_37_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_37_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_37_0_0_V_address0.read();
    } else {
        q_embed_37_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_37_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_37_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_37_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_37_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_37_0_0_V_ce0.read();
    } else {
        q_embed_37_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_37_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_37_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_37_0_0_V_we0.read();
    } else {
        q_embed_37_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_38_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_38_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_38_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_38_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_38_0_0_V_address0.read();
    } else {
        q_embed_38_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_38_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_38_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_38_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_38_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_38_0_0_V_ce0.read();
    } else {
        q_embed_38_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_38_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_38_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_38_0_0_V_we0.read();
    } else {
        q_embed_38_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_39_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_39_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_39_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_39_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_39_0_0_V_address0.read();
    } else {
        q_embed_39_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_39_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_39_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_39_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_39_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_39_0_0_V_ce0.read();
    } else {
        q_embed_39_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_39_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_39_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_39_0_0_V_we0.read();
    } else {
        q_embed_39_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_3_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_3_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_3_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_3_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_3_0_V_address0.read();
    } else {
        q_embed_3_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_3_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_3_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_3_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_3_0_V_ce0.read();
    } else {
        q_embed_3_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_3_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_3_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_3_0_V_we0.read();
    } else {
        q_embed_3_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_40_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_40_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_40_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_40_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_40_0_0_V_address0.read();
    } else {
        q_embed_40_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_40_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_40_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_40_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_40_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_40_0_0_V_ce0.read();
    } else {
        q_embed_40_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_40_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_40_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_40_0_0_V_we0.read();
    } else {
        q_embed_40_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_41_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_41_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_41_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_41_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_41_0_0_V_address0.read();
    } else {
        q_embed_41_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_41_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_41_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_41_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_41_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_41_0_0_V_ce0.read();
    } else {
        q_embed_41_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_41_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_41_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_41_0_0_V_we0.read();
    } else {
        q_embed_41_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_42_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_42_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_42_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_42_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_42_0_0_V_address0.read();
    } else {
        q_embed_42_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_42_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_42_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_42_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_42_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_42_0_0_V_ce0.read();
    } else {
        q_embed_42_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_42_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_42_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_42_0_0_V_we0.read();
    } else {
        q_embed_42_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_43_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_43_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_43_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_43_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_43_0_0_V_address0.read();
    } else {
        q_embed_43_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_43_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_43_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_43_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_43_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_43_0_0_V_ce0.read();
    } else {
        q_embed_43_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_43_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_43_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_43_0_0_V_we0.read();
    } else {
        q_embed_43_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_44_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_44_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_44_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_44_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_44_0_0_V_address0.read();
    } else {
        q_embed_44_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_44_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_44_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_44_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_44_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_44_0_0_V_ce0.read();
    } else {
        q_embed_44_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_44_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_44_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_44_0_0_V_we0.read();
    } else {
        q_embed_44_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_45_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_45_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_45_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_45_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_45_0_0_V_address0.read();
    } else {
        q_embed_45_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_45_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_45_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_45_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_45_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_45_0_0_V_ce0.read();
    } else {
        q_embed_45_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_45_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_45_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_45_0_0_V_we0.read();
    } else {
        q_embed_45_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_46_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_46_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_46_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_46_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_46_0_0_V_address0.read();
    } else {
        q_embed_46_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_46_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_46_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_46_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_46_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_46_0_0_V_ce0.read();
    } else {
        q_embed_46_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_46_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_46_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_46_0_0_V_we0.read();
    } else {
        q_embed_46_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_47_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_47_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_47_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_47_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_47_0_0_V_address0.read();
    } else {
        q_embed_47_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_47_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_47_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_47_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_47_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_47_0_0_V_ce0.read();
    } else {
        q_embed_47_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_47_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_47_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_47_0_0_V_we0.read();
    } else {
        q_embed_47_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_48_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_48_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_48_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_48_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_48_0_0_V_address0.read();
    } else {
        q_embed_48_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_48_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_48_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_48_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_48_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_48_0_0_V_ce0.read();
    } else {
        q_embed_48_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_48_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_48_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_48_0_0_V_we0.read();
    } else {
        q_embed_48_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_49_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_49_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_49_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_49_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_49_0_0_V_address0.read();
    } else {
        q_embed_49_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_49_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_49_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_49_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_49_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_49_0_0_V_ce0.read();
    } else {
        q_embed_49_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_49_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_49_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_49_0_0_V_we0.read();
    } else {
        q_embed_49_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_4_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_4_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_4_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_4_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_4_0_V_address0.read();
    } else {
        q_embed_4_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_4_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_4_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_4_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_4_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_4_0_V_ce0.read();
    } else {
        q_embed_4_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_4_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_4_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_4_0_V_we0.read();
    } else {
        q_embed_4_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_50_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_50_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_50_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_50_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_50_0_0_V_address0.read();
    } else {
        q_embed_50_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_50_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_50_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_50_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_50_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_50_0_0_V_ce0.read();
    } else {
        q_embed_50_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_50_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_50_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_50_0_0_V_we0.read();
    } else {
        q_embed_50_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_51_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_51_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_51_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_51_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_51_0_0_V_address0.read();
    } else {
        q_embed_51_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_51_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_51_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_51_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_51_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_51_0_0_V_ce0.read();
    } else {
        q_embed_51_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_51_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_51_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_51_0_0_V_we0.read();
    } else {
        q_embed_51_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_52_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_52_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_52_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_52_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_52_0_0_V_address0.read();
    } else {
        q_embed_52_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_52_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_52_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_52_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_52_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_52_0_0_V_ce0.read();
    } else {
        q_embed_52_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_52_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_52_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_52_0_0_V_we0.read();
    } else {
        q_embed_52_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_53_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_53_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_53_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_53_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_53_0_0_V_address0.read();
    } else {
        q_embed_53_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_53_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_53_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_53_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_53_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_53_0_0_V_ce0.read();
    } else {
        q_embed_53_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_53_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_53_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_53_0_0_V_we0.read();
    } else {
        q_embed_53_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_54_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_54_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_54_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_54_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_54_0_0_V_address0.read();
    } else {
        q_embed_54_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_54_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_54_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_54_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_54_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_54_0_0_V_ce0.read();
    } else {
        q_embed_54_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_54_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_54_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_54_0_0_V_we0.read();
    } else {
        q_embed_54_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_55_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_55_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_55_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_55_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_55_0_0_V_address0.read();
    } else {
        q_embed_55_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_55_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_55_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_55_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_55_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_55_0_0_V_ce0.read();
    } else {
        q_embed_55_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_55_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_55_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_55_0_0_V_we0.read();
    } else {
        q_embed_55_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_56_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_56_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_56_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_56_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_56_0_0_V_address0.read();
    } else {
        q_embed_56_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_56_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_56_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_56_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_56_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_56_0_0_V_ce0.read();
    } else {
        q_embed_56_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_56_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_56_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_56_0_0_V_we0.read();
    } else {
        q_embed_56_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_57_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_57_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_57_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_57_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_57_0_0_V_address0.read();
    } else {
        q_embed_57_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_57_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_57_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_57_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_57_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_57_0_0_V_ce0.read();
    } else {
        q_embed_57_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_57_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_57_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_57_0_0_V_we0.read();
    } else {
        q_embed_57_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_58_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_58_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_58_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_58_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_58_0_0_V_address0.read();
    } else {
        q_embed_58_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_58_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_58_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_58_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_58_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_58_0_0_V_ce0.read();
    } else {
        q_embed_58_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_58_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_58_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_58_0_0_V_we0.read();
    } else {
        q_embed_58_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_59_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_59_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_59_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_59_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_59_0_0_V_address0.read();
    } else {
        q_embed_59_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_59_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_59_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_59_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_59_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_59_0_0_V_ce0.read();
    } else {
        q_embed_59_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_59_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_59_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_59_0_0_V_we0.read();
    } else {
        q_embed_59_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_5_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_5_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_5_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_5_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_5_0_V_address0.read();
    } else {
        q_embed_5_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_5_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_5_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_5_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_5_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_5_0_V_ce0.read();
    } else {
        q_embed_5_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_5_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_5_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_5_0_V_we0.read();
    } else {
        q_embed_5_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_60_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_60_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_60_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_60_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_60_0_0_V_address0.read();
    } else {
        q_embed_60_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_60_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_60_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_60_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_60_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_60_0_0_V_ce0.read();
    } else {
        q_embed_60_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_60_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_60_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_60_0_0_V_we0.read();
    } else {
        q_embed_60_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_61_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_61_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_61_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_61_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_61_0_0_V_address0.read();
    } else {
        q_embed_61_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_61_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_61_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_61_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_61_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_61_0_0_V_ce0.read();
    } else {
        q_embed_61_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_61_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_61_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_61_0_0_V_we0.read();
    } else {
        q_embed_61_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_62_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_62_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_62_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_62_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_62_0_0_V_address0.read();
    } else {
        q_embed_62_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_62_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_62_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_62_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_62_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_62_0_0_V_ce0.read();
    } else {
        q_embed_62_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_62_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_62_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_62_0_0_V_we0.read();
    } else {
        q_embed_62_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_63_0_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_63_0_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_63_0_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_63_0_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_63_0_0_V_address0.read();
    } else {
        q_embed_63_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void attention::thread_q_embed_63_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_63_0_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_63_0_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_63_0_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_63_0_0_V_ce0.read();
    } else {
        q_embed_63_0_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_63_0_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_63_0_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_63_0_0_V_we0.read();
    } else {
        q_embed_63_0_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_6_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_6_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_6_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_6_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_6_0_V_address0.read();
    } else {
        q_embed_6_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_6_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_6_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_6_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_6_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_6_0_V_ce0.read();
    } else {
        q_embed_6_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_6_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_6_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_6_0_V_we0.read();
    } else {
        q_embed_6_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_7_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_7_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_7_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_7_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_7_0_V_address0.read();
    } else {
        q_embed_7_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_7_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_7_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_7_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_7_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_7_0_V_ce0.read();
    } else {
        q_embed_7_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_7_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_7_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_7_0_V_we0.read();
    } else {
        q_embed_7_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_8_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_8_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_8_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_8_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_8_0_V_address0.read();
    } else {
        q_embed_8_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_8_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_8_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_8_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_8_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_8_0_V_ce0.read();
    } else {
        q_embed_8_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_8_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_8_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_8_0_V_we0.read();
    } else {
        q_embed_8_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_9_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_9_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_output_q_9_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_9_0_V_address0 = grp_GEMM_3D_float_fu_3929_input_1_9_0_V_address0.read();
    } else {
        q_embed_9_0_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void attention::thread_q_embed_9_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_9_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_output_q_9_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        q_embed_9_0_V_ce0 = grp_GEMM_3D_float_fu_3929_input_1_9_0_V_ce0.read();
    } else {
        q_embed_9_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_embed_9_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_embed_9_0_V_we0 = grp_apply_rotary_pos_emb_fu_4357_output_q_9_0_V_we0.read();
    } else {
        q_embed_9_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        q_proj_0_V_address0 = grp_reshape_2D_to_3D_fu_4510_output_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_proj_0_V_address0 = grp_apply_rotary_pos_emb_fu_4357_input_q_0_V_address0.read();
    } else {
        q_proj_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_q_proj_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        q_proj_0_V_ce0 = grp_reshape_2D_to_3D_fu_4510_output_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_proj_0_V_ce0 = grp_apply_rotary_pos_emb_fu_4357_input_q_0_V_ce0.read();
    } else {
        q_proj_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        q_proj_0_V_ce1 = grp_apply_rotary_pos_emb_fu_4357_input_q_0_V_ce1.read();
    } else {
        q_proj_0_V_ce1 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        q_proj_0_V_we0 = grp_reshape_2D_to_3D_fu_4510_output_0_V_we0.read();
    } else {
        q_proj_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_re_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        q_proj_re_0_V_address0 = grp_init_2d_mem_fu_4516_mem_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        q_proj_re_0_V_address0 = grp_reshape_2D_to_3D_fu_4510_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_0_V_address0 = grp_linear_forward_no_mu_fu_3341_output_0_V_address0.read();
    } else {
        q_proj_re_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_q_proj_re_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        q_proj_re_0_V_ce0 = grp_init_2d_mem_fu_4516_mem_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        q_proj_re_0_V_ce0 = grp_reshape_2D_to_3D_fu_4510_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_0_V_ce0 = grp_linear_forward_no_mu_fu_3341_output_0_V_ce0.read();
    } else {
        q_proj_re_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_proj_re_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        q_proj_re_0_V_d0 = grp_init_2d_mem_fu_4516_mem_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_0_V_d0 = grp_linear_forward_no_mu_fu_3341_output_0_V_d0.read();
    } else {
        q_proj_re_0_V_d0 =  (sc_lv<38>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_q_proj_re_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        q_proj_re_0_V_we0 = grp_init_2d_mem_fu_4516_mem_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_proj_re_0_V_we0 = grp_linear_forward_no_mu_fu_3341_output_0_V_we0.read();
    } else {
        q_proj_re_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_0_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_0_ce0.read();
    } else {
        q_weights_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_10_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_10_ce0.read();
    } else {
        q_weights_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_11_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_11_ce0.read();
    } else {
        q_weights_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_12_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_12_ce0.read();
    } else {
        q_weights_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_13_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_13_ce0.read();
    } else {
        q_weights_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_14_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_14_ce0.read();
    } else {
        q_weights_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_15_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_15_ce0.read();
    } else {
        q_weights_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_16_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_16_ce0.read();
    } else {
        q_weights_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_17_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_17_ce0.read();
    } else {
        q_weights_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_18_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_18_ce0.read();
    } else {
        q_weights_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_19_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_19_ce0.read();
    } else {
        q_weights_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_1_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_1_ce0.read();
    } else {
        q_weights_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_20_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_20_ce0.read();
    } else {
        q_weights_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_21_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_21_ce0.read();
    } else {
        q_weights_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_22_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_22_ce0.read();
    } else {
        q_weights_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_23_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_23_ce0.read();
    } else {
        q_weights_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_24_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_24_ce0.read();
    } else {
        q_weights_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_25_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_25_ce0.read();
    } else {
        q_weights_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_26_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_26_ce0.read();
    } else {
        q_weights_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_27_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_27_ce0.read();
    } else {
        q_weights_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_28_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_28_ce0.read();
    } else {
        q_weights_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_29_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_29_ce0.read();
    } else {
        q_weights_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_2_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_2_ce0.read();
    } else {
        q_weights_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_30_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_30_ce0.read();
    } else {
        q_weights_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_31_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_31_ce0.read();
    } else {
        q_weights_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_32_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_32_ce0.read();
    } else {
        q_weights_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_33_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_33_ce0.read();
    } else {
        q_weights_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_34_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_34_ce0.read();
    } else {
        q_weights_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_35_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_35_ce0.read();
    } else {
        q_weights_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_36_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_36_ce0.read();
    } else {
        q_weights_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_37_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_37_ce0.read();
    } else {
        q_weights_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_38_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_38_ce0.read();
    } else {
        q_weights_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_39_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_39_ce0.read();
    } else {
        q_weights_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_3_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_3_ce0.read();
    } else {
        q_weights_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_40_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_40_ce0.read();
    } else {
        q_weights_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_41_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_41_ce0.read();
    } else {
        q_weights_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_42_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_42_ce0.read();
    } else {
        q_weights_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_43_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_43_ce0.read();
    } else {
        q_weights_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_44_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_44_ce0.read();
    } else {
        q_weights_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_45_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_45_ce0.read();
    } else {
        q_weights_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_q_weights_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        q_weights_46_ce0 = grp_linear_forward_no_mu_fu_3341_packed_weights_46_ce0.read();
    } else {
        q_weights_46_ce0 = ap_const_logic_0;
    }
}

}

