#include "attention.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void attention::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state71.read())) {
        d4_0_0_reg_1339 = add_ln689_reg_4642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln688_fu_4010_p2.read()))) {
        d4_0_0_reg_1339 = ap_const_lv7_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_GEMM_3D_float2_fu_2085_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) && 
             esl_seteq<1,1,1>(icmp_ln673_fu_3929_p2.read(), ap_const_lv1_1))) {
            grp_GEMM_3D_float2_fu_2085_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_GEMM_3D_float2_fu_2085_ap_ready.read())) {
            grp_GEMM_3D_float2_fu_2085_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_GEMM_3D_float_fu_2077_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
             esl_seteq<1,1,1>(icmp_ln626_fu_3694_p2.read(), ap_const_lv1_1))) {
            grp_GEMM_3D_float_fu_2077_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_GEMM_3D_float_fu_2077_ap_ready.read())) {
            grp_GEMM_3D_float_fu_2077_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_apply_rotary_pos_emb_fu_2063_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
             esl_seteq<1,1,1>(icmp_ln590_fu_3392_p2.read(), ap_const_lv1_1))) {
            grp_apply_rotary_pos_emb_fu_2063_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_apply_rotary_pos_emb_fu_2063_ap_ready.read())) {
            grp_apply_rotary_pos_emb_fu_2063_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_cache_update_fu_2092_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
              esl_seteq<1,1,1>(icmp_ln607_fu_3575_p2.read(), ap_const_lv1_1)) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
            grp_cache_update_fu_2092_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_cache_update_fu_2092_ap_ready.read())) {
            grp_cache_update_fu_2092_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_linear_forward_no_mu_fu_1372_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln736_fu_4138_p2.read())))) {
            grp_linear_forward_no_mu_fu_1372_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_linear_forward_no_mu_fu_1372_ap_ready.read())) {
            grp_linear_forward_no_mu_fu_1372_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_linear_forward_no_mu_fu_1643_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
            grp_linear_forward_no_mu_fu_1643_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_linear_forward_no_mu_fu_1643_ap_ready.read())) {
            grp_linear_forward_no_mu_fu_1643_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_quantize_activation_fu_2055_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()))) {
            grp_quantize_activation_fu_2055_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_quantize_activation_fu_2055_ap_ready.read())) {
            grp_quantize_activation_fu_2055_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_reshape_2D_to_3D_fu_2109_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
            grp_reshape_2D_to_3D_fu_2109_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_reshape_2D_to_3D_fu_2109_ap_ready.read())) {
            grp_reshape_2D_to_3D_fu_2109_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_reshape_2D_to_3D_fu_2117_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
            grp_reshape_2D_to_3D_fu_2117_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_reshape_2D_to_3D_fu_2117_ap_ready.read())) {
            grp_reshape_2D_to_3D_fu_2117_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_rms_norm_fu_2031_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
              esl_seteq<1,1,1>(icmp_ln480_fu_2152_p2.read(), ap_const_lv1_1)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln697_fu_4121_p2.read())))) {
            grp_rms_norm_fu_2031_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_rms_norm_fu_2031_ap_ready.read())) {
            grp_rms_norm_fu_2031_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_softmax_fu_2011_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) && 
             esl_seteq<1,1,1>(icmp_ln664_fu_3865_p2.read(), ap_const_lv1_1))) {
            grp_softmax_fu_2011_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_softmax_fu_2011_ap_ready.read())) {
            grp_softmax_fu_2011_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_transpose_last_two_d_fu_2102_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
            grp_transpose_last_two_d_fu_2102_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_transpose_last_two_d_fu_2102_ap_ready.read())) {
            grp_transpose_last_two_d_fu_2102_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(icmp_ln636_fu_3758_p2.read(), ap_const_lv1_1))) {
        h6_0_reg_1262 = ap_const_lv5_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        h6_0_reg_1262 = h6_reg_4556.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) && 
         esl_seteq<1,1,1>(icmp_ln689_fu_4086_p2.read(), ap_const_lv1_1))) {
        h7_0_0_reg_1328 = add_ln688_reg_4624.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln683_fu_3993_p2.read()))) {
        h7_0_0_reg_1328 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
         esl_seteq<1,1,1>(icmp_ln638_fu_3796_p2.read(), ap_const_lv1_1))) {
        i11_0_reg_1240 = i11_reg_4525.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
                esl_seteq<1,1,1>(grp_GEMM_3D_float_fu_2077_ap_done.read(), ap_const_logic_1))) {
        i11_0_reg_1240 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        k10_0_0_reg_1251 = add_ln638_reg_4538.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln636_fu_3758_p2.read()))) {
        k10_0_0_reg_1251 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        v284_0_0_reg_1064 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln480_fu_2152_p2.read()))) {
        v284_0_0_reg_1064 = add_ln480_fu_2158_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(grp_quantize_activation_fu_2055_ap_done.read(), ap_const_logic_1))) {
        v295_0_0_reg_1075 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln502_fu_2169_p2.read()))) {
        v295_0_0_reg_1075 = add_ln502_fu_2175_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(icmp_ln502_fu_2169_p2.read(), ap_const_lv1_1))) {
        v298_0_0_reg_1086 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln508_fu_2186_p2.read()))) {
        v298_0_0_reg_1086 = add_ln508_fu_2192_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(icmp_ln508_fu_2186_p2.read(), ap_const_lv1_1))) {
        v301_0_0_reg_1097 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln514_fu_2203_p2.read()))) {
        v301_0_0_reg_1097 = add_ln514_fu_2209_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln584_fu_3366_p2.read()))) {
        v334_0_reg_1108 = v334_reg_4394.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
                esl_seteq<1,1,1>(ap_block_state16_on_subcall_done.read(), ap_const_boolean_0))) {
        v334_0_reg_1108 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
         esl_seteq<1,1,1>(icmp_ln582_4_fu_3328_p2.read(), ap_const_lv1_0))) {
        v336_0_0_reg_1119 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln584_fu_3366_p2.read()))) {
        v336_0_0_reg_1119 = add_ln584_fu_3372_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
         esl_seteq<1,1,1>(icmp_ln582_4_fu_3328_p2.read(), ap_const_lv1_1))) {
        v338_0_reg_1130 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln592_fu_3430_p2.read()))) {
        v338_0_reg_1130 = v338_reg_4415.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln590_fu_3392_p2.read()))) {
        v340_0_0_reg_1141 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln592_fu_3430_p2.read()))) {
        v340_0_0_reg_1141 = add_ln592_fu_3436_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
         esl_seteq<1,1,1>(icmp_ln600_fu_3502_p2.read(), ap_const_lv1_1))) {
        v342_0_reg_1152 = v342_reg_4436.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
                esl_seteq<1,1,1>(grp_apply_rotary_pos_emb_fu_2063_ap_done.read(), ap_const_logic_1))) {
        v342_0_reg_1152 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln601_fu_3549_p2.read()))) {
        v343_0_reg_1163 = v343_reg_4449.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln599_fu_3456_p2.read()))) {
        v343_0_reg_1163 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_fu_3502_p2.read()))) {
        v344_0_reg_1174 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln601_fu_3549_p2.read()))) {
        v344_0_reg_1174 = v344_fu_3555_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
         esl_seteq<1,1,1>(icmp_ln599_fu_3456_p2.read(), ap_const_lv1_1))) {
        v346_0_reg_1185 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
                esl_seteq<1,1,1>(icmp_ln608_fu_3621_p2.read(), ap_const_lv1_1))) {
        v346_0_reg_1185 = v346_reg_4470.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln609_fu_3668_p2.read()))) {
        v347_0_reg_1196 = v347_reg_4483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln607_fu_3575_p2.read()))) {
        v347_0_reg_1196 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln608_fu_3621_p2.read()))) {
        v348_0_reg_1207 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln609_fu_3668_p2.read()))) {
        v348_0_reg_1207 = v348_fu_3674_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln628_fu_3732_p2.read()))) {
        v354_0_reg_1218 = v354_reg_4504.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
                esl_seteq<1,1,1>(ap_block_state30_on_subcall_done.read(), ap_const_boolean_0))) {
        v354_0_reg_1218 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln626_fu_3694_p2.read()))) {
        v356_0_0_reg_1229 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln628_fu_3732_p2.read()))) {
        v356_0_0_reg_1229 = add_ln628_fu_3738_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
         esl_seteq<1,1,1>(icmp_ln653_fu_3822_p2.read(), ap_const_lv1_1))) {
        v374_0_reg_1273 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln666_fu_3903_p2.read()))) {
        v374_0_reg_1273 = v374_reg_4574.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln664_fu_3865_p2.read()))) {
        v376_0_0_reg_1284 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln666_fu_3903_p2.read()))) {
        v376_0_0_reg_1284 = add_ln666_fu_3909_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln675_fu_3967_p2.read()))) {
        v378_0_reg_1295 = v378_reg_4595.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) && 
                esl_seteq<1,1,1>(grp_softmax_fu_2011_ap_done.read(), ap_const_logic_1))) {
        v378_0_reg_1295 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln673_fu_3929_p2.read()))) {
        v380_0_0_reg_1306 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln675_fu_3967_p2.read()))) {
        v380_0_0_reg_1306 = add_ln675_fu_3973_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) && 
         esl_seteq<1,1,1>(grp_GEMM_3D_float2_fu_2085_ap_done.read(), ap_const_logic_1))) {
        v383_0_0_reg_1317 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln683_fu_3993_p2.read()))) {
        v383_0_0_reg_1317 = add_ln683_fu_3999_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && 
         esl_seteq<1,1,1>(icmp_ln688_fu_4010_p2.read(), ap_const_lv1_1))) {
        v390_0_0_reg_1350 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln697_fu_4121_p2.read()))) {
        v390_0_0_reg_1350 = add_ln697_fu_4127_p2.read();
    }
    if ((esl_seteq<1,1,1>(grp_quantize_activation_fu_2055_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()))) {
        v408_0_0_reg_1361 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln736_fu_4138_p2.read()))) {
        v408_0_0_reg_1361 = add_ln736_fu_4144_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        add_ln638_reg_4538 = add_ln638_fu_3802_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read())) {
        add_ln688_reg_4624 = add_ln688_fu_4016_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        add_ln689_reg_4642 = add_ln689_fu_4092_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln689_fu_4086_p2.read()))) {
        add_ln691_reg_4652 = add_ln691_fu_4108_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln653_fu_3822_p2.read()))) {
        attn_weights_0_addr_1_reg_4561 =  (sc_lv<7>) (sext_ln657_fu_3860_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln638_fu_3796_p2.read()))) {
        attn_weights_0_addr_2_reg_4543 =  (sc_lv<7>) (sext_ln639_fu_3817_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        h6_reg_4556 = h6_fu_3828_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        i11_reg_4525 = i11_fu_3764_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        icmp_ln571_1_reg_4261 = icmp_ln571_1_fu_2557_p2.read();
        icmp_ln571_2_reg_4301 = icmp_ln571_2_fu_2675_p2.read();
        icmp_ln581_1_reg_4267 = icmp_ln581_1_fu_2569_p2.read();
        icmp_ln581_2_reg_4307 = icmp_ln581_2_fu_2687_p2.read();
        icmp_ln582_1_reg_4279 = icmp_ln582_1_fu_2595_p2.read();
        icmp_ln582_2_reg_4319 = icmp_ln582_2_fu_2713_p2.read();
        man_V_5_reg_4256 = man_V_5_fu_2549_p3.read();
        man_V_8_reg_4296 = man_V_8_fu_2667_p3.read();
        sh_amt_1_reg_4273 = sh_amt_1_fu_2587_p3.read();
        sh_amt_2_reg_4313 = sh_amt_2_fu_2705_p3.read();
        tmp_56_reg_4291 = sh_amt_1_fu_2587_p3.read().range(11, 5);
        tmp_69_reg_4331 = sh_amt_2_fu_2705_p3.read().range(11, 5);
        trunc_ln583_1_reg_4285 = trunc_ln583_1_fu_2601_p1.read();
        trunc_ln583_2_reg_4325 = trunc_ln583_2_fu_2719_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        icmp_ln571_3_reg_4351 = icmp_ln571_3_fu_3111_p2.read();
        icmp_ln581_3_reg_4357 = icmp_ln581_3_fu_3123_p2.read();
        icmp_ln582_3_reg_4369 = icmp_ln582_3_fu_3149_p2.read();
        man_V_11_reg_4346 = man_V_11_fu_3103_p3.read();
        sh_amt_3_reg_4363 = sh_amt_3_fu_3141_p3.read();
        tmp_72_reg_4381 = sh_amt_3_fu_3141_p3.read().range(11, 5);
        trunc_ln583_3_reg_4375 = trunc_ln583_3_fu_3155_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        icmp_ln571_reg_4216 = icmp_ln571_fu_2280_p2.read();
        icmp_ln581_reg_4222 = icmp_ln581_fu_2292_p2.read();
        icmp_ln582_reg_4234 = icmp_ln582_fu_2318_p2.read();
        man_V_2_reg_4211 = man_V_2_fu_2272_p3.read();
        sh_amt_reg_4228 = sh_amt_fu_2310_p3.read();
        tmp_43_reg_4246 = sh_amt_fu_2310_p3.read().range(11, 5);
        trunc_ln583_reg_4240 = trunc_ln583_fu_2324_p1.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
  esl_seteq<1,1,1>(grp_quantize_activation_fu_2055_ap_done.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(grp_quantize_activation_fu_2055_ap_done.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())))) {
        reg_2140 = grp_quantize_activation_fu_2055_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()))) {
        reg_2146 = attn_weights_0_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln599_fu_3456_p2.read()))) {
        sext_ln602_reg_4441 = sext_ln602_fu_3498_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln607_fu_3575_p2.read()))) {
        sext_ln610_reg_4475 = sext_ln610_fu_3617_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && esl_seteq<1,1,1>(icmp_ln582_4_fu_3328_p2.read(), ap_const_lv1_0))) {
        sub_ln585_reg_4399 = sub_ln585_fu_3360_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln590_fu_3392_p2.read()))) {
        sub_ln593_reg_4420 = sub_ln593_fu_3424_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln600_fu_3502_p2.read()))) {
        sub_ln602_1_reg_4454 = sub_ln602_1_fu_3543_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln608_fu_3621_p2.read()))) {
        sub_ln610_1_reg_4488 = sub_ln610_1_fu_3662_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln626_fu_3694_p2.read()))) {
        sub_ln629_reg_4509 = sub_ln629_fu_3726_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln636_fu_3758_p2.read()))) {
        sub_ln639_reg_4530 = sub_ln639_fu_3790_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln664_fu_3865_p2.read()))) {
        sub_ln667_reg_4579 = sub_ln667_fu_3897_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln673_fu_3929_p2.read()))) {
        sub_ln676_reg_4600 = sub_ln676_fu_3961_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln688_fu_4010_p2.read()))) {
        sub_ln690_reg_4629 = sub_ln690_fu_4042_p2.read();
        sub_ln691_reg_4634 = sub_ln691_fu_4076_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        v2_reg_4566 = grp_fu_2124_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v302_V_reg_4251 = v302_V_fu_2489_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1372_ap_done.read(), ap_const_logic_1))) {
        v304_V_reg_4336 = v304_V_fu_2884_p3.read();
        v306_V_reg_4341 = v306_V_fu_3043_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_block_state16_on_subcall_done.read(), ap_const_boolean_0))) {
        v308_V_reg_4386 = v308_V_fu_3320_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        v334_reg_4394 = v334_fu_3334_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        v338_reg_4415 = v338_fu_3398_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        v342_reg_4436 = v342_fu_3462_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        v343_reg_4449 = v343_fu_3508_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        v346_reg_4470 = v346_fu_3581_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        v347_reg_4483 = v347_fu_3627_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        v354_reg_4504 = v354_fu_3700_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        v374_reg_4574 = v374_fu_3871_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read())) {
        v378_reg_4595 = v378_fu_3935_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        v_reg_4548 = grp_fu_2129_p2.read();
    }
}

