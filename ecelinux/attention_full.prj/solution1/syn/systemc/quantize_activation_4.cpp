#include "quantize_activation.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void quantize_activation::thread_output_states_61_2_0_V_address0() {
    output_states_61_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_61_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_61_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_61_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_2_0_V_d0() {
    output_states_61_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_61_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3D))) {
        output_states_61_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_61_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_3_0_V_address0() {
    output_states_61_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_61_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_61_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_61_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_61_3_0_V_d0() {
    output_states_61_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_61_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3D))) {
        output_states_61_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_61_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_0_0_V_address0() {
    output_states_62_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_62_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_62_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_62_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_0_0_V_d0() {
    output_states_62_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_62_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3E))) {
        output_states_62_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_62_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_1_0_V_address0() {
    output_states_62_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_62_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_62_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_62_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_1_0_V_d0() {
    output_states_62_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_62_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3E))) {
        output_states_62_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_62_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_2_0_V_address0() {
    output_states_62_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_62_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_62_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_62_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_2_0_V_d0() {
    output_states_62_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_62_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3E))) {
        output_states_62_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_62_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_3_0_V_address0() {
    output_states_62_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_62_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_62_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_62_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_62_3_0_V_d0() {
    output_states_62_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_62_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3E))) {
        output_states_62_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_62_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_0_0_V_address0() {
    output_states_63_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_63_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_63_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_63_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_0_0_V_d0() {
    output_states_63_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_63_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3F))) {
        output_states_63_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_63_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_1_0_V_address0() {
    output_states_63_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_63_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_63_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_63_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_1_0_V_d0() {
    output_states_63_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_63_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3F))) {
        output_states_63_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_63_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_2_0_V_address0() {
    output_states_63_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_63_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_63_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_63_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_2_0_V_d0() {
    output_states_63_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_63_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3F))) {
        output_states_63_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_63_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_3_0_V_address0() {
    output_states_63_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_63_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_63_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_63_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_63_3_0_V_d0() {
    output_states_63_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_63_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_3F))) {
        output_states_63_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_63_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_0_0_V_address0() {
    output_states_6_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_6_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_6_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_6_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_0_0_V_d0() {
    output_states_6_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_6_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_6))) {
        output_states_6_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_6_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_1_0_V_address0() {
    output_states_6_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_6_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_6_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_6_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_1_0_V_d0() {
    output_states_6_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_6_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_6))) {
        output_states_6_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_6_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_2_0_V_address0() {
    output_states_6_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_6_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_6_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_6_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_2_0_V_d0() {
    output_states_6_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_6_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_6))) {
        output_states_6_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_6_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_3_0_V_address0() {
    output_states_6_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_6_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_6_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_6_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_6_3_0_V_d0() {
    output_states_6_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_6_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_6))) {
        output_states_6_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_6_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_0_0_V_address0() {
    output_states_7_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_7_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_7_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_7_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_0_0_V_d0() {
    output_states_7_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_7_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_7))) {
        output_states_7_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_7_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_1_0_V_address0() {
    output_states_7_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_7_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_7_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_7_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_1_0_V_d0() {
    output_states_7_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_7_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_7))) {
        output_states_7_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_7_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_2_0_V_address0() {
    output_states_7_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_7_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_7_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_7_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_2_0_V_d0() {
    output_states_7_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_7_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_7))) {
        output_states_7_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_7_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_3_0_V_address0() {
    output_states_7_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_7_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_7_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_7_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_7_3_0_V_d0() {
    output_states_7_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_7_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_7))) {
        output_states_7_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_7_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_0_0_V_address0() {
    output_states_8_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_8_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_8_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_8_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_0_0_V_d0() {
    output_states_8_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_8_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_8))) {
        output_states_8_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_8_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_1_0_V_address0() {
    output_states_8_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_8_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_8_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_8_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_1_0_V_d0() {
    output_states_8_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_8_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_8))) {
        output_states_8_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_8_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_2_0_V_address0() {
    output_states_8_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_8_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_8_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_8_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_2_0_V_d0() {
    output_states_8_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_8_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_8))) {
        output_states_8_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_8_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_3_0_V_address0() {
    output_states_8_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_8_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_8_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_8_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_8_3_0_V_d0() {
    output_states_8_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_8_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_8))) {
        output_states_8_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_8_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_0_0_V_address0() {
    output_states_9_0_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_9_0_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_9_0_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_9_0_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_0_0_V_d0() {
    output_states_9_0_0_V_d0 = select_ln887_1_reg_5431.read();
}

void quantize_activation::thread_output_states_9_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_9))) {
        output_states_9_0_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_9_0_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_1_0_V_address0() {
    output_states_9_1_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_9_1_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_9_1_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_9_1_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_1_0_V_d0() {
    output_states_9_1_0_V_d0 = select_ln887_3_reg_5499.read();
}

void quantize_activation::thread_output_states_9_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_9))) {
        output_states_9_1_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_9_1_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_2_0_V_address0() {
    output_states_9_2_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_9_2_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_9_2_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_9_2_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_2_0_V_d0() {
    output_states_9_2_0_V_d0 = select_ln887_5_fu_5107_p3.read();
}

void quantize_activation::thread_output_states_9_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_9))) {
        output_states_9_2_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_9_2_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_3_0_V_address0() {
    output_states_9_3_0_V_address0 =  (sc_lv<3>) (zext_ln180_fu_4821_p1.read());
}

void quantize_activation::thread_output_states_9_3_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read())) {
        output_states_9_3_0_V_ce0 = ap_const_logic_1;
    } else {
        output_states_9_3_0_V_ce0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_output_states_9_3_0_V_d0() {
    output_states_9_3_0_V_d0 = select_ln887_7_fu_5206_p3.read();
}

void quantize_activation::thread_output_states_9_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         esl_seteq<1,6,6>(trunc_ln96_reg_5350.read(), ap_const_lv6_9))) {
        output_states_9_3_0_V_we0 = ap_const_logic_1;
    } else {
        output_states_9_3_0_V_we0 = ap_const_logic_0;
    }
}

