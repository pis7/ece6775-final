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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        d107_0_0_reg_3330 = add_ln209_reg_4870.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln208_fu_4680_p2.read()))) {
        d107_0_0_reg_3330 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        d_0_0_reg_3308 = add_ln178_reg_4807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                esl_seteq<1,1,1>(icmp_ln176_fu_4540_p2.read(), ap_const_lv1_0))) {
        d_0_0_reg_3308 = ap_const_lv3_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_GEMM_3D_float_1_fu_4350_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
            grp_GEMM_3D_float_1_fu_4350_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_GEMM_3D_float_1_fu_4350_ap_ready.read())) {
            grp_GEMM_3D_float_1_fu_4350_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_GEMM_3D_float_fu_3929_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
            grp_GEMM_3D_float_fu_3929_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_GEMM_3D_float_fu_3929_ap_ready.read())) {
            grp_GEMM_3D_float_fu_3929_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_apply_rotary_pos_emb_fu_4357_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
            grp_apply_rotary_pos_emb_fu_4357_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_apply_rotary_pos_emb_fu_4357_ap_ready.read())) {
            grp_apply_rotary_pos_emb_fu_4357_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_cache_update_fu_4501_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
            grp_cache_update_fu_4501_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_cache_update_fu_4501_ap_ready.read())) {
            grp_cache_update_fu_4501_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_init_2d_mem_fu_4516_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
              esl_seteq<1,1,1>(icmp_ln208_fu_4680_p2.read(), ap_const_lv1_1)))) {
            grp_init_2d_mem_fu_4516_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_init_2d_mem_fu_4516_ap_ready.read())) {
            grp_init_2d_mem_fu_4516_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_init_2d_mem_fu_4522_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            grp_init_2d_mem_fu_4522_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_init_2d_mem_fu_4522_ap_ready.read())) {
            grp_init_2d_mem_fu_4522_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_init_2d_mem_fu_4528_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            grp_init_2d_mem_fu_4528_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_init_2d_mem_fu_4528_ap_ready.read())) {
            grp_init_2d_mem_fu_4528_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_linear_forward_no_mu_fu_3341_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()))) {
            grp_linear_forward_no_mu_fu_3341_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_linear_forward_no_mu_fu_3341_ap_ready.read())) {
            grp_linear_forward_no_mu_fu_3341_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_quantize_activation_fu_4088_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
            grp_quantize_activation_fu_4088_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_quantize_activation_fu_4088_ap_ready.read())) {
            grp_quantize_activation_fu_4088_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_reshape_2D_to_3D_fu_4510_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
            grp_reshape_2D_to_3D_fu_4510_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_reshape_2D_to_3D_fu_4510_ap_ready.read())) {
            grp_reshape_2D_to_3D_fu_4510_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_rms_norm_1536_s_fu_4062_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && 
              esl_seteq<1,1,1>(icmp_ln208_fu_4680_p2.read(), ap_const_lv1_1)))) {
            grp_rms_norm_1536_s_fu_4062_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_rms_norm_1536_s_fu_4062_ap_ready.read())) {
            grp_rms_norm_1536_s_fu_4062_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_softmax_1_16_6_s_fu_4071_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
             esl_seteq<1,1,1>(icmp_ln176_fu_4540_p2.read(), ap_const_lv1_1))) {
            grp_softmax_1_16_6_s_fu_4071_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_softmax_1_16_6_s_fu_4071_ap_ready.read())) {
            grp_softmax_1_16_6_s_fu_4071_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_transpose_last_two_d_fu_4432_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
            grp_transpose_last_two_d_fu_4432_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_transpose_last_two_d_fu_4432_ap_ready.read())) {
            grp_transpose_last_two_d_fu_4432_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(icmp_ln209_fu_4756_p2.read(), ap_const_lv1_1))) {
        h106_0_0_reg_3319 = add_ln208_reg_4852.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
                esl_seteq<1,1,1>(grp_GEMM_3D_float_1_fu_4350_ap_done.read(), ap_const_logic_1))) {
        h106_0_0_reg_3319 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln178_fu_4578_p2.read(), ap_const_lv1_1))) {
        h_0_reg_3297 = h_reg_4794.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
                esl_seteq<1,1,1>(grp_GEMM_3D_float_fu_3929_ap_done.read(), ap_const_logic_1))) {
        h_0_reg_3297 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        add_ln178_reg_4807 = add_ln178_fu_4584_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        add_ln208_reg_4852 = add_ln208_fu_4686_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        add_ln209_reg_4870 = add_ln209_fu_4762_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln209_fu_4756_p2.read()))) {
        add_ln210_reg_4875 = add_ln210_fu_4768_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln178_fu_4578_p2.read()))) {
        attn_weights_0_V_ad_reg_4812 =  (sc_lv<7>) (sext_ln1265_fu_4599_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        attn_weights_0_V_lo_reg_4817 = attn_weights_0_V_q0.read();
        tmp_86_reg_4822 = attn_weights_0_V_q0.read().range(37, 37);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        h_reg_4794 = h_fu_4546_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        mul_ln1148_reg_4833 = grp_fu_4623_p2.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
  esl_seteq<1,1,1>(grp_quantize_activation_fu_4088_ap_done.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(grp_quantize_activation_fu_4088_ap_done.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())))) {
        reg_4535 = grp_quantize_activation_fu_4088_ap_return.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        select_ln1148_reg_4843 = select_ln1148_fu_4654_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(icmp_ln176_fu_4540_p2.read(), ap_const_lv1_0))) {
        sub_ln1265_reg_4799 = sub_ln1265_fu_4572_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln208_fu_4680_p2.read()))) {
        sub_ln203_reg_4862 = sub_ln203_fu_4746_p2.read();
        sub_ln210_reg_4857 = sub_ln210_fu_4720_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_86_reg_4822.read()))) {
        tmp_88_reg_4838 = grp_fu_4623_p2.read().range(116, 82);
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_block_state2_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(grp_quantize_activation_fu_4088_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_3341_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_block_state8_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && esl_seteq<1,1,1>(ap_block_state10_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state11;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(ap_block_state12_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && esl_seteq<1,1,1>(grp_cache_update_fu_4501_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state14;
            }
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_block_state16_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state17;
            } else {
                ap_NS_fsm = ap_ST_fsm_state16;
            }
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(grp_GEMM_3D_float_fu_3929_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state19;
            } else {
                ap_NS_fsm = ap_ST_fsm_state18;
            }
            break;
        case 262144 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(icmp_ln176_fu_4540_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state20;
            } else {
                ap_NS_fsm = ap_ST_fsm_state29;
            }
            break;
        case 524288 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(icmp_ln178_fu_4578_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state19;
            } else {
                ap_NS_fsm = ap_ST_fsm_state21;
            }
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 268435456 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && esl_seteq<1,1,1>(grp_softmax_1_16_6_s_fu_4071_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state30;
            } else {
                ap_NS_fsm = ap_ST_fsm_state29;
            }
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 1073741824 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && esl_seteq<1,1,1>(grp_GEMM_3D_float_1_fu_4350_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state32;
            } else {
                ap_NS_fsm = ap_ST_fsm_state31;
            }
            break;
        case 2147483648 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln208_fu_4680_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state33;
            } else {
                ap_NS_fsm = ap_ST_fsm_state35;
            }
            break;
        case 4294967296 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(icmp_ln209_fu_4756_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state32;
            } else {
                ap_NS_fsm = ap_ST_fsm_state34;
            }
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 17179869184 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && esl_seteq<1,1,1>(ap_block_state35_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state36;
            } else {
                ap_NS_fsm = ap_ST_fsm_state35;
            }
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 68719476736 : 
            if ((esl_seteq<1,1,1>(grp_quantize_activation_fu_4088_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
                ap_NS_fsm = ap_ST_fsm_state38;
            } else {
                ap_NS_fsm = ap_ST_fsm_state37;
            }
            break;
        case 137438953472 : 
            ap_NS_fsm = ap_ST_fsm_state39;
            break;
        case 274877906944 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) && esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_3341_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state39;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<39>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

