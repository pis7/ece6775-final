#include "quantize_activation.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void quantize_activation::thread_output_states_61_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3D))) {
        output_states_61_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_61_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_3_0_V_address0() {
    output_states_61_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_61_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_61_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_61_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_3_0_V_d0() {
    output_states_61_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_61_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3D))) {
        output_states_61_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_61_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_0_0_V_address0() {
    output_states_62_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_62_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_62_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_62_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_0_0_V_d0() {
    output_states_62_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_62_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3E))) {
        output_states_62_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_62_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_1_0_V_address0() {
    output_states_62_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_62_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_62_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_62_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_1_0_V_d0() {
    output_states_62_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_62_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3E))) {
        output_states_62_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_62_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_2_0_V_address0() {
    output_states_62_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_62_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_62_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_62_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_2_0_V_d0() {
    output_states_62_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_62_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3E))) {
        output_states_62_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_62_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_3_0_V_address0() {
    output_states_62_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_62_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_62_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_62_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_3_0_V_d0() {
    output_states_62_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_62_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3E))) {
        output_states_62_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_62_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_0_0_V_address0() {
    output_states_63_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_63_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_63_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_63_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_0_0_V_d0() {
    output_states_63_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_63_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3F))) {
        output_states_63_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_63_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_1_0_V_address0() {
    output_states_63_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_63_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_63_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_63_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_1_0_V_d0() {
    output_states_63_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_63_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3F))) {
        output_states_63_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_63_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_2_0_V_address0() {
    output_states_63_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_63_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_63_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_63_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_2_0_V_d0() {
    output_states_63_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_63_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3F))) {
        output_states_63_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_63_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_3_0_V_address0() {
    output_states_63_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_63_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_63_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_63_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_3_0_V_d0() {
    output_states_63_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_63_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_3F))) {
        output_states_63_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_63_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_0_0_V_address0() {
    output_states_6_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_6_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_6_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_6_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_0_0_V_d0() {
    output_states_6_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_6_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_6))) {
        output_states_6_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_6_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_1_0_V_address0() {
    output_states_6_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_6_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_6_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_6_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_1_0_V_d0() {
    output_states_6_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_6_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_6))) {
        output_states_6_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_6_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_2_0_V_address0() {
    output_states_6_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_6_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_6_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_6_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_2_0_V_d0() {
    output_states_6_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_6_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_6))) {
        output_states_6_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_6_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_3_0_V_address0() {
    output_states_6_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_6_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_6_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_6_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_3_0_V_d0() {
    output_states_6_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_6_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_6))) {
        output_states_6_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_6_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_0_0_V_address0() {
    output_states_7_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_7_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_7_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_7_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_0_0_V_d0() {
    output_states_7_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_7_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_7))) {
        output_states_7_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_7_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_1_0_V_address0() {
    output_states_7_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_7_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_7_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_7_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_1_0_V_d0() {
    output_states_7_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_7_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_7))) {
        output_states_7_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_7_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_2_0_V_address0() {
    output_states_7_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_7_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_7_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_7_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_2_0_V_d0() {
    output_states_7_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_7_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_7))) {
        output_states_7_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_7_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_3_0_V_address0() {
    output_states_7_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_7_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_7_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_7_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_3_0_V_d0() {
    output_states_7_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_7_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_7))) {
        output_states_7_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_7_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_0_0_V_address0() {
    output_states_8_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_8_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_8_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_8_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_0_0_V_d0() {
    output_states_8_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_8_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_8))) {
        output_states_8_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_8_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_1_0_V_address0() {
    output_states_8_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_8_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_8_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_8_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_1_0_V_d0() {
    output_states_8_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_8_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_8))) {
        output_states_8_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_8_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_2_0_V_address0() {
    output_states_8_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_8_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_8_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_8_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_2_0_V_d0() {
    output_states_8_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_8_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_8))) {
        output_states_8_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_8_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_3_0_V_address0() {
    output_states_8_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_8_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_8_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_8_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_3_0_V_d0() {
    output_states_8_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_8_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_8))) {
        output_states_8_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_8_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_0_0_V_address0() {
    output_states_9_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_9_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_9_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_9_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_0_0_V_d0() {
    output_states_9_0_0_V_d0 = select_ln887_1_reg_5396.read();
}

void quantize_activation::thread_output_states_9_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_9))) {
        output_states_9_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_9_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_1_0_V_address0() {
    output_states_9_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_9_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_9_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_9_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_1_0_V_d0() {
    output_states_9_1_0_V_d0 = select_ln887_3_reg_5464.read();
}

void quantize_activation::thread_output_states_9_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_9))) {
        output_states_9_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_9_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_2_0_V_address0() {
    output_states_9_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_9_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_9_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_9_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_2_0_V_d0() {
    output_states_9_2_0_V_d0 = select_ln887_5_fu_5077_p3.read();
}

void quantize_activation::thread_output_states_9_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_9))) {
        output_states_9_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_9_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_3_0_V_address0() {
    output_states_9_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4791_p1.read());
}