void quantize_activation::thread_p_Result_0_1_fu_4497_p4() {
    p_Result_0_1_fu_4497_p4 = add_ln67_1_fu_4492_p2.read().range(37, 20);
}

void quantize_activation::thread_p_Result_0_2_fu_4683_p4() {
    p_Result_0_2_fu_4683_p4 = add_ln67_2_fu_4678_p2.read().range(37, 20);
}

void quantize_activation::thread_p_Result_0_3_fu_4761_p4() {
    p_Result_0_3_fu_4761_p4 = add_ln67_3_fu_4756_p2.read().range(37, 20);
}

void quantize_activation::thread_p_Result_s_fu_4419_p4() {
    p_Result_s_fu_4419_p4 = add_ln67_fu_4414_p2.read().range(37, 20);
}

void quantize_activation::thread_p_Val2_16_fu_4249_p3() {
    p_Val2_16_fu_4249_p3 = (!icmp_ln1494_fu_4244_p2.read()[0].is_01())? sc_lv<38>(): ((icmp_ln1494_fu_4244_p2.read()[0].to_bool())? p_Val2_15_reg_5306.read(): max_val_V_0_0_reg_4124.read());
}

void quantize_activation::thread_select_ln60_fu_4226_p3() {
    select_ln60_fu_4226_p3 = (!icmp_ln1494_32_fu_4220_p2.read()[0].is_01())? sc_lv<37>(): ((icmp_ln1494_32_fu_4220_p2.read()[0].to_bool())? trunc_ln87_fu_4216_p1.read(): ap_const_lv37_A);
}

void quantize_activation::thread_select_ln67_1_fu_4484_p3() {
    select_ln67_1_fu_4484_p3 = (!icmp_ln1494_34_fu_4479_p2.read()[0].is_01())? sc_lv<38>(): ((icmp_ln1494_34_fu_4479_p2.read()[0].to_bool())? ap_const_lv38_80000: ap_const_lv38_3FFFF80000);
}

