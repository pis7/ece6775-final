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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        d4_0_0_reg_1297 = add_ln638_reg_3395.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln637_fu_2938_p2.read()))) {
        d4_0_0_reg_1297 = ap_const_lv7_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_GEMM_3D_float2_fu_2127_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
             esl_seteq<1,1,1>(icmp_ln622_fu_2857_p2.read(), ap_const_lv1_1))) {
            grp_GEMM_3D_float2_fu_2127_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_GEMM_3D_float2_fu_2127_ap_ready.read())) {
            grp_GEMM_3D_float2_fu_2127_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_GEMM_3D_float_fu_2119_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
             esl_seteq<1,1,1>(icmp_ln575_fu_2589_p2.read(), ap_const_lv1_1))) {
            grp_GEMM_3D_float_fu_2119_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_GEMM_3D_float_fu_2119_ap_ready.read())) {
            grp_GEMM_3D_float_fu_2119_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_apply_rotary_pos_emb_fu_2095_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
             esl_seteq<1,1,1>(icmp_ln539_fu_2287_p2.read(), ap_const_lv1_1))) {
            grp_apply_rotary_pos_emb_fu_2095_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_apply_rotary_pos_emb_fu_2095_ap_ready.read())) {
            grp_apply_rotary_pos_emb_fu_2095_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_cache_update_fu_2109_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
              esl_seteq<1,1,1>(icmp_ln556_fu_2470_p2.read(), ap_const_lv1_1)) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()))) {
            grp_cache_update_fu_2109_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_cache_update_fu_2109_ap_ready.read())) {
            grp_cache_update_fu_2109_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_linear_forward_no_mu_fu_1330_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln496_fu_2206_p2.read())) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln666_fu_3066_p2.read())))) {
            grp_linear_forward_no_mu_fu_1330_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_linear_forward_no_mu_fu_1330_ap_ready.read())) {
            grp_linear_forward_no_mu_fu_1330_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_quantize_activation_fu_1802_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()))) {
            grp_quantize_activation_fu_1802_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_quantize_activation_fu_1802_ap_ready.read())) {
            grp_quantize_activation_fu_1802_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_reshape_2D_to_3D_fu_2141_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
            grp_reshape_2D_to_3D_fu_2141_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_reshape_2D_to_3D_fu_2141_ap_ready.read())) {
            grp_reshape_2D_to_3D_fu_2141_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_rms_norm_fu_1746_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
              esl_seteq<1,1,1>(icmp_ln463_fu_2155_p2.read(), ap_const_lv1_1)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
              esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln646_fu_3049_p2.read())))) {
            grp_rms_norm_fu_1746_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_rms_norm_fu_1746_ap_ready.read())) {
            grp_rms_norm_fu_1746_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_softmax_fu_1776_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
             esl_seteq<1,1,1>(icmp_ln613_fu_2793_p2.read(), ap_const_lv1_1))) {
            grp_softmax_fu_1776_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_softmax_fu_1776_ap_ready.read())) {
            grp_softmax_fu_1776_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_transpose_last_two_d_fu_2134_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
            grp_transpose_last_two_d_fu_2134_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_transpose_last_two_d_fu_2134_ap_ready.read())) {
            grp_transpose_last_two_d_fu_2134_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) && 
         esl_seteq<1,1,1>(icmp_ln638_fu_3014_p2.read(), ap_const_lv1_1))) {
        h7_0_0_reg_1286 = add_ln637_reg_3377.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln632_fu_2921_p2.read()))) {
        h7_0_0_reg_1286 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(icmp_ln587_fu_2691_p2.read(), ap_const_lv1_1))) {
        i10_0_reg_1209 = i10_reg_3269.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
                esl_seteq<1,1,1>(grp_GEMM_3D_float_fu_2119_ap_done.read(), ap_const_logic_1))) {
        i10_0_reg_1209 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        k9_0_0_reg_1220 = add_ln587_reg_3282.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln585_fu_2653_p2.read()))) {
        k9_0_0_reg_1220 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        v276_0_0_reg_1033 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln463_fu_2155_p2.read()))) {
        v276_0_0_reg_1033 = add_ln463_fu_2161_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(grp_quantize_activation_fu_1802_ap_done.read(), ap_const_logic_1))) {
        v286_0_0_reg_1044 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln484_fu_2172_p2.read()))) {
        v286_0_0_reg_1044 = add_ln484_fu_2178_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(icmp_ln484_fu_2172_p2.read(), ap_const_lv1_1))) {
        v289_0_0_reg_1055 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln490_fu_2189_p2.read()))) {
        v289_0_0_reg_1055 = add_ln490_fu_2195_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(icmp_ln490_fu_2189_p2.read(), ap_const_lv1_1))) {
        v292_0_0_reg_1066 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln496_fu_2206_p2.read()))) {
        v292_0_0_reg_1066 = add_ln496_fu_2212_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln533_fu_2261_p2.read()))) {
        v306_0_reg_1077 = v306_reg_3138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                esl_seteq<1,1,1>(grp_reshape_2D_to_3D_fu_2141_ap_done.read(), ap_const_logic_1))) {
        v306_0_reg_1077 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(icmp_ln531_fu_2223_p2.read(), ap_const_lv1_0))) {
        v308_0_0_reg_1088 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln533_fu_2261_p2.read()))) {
        v308_0_0_reg_1088 = add_ln533_fu_2267_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(icmp_ln531_fu_2223_p2.read(), ap_const_lv1_1))) {
        v310_0_reg_1099 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln541_fu_2325_p2.read()))) {
        v310_0_reg_1099 = v310_reg_3159.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln539_fu_2287_p2.read()))) {
        v312_0_0_reg_1110 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln541_fu_2325_p2.read()))) {
        v312_0_0_reg_1110 = add_ln541_fu_2331_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
         esl_seteq<1,1,1>(icmp_ln549_fu_2397_p2.read(), ap_const_lv1_1))) {
        v314_0_reg_1121 = v314_reg_3180.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
                esl_seteq<1,1,1>(grp_apply_rotary_pos_emb_fu_2095_ap_done.read(), ap_const_logic_1))) {
        v314_0_reg_1121 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln550_fu_2444_p2.read()))) {
        v315_0_reg_1132 = v315_reg_3193.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_fu_2351_p2.read()))) {
        v315_0_reg_1132 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln549_fu_2397_p2.read()))) {
        v316_0_reg_1143 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln550_fu_2444_p2.read()))) {
        v316_0_reg_1143 = v316_fu_2450_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && 
         esl_seteq<1,1,1>(icmp_ln548_fu_2351_p2.read(), ap_const_lv1_1))) {
        v318_0_reg_1154 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
                esl_seteq<1,1,1>(icmp_ln557_fu_2516_p2.read(), ap_const_lv1_1))) {
        v318_0_reg_1154 = v318_reg_3214.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln558_fu_2563_p2.read()))) {
        v319_0_reg_1165 = v319_reg_3227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln556_fu_2470_p2.read()))) {
        v319_0_reg_1165 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln557_fu_2516_p2.read()))) {
        v320_0_reg_1176 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln558_fu_2563_p2.read()))) {
        v320_0_reg_1176 = v320_fu_2569_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln577_fu_2627_p2.read()))) {
        v326_0_reg_1187 = v326_reg_3248.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                esl_seteq<1,1,1>(ap_block_state29_on_subcall_done.read(), ap_const_boolean_0))) {
        v326_0_reg_1187 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln575_fu_2589_p2.read()))) {
        v328_0_0_reg_1198 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln577_fu_2627_p2.read()))) {
        v328_0_0_reg_1198 = add_ln577_fu_2633_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(icmp_ln585_fu_2653_p2.read(), ap_const_lv1_1))) {
        v346_0_reg_1231 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln615_fu_2831_p2.read()))) {
        v346_0_reg_1231 = v346_reg_3327.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln613_fu_2793_p2.read()))) {
        v348_0_0_reg_1242 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln615_fu_2831_p2.read()))) {
        v348_0_0_reg_1242 = add_ln615_fu_2837_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln624_fu_2895_p2.read()))) {
        v350_0_reg_1253 = v350_reg_3348.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && 
                esl_seteq<1,1,1>(grp_softmax_fu_1776_ap_done.read(), ap_const_logic_1))) {
        v350_0_reg_1253 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln622_fu_2857_p2.read()))) {
        v352_0_0_reg_1264 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln624_fu_2895_p2.read()))) {
        v352_0_0_reg_1264 = add_ln624_fu_2901_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && 
         esl_seteq<1,1,1>(grp_GEMM_3D_float2_fu_2127_ap_done.read(), ap_const_logic_1))) {
        v355_0_0_reg_1275 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln632_fu_2921_p2.read()))) {
        v355_0_0_reg_1275 = add_ln632_fu_2927_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,1,1>(icmp_ln637_fu_2938_p2.read(), ap_const_lv1_1))) {
        v362_0_0_reg_1308 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln646_fu_3049_p2.read()))) {
        v362_0_0_reg_1308 = add_ln646_fu_3055_p2.read();
    }
    if ((esl_seteq<1,1,1>(grp_quantize_activation_fu_1802_ap_done.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        v371_0_0_reg_1319 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln666_fu_3066_p2.read()))) {
        v371_0_0_reg_1319 = add_ln666_fu_3072_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        add_ln587_reg_3282 = add_ln587_fu_2697_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        add_ln637_reg_3377 = add_ln637_fu_2944_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        add_ln638_reg_3395 = add_ln638_fu_3020_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln638_fu_3014_p2.read()))) {
        add_ln640_reg_3405 = add_ln640_fu_3036_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln587_fu_2691_p2.read()))) {
        attn_weights_0_V_ad_1_reg_3287 =  (sc_lv<7>) (sext_ln588_fu_2712_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        attn_weights_0_V_lo_reg_3292 = attn_weights_0_V_q0.read();
        tmp_168_reg_3297 = attn_weights_0_V_q0.read().range(31, 31);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        i10_reg_3269 = i10_fu_2659_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        mul_ln1148_reg_3308 = grp_fu_2736_p2.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
  esl_seteq<1,1,1>(grp_quantize_activation_fu_1802_ap_done.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(grp_quantize_activation_fu_1802_ap_done.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())))) {
        reg_2150 = grp_quantize_activation_fu_1802_ap_return.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        select_ln1148_reg_3318 = select_ln1148_fu_2767_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln548_fu_2351_p2.read()))) {
        sext_ln203_2_reg_3185 = sext_ln203_2_fu_2393_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln556_fu_2470_p2.read()))) {
        sext_ln203_4_reg_3219 = sext_ln203_4_fu_2512_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln622_fu_2857_p2.read()))) {
        sub_ln203_10_reg_3353 = sub_ln203_10_fu_2889_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln539_fu_2287_p2.read()))) {
        sub_ln203_3_reg_3164 = sub_ln203_3_fu_2319_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln549_fu_2397_p2.read()))) {
        sub_ln203_6_reg_3198 = sub_ln203_6_fu_2438_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln575_fu_2589_p2.read()))) {
        sub_ln203_7_reg_3253 = sub_ln203_7_fu_2621_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln557_fu_2516_p2.read()))) {
        sub_ln203_8_reg_3232 = sub_ln203_8_fu_2557_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln613_fu_2793_p2.read()))) {
        sub_ln203_9_reg_3332 = sub_ln203_9_fu_2825_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(icmp_ln531_fu_2223_p2.read(), ap_const_lv1_0))) {
        sub_ln203_reg_3143 = sub_ln203_fu_2255_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln585_fu_2653_p2.read()))) {
        sub_ln588_reg_3274 = sub_ln588_fu_2685_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln637_fu_2938_p2.read()))) {
        sub_ln639_reg_3382 = sub_ln639_fu_2970_p2.read();
        sub_ln640_reg_3387 = sub_ln640_fu_3004_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_168_reg_3297.read()))) {
        tmp_170_reg_3313 = grp_fu_2736_p2.read().range(88, 60);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v306_reg_3138 = v306_fu_2229_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        v310_reg_3159 = v310_fu_2293_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        v314_reg_3180 = v314_fu_2357_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        v315_reg_3193 = v315_fu_2403_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        v318_reg_3214 = v318_fu_2476_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        v319_reg_3227 = v319_fu_2522_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        v326_reg_3248 = v326_fu_2595_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        v346_reg_3327 = v346_fu_2799_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        v350_reg_3348 = v350_fu_2863_p2.read();
    }
}