void quantize_activation::thread_output_states_9_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_states_9_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_9_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_3_0_V_d0() {
    output_states_9_3_0_V_d0 = select_ln887_7_fu_5176_p3.read();
}

void quantize_activation::thread_output_states_9_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5315.read(), ap_const_lv6_9))) {
        output_states_9_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_9_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_p_Result_0_1_fu_4467_p4() {
    p_Result_0_1_fu_4467_p4 = add_ln67_1_fu_4462_p2.read().range(39, 16);
}

void quantize_activation::thread_p_Result_0_2_fu_4653_p4() {
    p_Result_0_2_fu_4653_p4 = add_ln67_2_fu_4648_p2.read().range(39, 16);
}

void quantize_activation::thread_p_Result_0_3_fu_4731_p4() {
    p_Result_0_3_fu_4731_p4 = add_ln67_3_fu_4726_p2.read().range(39, 16);
}

void quantize_activation::thread_p_Result_s_fu_4389_p4() {
    p_Result_s_fu_4389_p4 = add_ln67_fu_4384_p2.read().range(39, 16);
}

void quantize_activation::thread_p_Val2_16_fu_4223_p3() {
    p_Val2_16_fu_4223_p3 = (!icmp_ln1494_fu_4218_p2.read()[0].is_01())? sc_lv<40>(): ((icmp_ln1494_fu_4218_p2.read()[0].to_bool())? p_Val2_15_reg_5271.read(): max_val_V_0_0_reg_4120.read());
}

void quantize_activation::thread_select_ln67_1_fu_4454_p3() {
    select_ln67_1_fu_4454_p3 = (!icmp_ln1494_27_fu_4449_p2.read()[0].is_01())? sc_lv<40>(): ((icmp_ln1494_27_fu_4449_p2.read()[0].to_bool())? ap_const_lv40_8000: ap_const_lv40_FFFFFF8000);
}

void quantize_activation::thread_select_ln67_2_fu_4640_p3() {
    select_ln67_2_fu_4640_p3 = (!icmp_ln1494_28_fu_4635_p2.read()[0].is_01())? sc_lv<40>(): ((icmp_ln1494_28_fu_4635_p2.read()[0].to_bool())? ap_const_lv40_8000: ap_const_lv40_FFFFFF8000);
}

void quantize_activation::thread_select_ln67_3_fu_4718_p3() {
    select_ln67_3_fu_4718_p3 = (!icmp_ln1494_29_fu_4713_p2.read()[0].is_01())? sc_lv<40>(): ((icmp_ln1494_29_fu_4713_p2.read()[0].to_bool())? ap_const_lv40_8000: ap_const_lv40_FFFFFF8000);
}

void quantize_activation::thread_select_ln67_fu_4376_p3() {
    select_ln67_fu_4376_p3 = (!icmp_ln1494_26_fu_4371_p2.read()[0].is_01())? sc_lv<40>(): ((icmp_ln1494_26_fu_4371_p2.read()[0].to_bool())? ap_const_lv40_8000: ap_const_lv40_FFFFFF8000);
}

void quantize_activation::thread_select_ln850_1_fu_4509_p3() {
    select_ln850_1_fu_4509_p3 = (!tmp_77_fu_4477_p3.read()[0].is_01())? sc_lv<24>(): ((tmp_77_fu_4477_p3.read()[0].to_bool())? select_ln851_1_fu_4501_p3.read(): p_Result_0_1_fu_4467_p4.read());
}

void quantize_activation::thread_select_ln850_2_fu_4695_p3() {
    select_ln850_2_fu_4695_p3 = (!tmp_79_fu_4663_p3.read()[0].is_01())? sc_lv<24>(): ((tmp_79_fu_4663_p3.read()[0].to_bool())? select_ln851_2_fu_4687_p3.read(): p_Result_0_2_fu_4653_p4.read());
}

void quantize_activation::thread_select_ln850_3_fu_4773_p3() {
    select_ln850_3_fu_4773_p3 = (!tmp_81_fu_4741_p3.read()[0].is_01())? sc_lv<24>(): ((tmp_81_fu_4741_p3.read()[0].to_bool())? select_ln851_3_fu_4765_p3.read(): p_Result_0_3_fu_4731_p4.read());
}

void quantize_activation::thread_select_ln850_fu_4431_p3() {
    select_ln850_fu_4431_p3 = (!tmp_75_fu_4399_p3.read()[0].is_01())? sc_lv<24>(): ((tmp_75_fu_4399_p3.read()[0].to_bool())? select_ln851_fu_4423_p3.read(): p_Result_s_fu_4389_p4.read());
}

void quantize_activation::thread_select_ln851_1_fu_4501_p3() {
    select_ln851_1_fu_4501_p3 = (!icmp_ln851_1_fu_4489_p2.read()[0].is_01())? sc_lv<24>(): ((icmp_ln851_1_fu_4489_p2.read()[0].to_bool())? p_Result_0_1_fu_4467_p4.read(): add_ln700_1_fu_4495_p2.read());
}

void quantize_activation::thread_select_ln851_2_fu_4687_p3() {
    select_ln851_2_fu_4687_p3 = (!icmp_ln851_2_fu_4675_p2.read()[0].is_01())? sc_lv<24>(): ((icmp_ln851_2_fu_4675_p2.read()[0].to_bool())? p_Result_0_2_fu_4653_p4.read(): add_ln700_2_fu_4681_p2.read());
}

void quantize_activation::thread_select_ln851_3_fu_4765_p3() {
    select_ln851_3_fu_4765_p3 = (!icmp_ln851_3_fu_4753_p2.read()[0].is_01())? sc_lv<24>(): ((icmp_ln851_3_fu_4753_p2.read()[0].to_bool())? p_Result_0_3_fu_4731_p4.read(): add_ln700_3_fu_4759_p2.read());
}

void quantize_activation::thread_select_ln851_fu_4423_p3() {
    select_ln851_fu_4423_p3 = (!icmp_ln851_fu_4411_p2.read()[0].is_01())? sc_lv<24>(): ((icmp_ln851_fu_4411_p2.read()[0].to_bool())? p_Result_s_fu_4389_p4.read(): add_ln700_fu_4417_p2.read());
}

void quantize_activation::thread_select_ln887_1_fu_4592_p3() {
    select_ln887_1_fu_4592_p3 = (!or_ln887_fu_4586_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln887_fu_4586_p2.read()[0].to_bool())? select_ln887_fu_4578_p3.read(): trunc_ln99_fu_4575_p1.read());
}