void quantize_activation::thread_select_ln67_2_fu_4670_p3() {
    select_ln67_2_fu_4670_p3 = (!icmp_ln1494_35_fu_4665_p2.read()[0].is_01())? sc_lv<38>(): ((icmp_ln1494_35_fu_4665_p2.read()[0].to_bool())? ap_const_lv38_80000: ap_const_lv38_3FFFF80000);
}

void quantize_activation::thread_select_ln67_3_fu_4748_p3() {
    select_ln67_3_fu_4748_p3 = (!icmp_ln1494_36_fu_4743_p2.read()[0].is_01())? sc_lv<38>(): ((icmp_ln1494_36_fu_4743_p2.read()[0].to_bool())? ap_const_lv38_80000: ap_const_lv38_3FFFF80000);
}

void quantize_activation::thread_select_ln67_fu_4406_p3() {
    select_ln67_fu_4406_p3 = (!icmp_ln1494_33_fu_4401_p2.read()[0].is_01())? sc_lv<38>(): ((icmp_ln1494_33_fu_4401_p2.read()[0].to_bool())? ap_const_lv38_80000: ap_const_lv38_3FFFF80000);
}

void quantize_activation::thread_select_ln850_1_fu_4539_p3() {
    select_ln850_1_fu_4539_p3 = (!tmp_76_fu_4507_p3.read()[0].is_01())? sc_lv<18>(): ((tmp_76_fu_4507_p3.read()[0].to_bool())? select_ln851_1_fu_4531_p3.read(): p_Result_0_1_fu_4497_p4.read());
}

void quantize_activation::thread_select_ln850_2_fu_4725_p3() {
    select_ln850_2_fu_4725_p3 = (!tmp_78_fu_4693_p3.read()[0].is_01())? sc_lv<18>(): ((tmp_78_fu_4693_p3.read()[0].to_bool())? select_ln851_2_fu_4717_p3.read(): p_Result_0_2_fu_4683_p4.read());
}

void quantize_activation::thread_select_ln850_3_fu_4803_p3() {
    select_ln850_3_fu_4803_p3 = (!tmp_80_fu_4771_p3.read()[0].is_01())? sc_lv<18>(): ((tmp_80_fu_4771_p3.read()[0].to_bool())? select_ln851_3_fu_4795_p3.read(): p_Result_0_3_fu_4761_p4.read());
}

void quantize_activation::thread_select_ln850_fu_4461_p3() {
    select_ln850_fu_4461_p3 = (!tmp_74_fu_4429_p3.read()[0].is_01())? sc_lv<18>(): ((tmp_74_fu_4429_p3.read()[0].to_bool())? select_ln851_fu_4453_p3.read(): p_Result_s_fu_4419_p4.read());
}

void quantize_activation::thread_select_ln851_1_fu_4531_p3() {
    select_ln851_1_fu_4531_p3 = (!icmp_ln851_1_fu_4519_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln851_1_fu_4519_p2.read()[0].to_bool())? p_Result_0_1_fu_4497_p4.read(): add_ln700_1_fu_4525_p2.read());
}

void quantize_activation::thread_select_ln851_2_fu_4717_p3() {
    select_ln851_2_fu_4717_p3 = (!icmp_ln851_2_fu_4705_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln851_2_fu_4705_p2.read()[0].to_bool())? p_Result_0_2_fu_4683_p4.read(): add_ln700_2_fu_4711_p2.read());
}

void quantize_activation::thread_select_ln851_3_fu_4795_p3() {
    select_ln851_3_fu_4795_p3 = (!icmp_ln851_3_fu_4783_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln851_3_fu_4783_p2.read()[0].to_bool())? p_Result_0_3_fu_4761_p4.read(): add_ln700_3_fu_4789_p2.read());
}