void attention::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln463_fu_2155_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(grp_rms_norm_fu_1746_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(grp_quantize_activation_fu_1802_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(icmp_ln484_fu_2172_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(icmp_ln490_fu_2189_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln496_fu_2206_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1330_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(ap_block_state11_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state12;
            } else {
                ap_NS_fsm = ap_ST_fsm_state11;
            }
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) && esl_seteq<1,1,1>(ap_block_state13_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else {
                ap_NS_fsm = ap_ST_fsm_state13;
            }
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(grp_reshape_2D_to_3D_fu_2141_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state16;
            } else {
                ap_NS_fsm = ap_ST_fsm_state15;
            }
            break;
        case 32768 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(icmp_ln531_fu_2223_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state18;
            } else {
                ap_NS_fsm = ap_ST_fsm_state17;
            }
            break;
        case 65536 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln533_fu_2261_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state16;
            } else {
                ap_NS_fsm = ap_ST_fsm_state17;
            }
            break;
        case 131072 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln539_fu_2287_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state19;
            } else {
                ap_NS_fsm = ap_ST_fsm_state20;
            }
            break;
        case 262144 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln541_fu_2325_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state18;
            } else {
                ap_NS_fsm = ap_ST_fsm_state19;
            }
            break;
        case 524288 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(grp_apply_rotary_pos_emb_fu_2095_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state21;
            } else {
                ap_NS_fsm = ap_ST_fsm_state20;
            }
            break;
        case 1048576 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) && esl_seteq<1,1,1>(icmp_ln548_fu_2351_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state24;
            } else {
                ap_NS_fsm = ap_ST_fsm_state22;
            }
            break;
        case 2097152 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && esl_seteq<1,1,1>(icmp_ln549_fu_2397_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state21;
            } else {
                ap_NS_fsm = ap_ST_fsm_state23;
            }
            break;
        case 4194304 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln550_fu_2444_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state22;
            } else {
                ap_NS_fsm = ap_ST_fsm_state23;
            }
            break;
        case 8388608 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln556_fu_2470_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state25;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        case 16777216 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(icmp_ln557_fu_2516_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state24;
            } else {
                ap_NS_fsm = ap_ST_fsm_state26;
            }
            break;
        case 33554432 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln558_fu_2563_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state25;
            } else {
                ap_NS_fsm = ap_ST_fsm_state26;
            }
            break;
        case 67108864 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && esl_seteq<1,1,1>(grp_cache_update_fu_2109_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state28;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 268435456 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && esl_seteq<1,1,1>(ap_block_state29_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state30;
            } else {
                ap_NS_fsm = ap_ST_fsm_state29;
            }
            break;
        case 536870912 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln575_fu_2589_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state31;
            } else {
                ap_NS_fsm = ap_ST_fsm_state32;
            }
            break;
        case 1073741824 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln577_fu_2627_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state30;
            } else {
                ap_NS_fsm = ap_ST_fsm_state31;
            }
            break;
        case 2147483648 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && esl_seteq<1,1,1>(grp_GEMM_3D_float_fu_2119_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state33;
            } else {
                ap_NS_fsm = ap_ST_fsm_state32;
            }
            break;
        case 4294967296 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(icmp_ln585_fu_2653_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state40;
            } else {
                ap_NS_fsm = ap_ST_fsm_state34;
            }
            break;
        case 8589934592 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && esl_seteq<1,1,1>(icmp_ln587_fu_2691_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state33;
            } else {
                ap_NS_fsm = ap_ST_fsm_state35;
            }
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state36;
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 68719476736 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        case 137438953472 : 
            ap_NS_fsm = ap_ST_fsm_state39;
            break;
        case 274877906944 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 549755813888 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln613_fu_2793_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state41;
            } else {
                ap_NS_fsm = ap_ST_fsm_state42;
            }
            break;
        case 1099511627776 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln615_fu_2831_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state40;
            } else {
                ap_NS_fsm = ap_ST_fsm_state41;
            }
            break;
        case 2199023255552 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) && esl_seteq<1,1,1>(grp_softmax_fu_1776_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state43;
            } else {
                ap_NS_fsm = ap_ST_fsm_state42;
            }
            break;
        case 4398046511104 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln622_fu_2857_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state44;
            } else {
                ap_NS_fsm = ap_ST_fsm_state45;
            }
            break;
        case 8796093022208 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln624_fu_2895_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state43;
            } else {
                ap_NS_fsm = ap_ST_fsm_state44;
            }
            break;
        case 17592186044416 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) && esl_seteq<1,1,1>(grp_GEMM_3D_float2_fu_2127_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state46;
            } else {
                ap_NS_fsm = ap_ST_fsm_state45;
            }
            break;
        case 35184372088832 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln632_fu_2921_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state47;
            } else {
                ap_NS_fsm = ap_ST_fsm_state46;
            }
            break;
        case 70368744177664 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && esl_seteq<1,1,1>(icmp_ln637_fu_2938_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state50;
            } else {
                ap_NS_fsm = ap_ST_fsm_state48;
            }
            break;
        case 140737488355328 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) && esl_seteq<1,1,1>(icmp_ln638_fu_3014_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state47;
            } else {
                ap_NS_fsm = ap_ST_fsm_state49;
            }
            break;
        case 281474976710656 : 
            ap_NS_fsm = ap_ST_fsm_state48;
            break;
        case 562949953421312 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln646_fu_3049_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state50;
            } else {
                ap_NS_fsm = ap_ST_fsm_state51;
            }
            break;
        case 1125899906842624 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) && esl_seteq<1,1,1>(grp_rms_norm_fu_1746_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state52;
            } else {
                ap_NS_fsm = ap_ST_fsm_state51;
            }
            break;
        case 2251799813685248 : 
            ap_NS_fsm = ap_ST_fsm_state53;
            break;
        case 4503599627370496 : 
            if ((esl_seteq<1,1,1>(grp_quantize_activation_fu_1802_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
                ap_NS_fsm = ap_ST_fsm_state54;
            } else {
                ap_NS_fsm = ap_ST_fsm_state53;
            }
            break;
        case 9007199254740992 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln666_fu_3066_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state54;
            } else {
                ap_NS_fsm = ap_ST_fsm_state55;
            }
            break;
        case 18014398509481984 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) && esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_1330_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state55;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<55>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