void quantize_activation::thread_select_ln887_2_fu_4613_p3() {
    select_ln887_2_fu_4613_p3 = (!icmp_ln887_1_fu_4600_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln887_1_fu_4600_p2.read()[0].to_bool())? ap_const_lv8_80: ap_const_lv8_7F);
}

void quantize_activation::thread_select_ln887_3_fu_4627_p3() {
    select_ln887_3_fu_4627_p3 = (!or_ln887_1_fu_4621_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln887_1_fu_4621_p2.read()[0].to_bool())? select_ln887_2_fu_4613_p3.read(): trunc_ln99_1_fu_4610_p1.read());
}

void quantize_activation::thread_select_ln887_4_fu_5063_p3() {
    select_ln887_4_fu_5063_p3 = (!icmp_ln887_2_fu_5050_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln887_2_fu_5050_p2.read()[0].to_bool())? ap_const_lv8_80: ap_const_lv8_7F);
}

void quantize_activation::thread_select_ln887_5_fu_5077_p3() {
    select_ln887_5_fu_5077_p3 = (!or_ln887_2_fu_5071_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln887_2_fu_5071_p2.read()[0].to_bool())? select_ln887_4_fu_5063_p3.read(): trunc_ln99_2_fu_5060_p1.read());
}

void quantize_activation::thread_select_ln887_6_fu_5162_p3() {
    select_ln887_6_fu_5162_p3 = (!icmp_ln887_3_fu_5149_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln887_3_fu_5149_p2.read()[0].to_bool())? ap_const_lv8_80: ap_const_lv8_7F);
}

void quantize_activation::thread_select_ln887_7_fu_5176_p3() {
    select_ln887_7_fu_5176_p3 = (!or_ln887_3_fu_5170_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln887_3_fu_5170_p2.read()[0].to_bool())? select_ln887_6_fu_5162_p3.read(): trunc_ln99_3_fu_5159_p1.read());
}

void quantize_activation::thread_select_ln887_fu_4578_p3() {
    select_ln887_fu_4578_p3 = (!icmp_ln887_fu_4565_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln887_fu_4565_p2.read()[0].to_bool())? ap_const_lv8_80: ap_const_lv8_7F);
}