void quantize_activation::thread_select_ln851_fu_4453_p3() {
    select_ln851_fu_4453_p3 = (!icmp_ln851_fu_4441_p2.read()[0].is_01())? sc_lv<18>(): ((icmp_ln851_fu_4441_p2.read()[0].to_bool())? p_Result_s_fu_4419_p4.read(): add_ln700_fu_4447_p2.read());
}

void quantize_activation::thread_select_ln887_1_fu_4622_p3() {
    select_ln887_1_fu_4622_p3 = (!or_ln887_fu_4616_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln887_fu_4616_p2.read()[0].to_bool())? select_ln887_fu_4608_p3.read(): trunc_ln99_fu_4605_p1.read());
}

void quantize_activation::thread_select_ln887_2_fu_4643_p3() {
    select_ln887_2_fu_4643_p3 = (!icmp_ln887_1_fu_4630_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln887_1_fu_4630_p2.read()[0].to_bool())? ap_const_lv8_80: ap_const_lv8_7F);
}

void quantize_activation::thread_select_ln887_3_fu_4657_p3() {
    select_ln887_3_fu_4657_p3 = (!or_ln887_1_fu_4651_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln887_1_fu_4651_p2.read()[0].to_bool())? select_ln887_2_fu_4643_p3.read(): trunc_ln99_1_fu_4640_p1.read());
}

void quantize_activation::thread_select_ln887_4_fu_5093_p3() {
    select_ln887_4_fu_5093_p3 = (!icmp_ln887_2_fu_5080_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln887_2_fu_5080_p2.read()[0].to_bool())? ap_const_lv8_80: ap_const_lv8_7F);
}

void quantize_activation::thread_select_ln887_5_fu_5107_p3() {
    select_ln887_5_fu_5107_p3 = (!or_ln887_2_fu_5101_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln887_2_fu_5101_p2.read()[0].to_bool())? select_ln887_4_fu_5093_p3.read(): trunc_ln99_2_fu_5090_p1.read());
}

void quantize_activation::thread_select_ln887_6_fu_5192_p3() {
    select_ln887_6_fu_5192_p3 = (!icmp_ln887_3_fu_5179_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln887_3_fu_5179_p2.read()[0].to_bool())? ap_const_lv8_80: ap_const_lv8_7F);
}

void quantize_activation::thread_select_ln887_7_fu_5206_p3() {
    select_ln887_7_fu_5206_p3 = (!or_ln887_3_fu_5200_p2.read()[0].is_01())? sc_lv<8>(): ((or_ln887_3_fu_5200_p2.read()[0].to_bool())? select_ln887_6_fu_5192_p3.read(): trunc_ln99_3_fu_5189_p1.read());
}

void quantize_activation::thread_select_ln887_fu_4608_p3() {
    select_ln887_fu_4608_p3 = (!icmp_ln887_fu_4595_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln887_fu_4595_p2.read()[0].to_bool())? ap_const_lv8_80: ap_const_lv8_7F);
}

void quantize_activation::thread_sext_ln94_fu_4260_p1() {
    sext_ln94_fu_4260_p1 = esl_sext<58,38>(trunc_ln703_fu_4256_p1.read());
}

void quantize_activation::thread_shl_ln1_fu_4309_p3() {
    shl_ln1_fu_4309_p3 = esl_concat<9,2>(add_ln96_fu_4304_p2.read(), ap_const_lv2_0);
}

void quantize_activation::thread_shl_ln_fu_4276_p3() {
    shl_ln_fu_4276_p3 = esl_concat<3,6>(jo_0_0_reg_4145.read(), ap_const_lv6_0);
}

void quantize_activation::thread_tmp_74_fu_4429_p3() {
    tmp_74_fu_4429_p3 = add_ln67_fu_4414_p2.read().range(37, 37);
}

void quantize_activation::thread_tmp_76_fu_4507_p3() {
    tmp_76_fu_4507_p3 = add_ln67_1_fu_4492_p2.read().range(37, 37);
}