void attention::thread_ap_NS_fsm() {
    if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state1))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state2;
        } else {
            ap_NS_fsm = ap_ST_fsm_state1;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state2))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln480_fu_2152_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state2;
        } else {
            ap_NS_fsm = ap_ST_fsm_state3;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state3))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(grp_rms_norm_fu_2031_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state4;
        } else {
            ap_NS_fsm = ap_ST_fsm_state3;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state4))
    {
        ap_NS_fsm = ap_ST_fsm_state5;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state5))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(grp_quantize_activation_fu_2055_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state6;
        } else {
            ap_NS_fsm = ap_ST_fsm_state5;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state6))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(icmp_ln502_fu_2169_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state7;
        } else {
            ap_NS_fsm = ap_ST_fsm_state6;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state7))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(icmp_ln508_fu_2186_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state8;
        } else {
            ap_NS_fsm = ap_ST_fsm_state7;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state8))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln514_fu_2203_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state8;
        } else {
            ap_NS_fsm = ap_ST_fsm_state9;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state9))
    {
        ap_NS_fsm = ap_ST_fsm_state10;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state10))
    {
        ap_NS_fsm = ap_ST_fsm_state11;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state11))
    {
        ap_NS_fsm = ap_ST_fsm_state12;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state12))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1372_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state13;
        } else {
            ap_NS_fsm = ap_ST_fsm_state12;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state13))
    {
        ap_NS_fsm = ap_ST_fsm_state14;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state14))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && esl_seteq<1,1,1>(ap_block_state14_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_NS_fsm = ap_ST_fsm_state15;
        } else {
            ap_NS_fsm = ap_ST_fsm_state14;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state15))
    {
        ap_NS_fsm = ap_ST_fsm_state16;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state16))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_block_state16_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_NS_fsm = ap_ST_fsm_state17;
        } else {
            ap_NS_fsm = ap_ST_fsm_state16;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state17))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && esl_seteq<1,1,1>(icmp_ln582_4_fu_3328_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state19;
        } else {
            ap_NS_fsm = ap_ST_fsm_state18;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state18))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln584_fu_3366_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state17;
        } else {
            ap_NS_fsm = ap_ST_fsm_state18;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state19))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln590_fu_3392_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state20;
        } else {
            ap_NS_fsm = ap_ST_fsm_state21;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state20))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln592_fu_3430_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state19;
        } else {
            ap_NS_fsm = ap_ST_fsm_state20;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state21))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && esl_seteq<1,1,1>(grp_apply_rotary_pos_emb_fu_2063_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state22;
        } else {
            ap_NS_fsm = ap_ST_fsm_state21;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state22))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && esl_seteq<1,1,1>(icmp_ln599_fu_3456_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state25;
        } else {
            ap_NS_fsm = ap_ST_fsm_state23;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state23))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && esl_seteq<1,1,1>(icmp_ln600_fu_3502_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state22;
        } else {
            ap_NS_fsm = ap_ST_fsm_state24;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state24))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln601_fu_3549_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state23;
        } else {
            ap_NS_fsm = ap_ST_fsm_state24;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state25))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln607_fu_3575_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state26;
        } else {
            ap_NS_fsm = ap_ST_fsm_state28;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state26))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(icmp_ln608_fu_3621_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state25;
        } else {
            ap_NS_fsm = ap_ST_fsm_state27;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state27))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln609_fu_3668_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state26;
        } else {
            ap_NS_fsm = ap_ST_fsm_state27;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state28))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) && esl_seteq<1,1,1>(grp_cache_update_fu_2092_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state29;
        } else {
            ap_NS_fsm = ap_ST_fsm_state28;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state29))
    {
        ap_NS_fsm = ap_ST_fsm_state30;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state30))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && esl_seteq<1,1,1>(ap_block_state30_on_subcall_done.read(), ap_const_boolean_0))) {
            ap_NS_fsm = ap_ST_fsm_state31;
        } else {
            ap_NS_fsm = ap_ST_fsm_state30;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state31))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln626_fu_3694_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state32;
        } else {
            ap_NS_fsm = ap_ST_fsm_state33;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state32))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln628_fu_3732_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state31;
        } else {
            ap_NS_fsm = ap_ST_fsm_state32;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state33))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(grp_GEMM_3D_float_fu_2077_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state34;
        } else {
            ap_NS_fsm = ap_ST_fsm_state33;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state34))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && esl_seteq<1,1,1>(icmp_ln636_fu_3758_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state54;
        } else {
            ap_NS_fsm = ap_ST_fsm_state35;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state35))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && esl_seteq<1,1,1>(icmp_ln638_fu_3796_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state34;
        } else {
            ap_NS_fsm = ap_ST_fsm_state36;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state36))
    {
        ap_NS_fsm = ap_ST_fsm_state37;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state37))
    {
        ap_NS_fsm = ap_ST_fsm_state38;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state38))
    {
        ap_NS_fsm = ap_ST_fsm_state39;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state39))
    {
        ap_NS_fsm = ap_ST_fsm_state40;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state40))
    {
        ap_NS_fsm = ap_ST_fsm_state41;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state41))
    {
        ap_NS_fsm = ap_ST_fsm_state42;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state42))
    {
        ap_NS_fsm = ap_ST_fsm_state43;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state43))
    {
        ap_NS_fsm = ap_ST_fsm_state44;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state44))
    {
        ap_NS_fsm = ap_ST_fsm_state45;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state45))
    {
        ap_NS_fsm = ap_ST_fsm_state46;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state46))
    {
        ap_NS_fsm = ap_ST_fsm_state47;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state47))
    {
        ap_NS_fsm = ap_ST_fsm_state48;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state48))
    {
        ap_NS_fsm = ap_ST_fsm_state49;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state49))
    {
        ap_NS_fsm = ap_ST_fsm_state50;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state50))
    {
        ap_NS_fsm = ap_ST_fsm_state51;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state51))
    {
        ap_NS_fsm = ap_ST_fsm_state52;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state52))
    {
        ap_NS_fsm = ap_ST_fsm_state53;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state53))
    {
        ap_NS_fsm = ap_ST_fsm_state35;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state54))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && esl_seteq<1,1,1>(icmp_ln653_fu_3822_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state62;
        } else {
            ap_NS_fsm = ap_ST_fsm_state55;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state55))
    {
        ap_NS_fsm = ap_ST_fsm_state56;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state56))
    {
        ap_NS_fsm = ap_ST_fsm_state57;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state57))
    {
        ap_NS_fsm = ap_ST_fsm_state58;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state58))
    {
        ap_NS_fsm = ap_ST_fsm_state59;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state59))
    {
        ap_NS_fsm = ap_ST_fsm_state60;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state60))
    {
        ap_NS_fsm = ap_ST_fsm_state61;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state61))
    {
        ap_NS_fsm = ap_ST_fsm_state54;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state62))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln664_fu_3865_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state63;
        } else {
            ap_NS_fsm = ap_ST_fsm_state64;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state63))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln666_fu_3903_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state62;
        } else {
            ap_NS_fsm = ap_ST_fsm_state63;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state64))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state64.read()) && esl_seteq<1,1,1>(grp_softmax_fu_2011_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state65;
        } else {
            ap_NS_fsm = ap_ST_fsm_state64;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state65))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state65.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln673_fu_3929_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state66;
        } else {
            ap_NS_fsm = ap_ST_fsm_state67;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state66))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state66.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln675_fu_3967_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state65;
        } else {
            ap_NS_fsm = ap_ST_fsm_state66;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state67))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state67.read()) && esl_seteq<1,1,1>(grp_GEMM_3D_float2_fu_2085_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state68;
        } else {
            ap_NS_fsm = ap_ST_fsm_state67;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state68))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state68.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln683_fu_3993_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state69;
        } else {
            ap_NS_fsm = ap_ST_fsm_state68;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state69))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state69.read()) && esl_seteq<1,1,1>(icmp_ln688_fu_4010_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state72;
        } else {
            ap_NS_fsm = ap_ST_fsm_state70;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state70))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) && esl_seteq<1,1,1>(icmp_ln689_fu_4086_p2.read(), ap_const_lv1_1))) {
            ap_NS_fsm = ap_ST_fsm_state69;
        } else {
            ap_NS_fsm = ap_ST_fsm_state71;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state71))
    {
        ap_NS_fsm = ap_ST_fsm_state70;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state72))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln697_fu_4121_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state72;
        } else {
            ap_NS_fsm = ap_ST_fsm_state73;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state73))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) && esl_seteq<1,1,1>(grp_rms_norm_fu_2031_ap_done.read(), ap_const_logic_1))) {
            ap_NS_fsm = ap_ST_fsm_state74;
        } else {
            ap_NS_fsm = ap_ST_fsm_state73;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state74))
    {
        ap_NS_fsm = ap_ST_fsm_state75;
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state75))
    {
        if ((esl_seteq<1,1,1>(grp_quantize_activation_fu_2055_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()))) {
            ap_NS_fsm = ap_ST_fsm_state76;
        } else {
            ap_NS_fsm = ap_ST_fsm_state75;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state76))
    {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln736_fu_4138_p2.read()))) {
            ap_NS_fsm = ap_ST_fsm_state76;
        } else {
            ap_NS_fsm = ap_ST_fsm_state77;
        }
    }
    else if (esl_seteq<1,77,77>(ap_CS_fsm.read(), ap_ST_fsm_state77))
    {
        if ((esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1372_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read()))) {
            ap_NS_fsm = ap_ST_fsm_state1;
        } else {
            ap_NS_fsm = ap_ST_fsm_state77;
        }
    }
    else
    {
        ap_NS_fsm =  (sc_lv<77>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}
}