void quantize_activation::thread_shl_ln1_fu_4279_p3() {
    shl_ln1_fu_4279_p3 = esl_concat<9,2>(add_ln96_fu_4274_p2.read(), ap_const_lv2_0);
}

void quantize_activation::thread_shl_ln_fu_4246_p3() {
    shl_ln_fu_4246_p3 = esl_concat<3,6>(jo_0_0_reg_4141.read(), ap_const_lv6_0);
}

void quantize_activation::thread_tmp_75_fu_4399_p3() {
    tmp_75_fu_4399_p3 = add_ln67_fu_4384_p2.read().range(39, 39);
}

void quantize_activation::thread_tmp_77_fu_4477_p3() {
    tmp_77_fu_4477_p3 = add_ln67_1_fu_4462_p2.read().range(39, 39);
}

void quantize_activation::thread_tmp_79_fu_4663_p3() {
    tmp_79_fu_4663_p3 = add_ln67_2_fu_4648_p2.read().range(39, 39);
}

void quantize_activation::thread_tmp_81_fu_4741_p3() {
    tmp_81_fu_4741_p3 = add_ln67_3_fu_4726_p2.read().range(39, 39);
}

void quantize_activation::thread_trunc_ln851_1_fu_4485_p1() {
    trunc_ln851_1_fu_4485_p1 = add_ln67_1_fu_4462_p2.read().range(16-1, 0);
}

void quantize_activation::thread_trunc_ln851_2_fu_4671_p1() {
    trunc_ln851_2_fu_4671_p1 = add_ln67_2_fu_4648_p2.read().range(16-1, 0);
}

void quantize_activation::thread_trunc_ln851_3_fu_4749_p1() {
    trunc_ln851_3_fu_4749_p1 = add_ln67_3_fu_4726_p2.read().range(16-1, 0);
}

void quantize_activation::thread_trunc_ln851_fu_4407_p1() {
    trunc_ln851_fu_4407_p1 = add_ln67_fu_4384_p2.read().range(16-1, 0);
}

void quantize_activation::thread_trunc_ln96_fu_4270_p1() {
    trunc_ln96_fu_4270_p1 = ji_0_0_reg_4152.read().range(6-1, 0);
}

void quantize_activation::thread_trunc_ln99_1_fu_4610_p1() {
    trunc_ln99_1_fu_4610_p1 = select_ln850_1_reg_5373.read().range(8-1, 0);
}

void quantize_activation::thread_trunc_ln99_2_fu_5060_p1() {
    trunc_ln99_2_fu_5060_p1 = select_ln850_2_reg_5532.read().range(8-1, 0);
}

void quantize_activation::thread_trunc_ln99_3_fu_5159_p1() {
    trunc_ln99_3_fu_5159_p1 = select_ln850_3_reg_5543.read().range(8-1, 0);
}

void quantize_activation::thread_trunc_ln99_fu_4575_p1() {
    trunc_ln99_fu_4575_p1 = select_ln850_reg_5362.read().range(8-1, 0);
}

void quantize_activation::thread_zext_ln180_fu_4791_p1() {
    zext_ln180_fu_4791_p1 = esl_zext<64,3>(lshr_ln_reg_5330.read());
}

void quantize_activation::thread_zext_ln88_fu_4201_p1() {
    zext_ln88_fu_4201_p1 = esl_zext<64,11>(j_0_0_reg_4130.read());
}

void quantize_activation::thread_zext_ln94_fu_4230_p1() {
    zext_ln94_fu_4230_p1 = esl_zext<56,40>(grp_fu_4212_p2.read());
}

void quantize_activation::thread_zext_ln95_fu_4254_p1() {
    zext_ln95_fu_4254_p1 = esl_zext<9,7>(ji_0_0_reg_4152.read());
}

void quantize_activation::thread_zext_ln98_1_fu_4308_p1() {
    zext_ln98_1_fu_4308_p1 = esl_zext<64,11>(or_ln98_fu_4302_p2.read());
}

void quantize_activation::thread_zext_ln98_2_fu_4318_p1() {
    zext_ln98_2_fu_4318_p1 = esl_zext<64,11>(or_ln98_1_fu_4313_p2.read());
}

void quantize_activation::thread_zext_ln98_3_fu_4328_p1() {
    zext_ln98_3_fu_4328_p1 = esl_zext<64,11>(or_ln98_2_fu_4323_p2.read());
}

void quantize_activation::thread_zext_ln98_fu_4287_p1() {
    zext_ln98_fu_4287_p1 = esl_zext<64,11>(shl_ln1_fu_4279_p3.read());
}

}