void quantize_activation::thread_tmp_78_fu_4693_p3() {
    tmp_78_fu_4693_p3 = add_ln67_2_fu_4678_p2.read().range(37, 37);
}

void quantize_activation::thread_tmp_80_fu_4771_p3() {
    tmp_80_fu_4771_p3 = add_ln67_3_fu_4756_p2.read().range(37, 37);
}

void quantize_activation::thread_trunc_ln703_fu_4256_p1() {
    trunc_ln703_fu_4256_p1 = grp_fu_4238_p2.read().range(38-1, 0);
}

void quantize_activation::thread_trunc_ln851_1_fu_4515_p1() {
    trunc_ln851_1_fu_4515_p1 = add_ln67_1_fu_4492_p2.read().range(20-1, 0);
}

void quantize_activation::thread_trunc_ln851_2_fu_4701_p1() {
    trunc_ln851_2_fu_4701_p1 = add_ln67_2_fu_4678_p2.read().range(20-1, 0);
}

void quantize_activation::thread_trunc_ln851_3_fu_4779_p1() {
    trunc_ln851_3_fu_4779_p1 = add_ln67_3_fu_4756_p2.read().range(20-1, 0);
}

void quantize_activation::thread_trunc_ln851_fu_4437_p1() {
    trunc_ln851_fu_4437_p1 = add_ln67_fu_4414_p2.read().range(20-1, 0);
}

void quantize_activation::thread_trunc_ln87_fu_4216_p1() {
    trunc_ln87_fu_4216_p1 = max_val_V_0_0_reg_4124.read().range(37-1, 0);
}

void quantize_activation::thread_trunc_ln96_fu_4300_p1() {
    trunc_ln96_fu_4300_p1 = ji_0_0_reg_4156.read().range(6-1, 0);
}

void quantize_activation::thread_trunc_ln99_1_fu_4640_p1() {
    trunc_ln99_1_fu_4640_p1 = select_ln850_1_reg_5408.read().range(8-1, 0);
}

void quantize_activation::thread_trunc_ln99_2_fu_5090_p1() {
    trunc_ln99_2_fu_5090_p1 = select_ln850_2_reg_5567.read().range(8-1, 0);
}

void quantize_activation::thread_trunc_ln99_3_fu_5189_p1() {
    trunc_ln99_3_fu_5189_p1 = select_ln850_3_reg_5578.read().range(8-1, 0);
}

void quantize_activation::thread_trunc_ln99_fu_4605_p1() {
    trunc_ln99_fu_4605_p1 = select_ln850_reg_5397.read().range(8-1, 0);
}

void quantize_activation::thread_zext_ln180_fu_4821_p1() {
    zext_ln180_fu_4821_p1 = esl_zext<64,3>(lshr_ln_reg_5365.read());
}

void quantize_activation::thread_zext_ln88_fu_4205_p1() {
    zext_ln88_fu_4205_p1 = esl_zext<64,11>(j_0_0_reg_4134.read());
}

void quantize_activation::thread_zext_ln95_fu_4284_p1() {
    zext_ln95_fu_4284_p1 = esl_zext<9,7>(ji_0_0_reg_4156.read());
}

void quantize_activation::thread_zext_ln98_1_fu_4338_p1() {
    zext_ln98_1_fu_4338_p1 = esl_zext<64,11>(or_ln98_fu_4332_p2.read());
}

void quantize_activation::thread_zext_ln98_2_fu_4348_p1() {
    zext_ln98_2_fu_4348_p1 = esl_zext<64,11>(or_ln98_1_fu_4343_p2.read());
}

void quantize_activation::thread_zext_ln98_3_fu_4358_p1() {
    zext_ln98_3_fu_4358_p1 = esl_zext<64,11>(or_ln98_2_fu_4353_p2.read());
}

void quantize_activation::thread_zext_ln98_fu_4317_p1() {
    zext_ln98_fu_4317_p1 = esl_zext<64,11>(shl_ln1_fu_4309_p3.read());
}

}

