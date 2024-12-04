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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        d107_0_0_reg_3324 = add_ln209_reg_4858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln208_fu_4668_p2.read()))) {
        d107_0_0_reg_3324 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        d_0_0_reg_3302 = add_ln178_reg_4795.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
                esl_seteq<1,1,1>(icmp_ln176_fu_4528_p2.read(), ap_const_lv1_0))) {
        d_0_0_reg_3302 = ap_const_lv3_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_GEMM_3D_float_1_fu_4338_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
            grp_GEMM_3D_float_1_fu_4338_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_GEMM_3D_float_1_fu_4338_ap_ready.read())) {
            grp_GEMM_3D_float_1_fu_4338_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_GEMM_3D_float_fu_3923_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
            grp_GEMM_3D_float_fu_3923_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_GEMM_3D_float_fu_3923_ap_ready.read())) {
            grp_GEMM_3D_float_fu_3923_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_apply_rotary_pos_emb_fu_4345_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
            grp_apply_rotary_pos_emb_fu_4345_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_apply_rotary_pos_emb_fu_4345_ap_ready.read())) {
            grp_apply_rotary_pos_emb_fu_4345_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_cache_update_fu_4489_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()))) {
            grp_cache_update_fu_4489_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_cache_update_fu_4489_ap_ready.read())) {
            grp_cache_update_fu_4489_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_init_2d_mem_fu_4504_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
              esl_seteq<1,1,1>(icmp_ln208_fu_4668_p2.read(), ap_const_lv1_1)))) {
            grp_init_2d_mem_fu_4504_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_init_2d_mem_fu_4504_ap_ready.read())) {
            grp_init_2d_mem_fu_4504_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_init_2d_mem_fu_4510_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            grp_init_2d_mem_fu_4510_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_init_2d_mem_fu_4510_ap_ready.read())) {
            grp_init_2d_mem_fu_4510_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_init_2d_mem_fu_4516_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
             esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            grp_init_2d_mem_fu_4516_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_init_2d_mem_fu_4516_ap_ready.read())) {
            grp_init_2d_mem_fu_4516_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_linear_forward_no_mu_fu_3335_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
            grp_linear_forward_no_mu_fu_3335_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_linear_forward_no_mu_fu_3335_ap_ready.read())) {
            grp_linear_forward_no_mu_fu_3335_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_quantize_activation_fu_4076_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
            grp_quantize_activation_fu_4076_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_quantize_activation_fu_4076_ap_ready.read())) {
            grp_quantize_activation_fu_4076_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_reshape_2D_to_3D_fu_4498_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()))) {
            grp_reshape_2D_to_3D_fu_4498_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_reshape_2D_to_3D_fu_4498_ap_ready.read())) {
            grp_reshape_2D_to_3D_fu_4498_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_rms_norm_1536_s_fu_4056_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && 
              esl_seteq<1,1,1>(icmp_ln208_fu_4668_p2.read(), ap_const_lv1_1)))) {
            grp_rms_norm_1536_s_fu_4056_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_rms_norm_1536_s_fu_4056_ap_ready.read())) {
            grp_rms_norm_1536_s_fu_4056_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_softmax_1_16_6_s_fu_4065_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
             esl_seteq<1,1,1>(icmp_ln176_fu_4528_p2.read(), ap_const_lv1_1))) {
            grp_softmax_1_16_6_s_fu_4065_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_softmax_1_16_6_s_fu_4065_ap_ready.read())) {
            grp_softmax_1_16_6_s_fu_4065_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_transpose_last_two_d_fu_4420_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
            grp_transpose_last_two_d_fu_4420_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_transpose_last_two_d_fu_4420_ap_ready.read())) {
            grp_transpose_last_two_d_fu_4420_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && 
         esl_seteq<1,1,1>(icmp_ln209_fu_4744_p2.read(), ap_const_lv1_1))) {
        h106_0_0_reg_3313 = add_ln208_reg_4840.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                esl_seteq<1,1,1>(grp_GEMM_3D_float_1_fu_4338_ap_done.read(), ap_const_logic_1))) {
        h106_0_0_reg_3313 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
         esl_seteq<1,1,1>(icmp_ln178_fu_4566_p2.read(), ap_const_lv1_1))) {
        h_0_reg_3291 = h_reg_4782.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
                esl_seteq<1,1,1>(grp_GEMM_3D_float_fu_3923_ap_done.read(), ap_const_logic_1))) {
        h_0_reg_3291 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        add_ln178_reg_4795 = add_ln178_fu_4572_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        add_ln208_reg_4840 = add_ln208_fu_4674_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        add_ln209_reg_4858 = add_ln209_fu_4750_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln209_fu_4744_p2.read()))) {
        add_ln210_reg_4863 = add_ln210_fu_4756_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln178_fu_4566_p2.read()))) {
        attn_weights_0_V_ad_reg_4800 =  (sc_lv<7>) (sext_ln1265_fu_4587_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        attn_weights_0_V_lo_reg_4805 = attn_weights_0_V_q0.read();
        tmp_85_reg_4810 = attn_weights_0_V_q0.read().range(39, 39);
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        h_reg_4782 = h_fu_4534_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        mul_ln1148_reg_4821 = grp_fu_4611_p2.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
  esl_seteq<1,1,1>(grp_quantize_activation_fu_4076_ap_done.read(), ap_const_logic_1)) || (esl_seteq<1,1,1>(grp_quantize_activation_fu_4076_ap_done.read(), ap_const_logic_1) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())))) {
        reg_4523 = grp_quantize_activation_fu_4076_ap_return.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        select_ln1148_reg_4831 = select_ln1148_fu_4642_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(icmp_ln176_fu_4528_p2.read(), ap_const_lv1_0))) {
        sub_ln1265_reg_4787 = sub_ln1265_fu_4560_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln208_fu_4668_p2.read()))) {
        sub_ln203_reg_4850 = sub_ln203_fu_4734_p2.read();
        sub_ln210_reg_4845 = sub_ln210_fu_4708_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_85_reg_4810.read()))) {
        tmp_87_reg_4826 = grp_fu_4611_p2.read().range(112, 76);
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(grp_quantize_activation_fu_4076_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_3335_ap_done.read(), ap_const_logic_1))) {
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && esl_seteq<1,1,1>(grp_cache_update_fu_4489_ap_done.read(), ap_const_logic_1))) {
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(grp_GEMM_3D_float_fu_3923_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state19;
            } else {
                ap_NS_fsm = ap_ST_fsm_state18;
            }
            break;
        case 262144 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(icmp_ln176_fu_4528_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state20;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        case 524288 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(icmp_ln178_fu_4566_p2.read(), ap_const_lv1_1))) {
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
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 67108864 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && esl_seteq<1,1,1>(grp_softmax_1_16_6_s_fu_4065_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state28;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 268435456 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && esl_seteq<1,1,1>(grp_GEMM_3D_float_1_fu_4338_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state30;
            } else {
                ap_NS_fsm = ap_ST_fsm_state29;
            }
            break;
        case 536870912 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln208_fu_4668_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state31;
            } else {
                ap_NS_fsm = ap_ST_fsm_state33;
            }
            break;
        case 1073741824 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) && esl_seteq<1,1,1>(icmp_ln209_fu_4744_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state30;
            } else {
                ap_NS_fsm = ap_ST_fsm_state32;
            }
            break;
        case 2147483648 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 4294967296 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(ap_block_state33_on_subcall_done.read(), ap_const_boolean_0))) {
                ap_NS_fsm = ap_ST_fsm_state34;
            } else {
                ap_NS_fsm = ap_ST_fsm_state33;
            }
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 17179869184 : 
            if ((esl_seteq<1,1,1>(grp_quantize_activation_fu_4076_ap_done.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
                ap_NS_fsm = ap_ST_fsm_state36;
            } else {
                ap_NS_fsm = ap_ST_fsm_state35;
            }
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 68719476736 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) && esl_seteq<1,1,1>(grp_linear_forward_no_mu_fu_3335_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state37;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<37>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

