#include "attention.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void attention::thread_quantized_hidden_sta_161_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_161_address0 = grp_quantize_activation_fu_4076_output_states_40_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_161_address0 = grp_linear_forward_no_mu_fu_3335_input_40_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_161_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_161_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_161_ce0 = grp_quantize_activation_fu_4076_output_states_40_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_161_ce0 = grp_linear_forward_no_mu_fu_3335_input_40_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_161_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_161_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_161_we0 = grp_quantize_activation_fu_4076_output_states_40_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_161_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_162_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_162_address0 = grp_quantize_activation_fu_4076_output_states_40_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_162_address0 = grp_linear_forward_no_mu_fu_3335_input_40_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_162_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_162_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_162_ce0 = grp_quantize_activation_fu_4076_output_states_40_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_162_ce0 = grp_linear_forward_no_mu_fu_3335_input_40_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_162_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_162_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_162_we0 = grp_quantize_activation_fu_4076_output_states_40_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_162_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_163_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_163_address0 = grp_quantize_activation_fu_4076_output_states_40_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_163_address0 = grp_linear_forward_no_mu_fu_3335_input_40_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_163_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_163_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_163_ce0 = grp_quantize_activation_fu_4076_output_states_40_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_163_ce0 = grp_linear_forward_no_mu_fu_3335_input_40_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_163_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_163_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_163_we0 = grp_quantize_activation_fu_4076_output_states_40_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_163_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_164_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_164_address0 = grp_quantize_activation_fu_4076_output_states_41_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_164_address0 = grp_linear_forward_no_mu_fu_3335_input_41_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_164_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_164_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_164_ce0 = grp_quantize_activation_fu_4076_output_states_41_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_164_ce0 = grp_linear_forward_no_mu_fu_3335_input_41_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_164_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_164_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_164_we0 = grp_quantize_activation_fu_4076_output_states_41_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_164_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_165_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_165_address0 = grp_quantize_activation_fu_4076_output_states_41_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_165_address0 = grp_linear_forward_no_mu_fu_3335_input_41_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_165_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_165_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_165_ce0 = grp_quantize_activation_fu_4076_output_states_41_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_165_ce0 = grp_linear_forward_no_mu_fu_3335_input_41_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_165_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_165_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_165_we0 = grp_quantize_activation_fu_4076_output_states_41_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_165_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_166_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_166_address0 = grp_quantize_activation_fu_4076_output_states_41_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_166_address0 = grp_linear_forward_no_mu_fu_3335_input_41_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_166_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_166_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_166_ce0 = grp_quantize_activation_fu_4076_output_states_41_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_166_ce0 = grp_linear_forward_no_mu_fu_3335_input_41_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_166_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_166_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_166_we0 = grp_quantize_activation_fu_4076_output_states_41_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_166_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_167_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_167_address0 = grp_quantize_activation_fu_4076_output_states_41_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_167_address0 = grp_linear_forward_no_mu_fu_3335_input_41_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_167_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_167_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_167_ce0 = grp_quantize_activation_fu_4076_output_states_41_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_167_ce0 = grp_linear_forward_no_mu_fu_3335_input_41_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_167_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_167_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_167_we0 = grp_quantize_activation_fu_4076_output_states_41_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_167_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_168_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_168_address0 = grp_quantize_activation_fu_4076_output_states_42_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_168_address0 = grp_linear_forward_no_mu_fu_3335_input_42_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_168_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_168_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_168_ce0 = grp_quantize_activation_fu_4076_output_states_42_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_168_ce0 = grp_linear_forward_no_mu_fu_3335_input_42_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_168_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_168_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_168_we0 = grp_quantize_activation_fu_4076_output_states_42_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_168_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_169_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_169_address0 = grp_quantize_activation_fu_4076_output_states_42_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_169_address0 = grp_linear_forward_no_mu_fu_3335_input_42_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_169_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_169_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_169_ce0 = grp_quantize_activation_fu_4076_output_states_42_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_169_ce0 = grp_linear_forward_no_mu_fu_3335_input_42_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_169_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_169_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_169_we0 = grp_quantize_activation_fu_4076_output_states_42_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_169_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_16_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_16_address0 = grp_quantize_activation_fu_4076_output_states_4_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_16_address0 = grp_linear_forward_no_mu_fu_3335_input_4_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_16_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_16_ce0 = grp_quantize_activation_fu_4076_output_states_4_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_16_ce0 = grp_linear_forward_no_mu_fu_3335_input_4_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_16_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_16_we0 = grp_quantize_activation_fu_4076_output_states_4_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_16_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_170_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_170_address0 = grp_quantize_activation_fu_4076_output_states_42_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_170_address0 = grp_linear_forward_no_mu_fu_3335_input_42_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_170_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_170_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_170_ce0 = grp_quantize_activation_fu_4076_output_states_42_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_170_ce0 = grp_linear_forward_no_mu_fu_3335_input_42_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_170_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_170_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_170_we0 = grp_quantize_activation_fu_4076_output_states_42_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_170_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_171_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_171_address0 = grp_quantize_activation_fu_4076_output_states_42_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_171_address0 = grp_linear_forward_no_mu_fu_3335_input_42_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_171_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_171_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_171_ce0 = grp_quantize_activation_fu_4076_output_states_42_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_171_ce0 = grp_linear_forward_no_mu_fu_3335_input_42_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_171_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_171_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_171_we0 = grp_quantize_activation_fu_4076_output_states_42_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_171_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_172_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_172_address0 = grp_quantize_activation_fu_4076_output_states_43_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_172_address0 = grp_linear_forward_no_mu_fu_3335_input_43_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_172_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_172_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_172_ce0 = grp_quantize_activation_fu_4076_output_states_43_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_172_ce0 = grp_linear_forward_no_mu_fu_3335_input_43_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_172_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_172_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_172_we0 = grp_quantize_activation_fu_4076_output_states_43_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_172_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_173_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_173_address0 = grp_quantize_activation_fu_4076_output_states_43_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_173_address0 = grp_linear_forward_no_mu_fu_3335_input_43_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_173_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_173_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_173_ce0 = grp_quantize_activation_fu_4076_output_states_43_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_173_ce0 = grp_linear_forward_no_mu_fu_3335_input_43_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_173_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_173_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_173_we0 = grp_quantize_activation_fu_4076_output_states_43_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_173_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_174_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_174_address0 = grp_quantize_activation_fu_4076_output_states_43_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_174_address0 = grp_linear_forward_no_mu_fu_3335_input_43_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_174_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_174_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_174_ce0 = grp_quantize_activation_fu_4076_output_states_43_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_174_ce0 = grp_linear_forward_no_mu_fu_3335_input_43_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_174_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_174_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_174_we0 = grp_quantize_activation_fu_4076_output_states_43_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_174_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_175_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_175_address0 = grp_quantize_activation_fu_4076_output_states_43_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_175_address0 = grp_linear_forward_no_mu_fu_3335_input_43_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_175_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_175_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_175_ce0 = grp_quantize_activation_fu_4076_output_states_43_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_175_ce0 = grp_linear_forward_no_mu_fu_3335_input_43_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_175_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_175_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_175_we0 = grp_quantize_activation_fu_4076_output_states_43_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_175_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_176_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_176_address0 = grp_quantize_activation_fu_4076_output_states_44_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_176_address0 = grp_linear_forward_no_mu_fu_3335_input_44_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_176_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_176_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_176_ce0 = grp_quantize_activation_fu_4076_output_states_44_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_176_ce0 = grp_linear_forward_no_mu_fu_3335_input_44_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_176_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_176_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_176_we0 = grp_quantize_activation_fu_4076_output_states_44_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_176_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_177_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_177_address0 = grp_quantize_activation_fu_4076_output_states_44_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_177_address0 = grp_linear_forward_no_mu_fu_3335_input_44_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_177_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_177_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_177_ce0 = grp_quantize_activation_fu_4076_output_states_44_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_177_ce0 = grp_linear_forward_no_mu_fu_3335_input_44_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_177_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_177_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_177_we0 = grp_quantize_activation_fu_4076_output_states_44_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_177_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_178_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_178_address0 = grp_quantize_activation_fu_4076_output_states_44_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_178_address0 = grp_linear_forward_no_mu_fu_3335_input_44_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_178_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_178_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_178_ce0 = grp_quantize_activation_fu_4076_output_states_44_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_178_ce0 = grp_linear_forward_no_mu_fu_3335_input_44_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_178_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_178_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_178_we0 = grp_quantize_activation_fu_4076_output_states_44_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_178_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_179_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_179_address0 = grp_quantize_activation_fu_4076_output_states_44_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_179_address0 = grp_linear_forward_no_mu_fu_3335_input_44_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_179_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_179_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_179_ce0 = grp_quantize_activation_fu_4076_output_states_44_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_179_ce0 = grp_linear_forward_no_mu_fu_3335_input_44_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_179_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_179_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_179_we0 = grp_quantize_activation_fu_4076_output_states_44_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_179_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_17_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_17_address0 = grp_quantize_activation_fu_4076_output_states_4_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_17_address0 = grp_linear_forward_no_mu_fu_3335_input_4_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_17_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_17_ce0 = grp_quantize_activation_fu_4076_output_states_4_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_17_ce0 = grp_linear_forward_no_mu_fu_3335_input_4_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_17_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_17_we0 = grp_quantize_activation_fu_4076_output_states_4_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_17_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_180_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_180_address0 = grp_quantize_activation_fu_4076_output_states_45_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_180_address0 = grp_linear_forward_no_mu_fu_3335_input_45_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_180_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_180_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_180_ce0 = grp_quantize_activation_fu_4076_output_states_45_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_180_ce0 = grp_linear_forward_no_mu_fu_3335_input_45_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_180_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_180_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_180_we0 = grp_quantize_activation_fu_4076_output_states_45_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_180_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_181_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_181_address0 = grp_quantize_activation_fu_4076_output_states_45_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_181_address0 = grp_linear_forward_no_mu_fu_3335_input_45_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_181_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_181_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_181_ce0 = grp_quantize_activation_fu_4076_output_states_45_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_181_ce0 = grp_linear_forward_no_mu_fu_3335_input_45_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_181_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_181_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_181_we0 = grp_quantize_activation_fu_4076_output_states_45_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_181_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_182_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_182_address0 = grp_quantize_activation_fu_4076_output_states_45_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_182_address0 = grp_linear_forward_no_mu_fu_3335_input_45_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_182_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_182_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_182_ce0 = grp_quantize_activation_fu_4076_output_states_45_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_182_ce0 = grp_linear_forward_no_mu_fu_3335_input_45_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_182_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_182_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_182_we0 = grp_quantize_activation_fu_4076_output_states_45_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_182_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_183_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_183_address0 = grp_quantize_activation_fu_4076_output_states_45_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_183_address0 = grp_linear_forward_no_mu_fu_3335_input_45_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_183_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_183_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_183_ce0 = grp_quantize_activation_fu_4076_output_states_45_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_183_ce0 = grp_linear_forward_no_mu_fu_3335_input_45_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_183_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_183_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_183_we0 = grp_quantize_activation_fu_4076_output_states_45_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_183_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_184_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_184_address0 = grp_quantize_activation_fu_4076_output_states_46_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_184_address0 = grp_linear_forward_no_mu_fu_3335_input_46_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_184_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_184_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_184_ce0 = grp_quantize_activation_fu_4076_output_states_46_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_184_ce0 = grp_linear_forward_no_mu_fu_3335_input_46_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_184_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_184_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_184_we0 = grp_quantize_activation_fu_4076_output_states_46_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_184_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_185_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_185_address0 = grp_quantize_activation_fu_4076_output_states_46_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_185_address0 = grp_linear_forward_no_mu_fu_3335_input_46_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_185_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_185_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_185_ce0 = grp_quantize_activation_fu_4076_output_states_46_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_185_ce0 = grp_linear_forward_no_mu_fu_3335_input_46_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_185_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_185_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_185_we0 = grp_quantize_activation_fu_4076_output_states_46_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_185_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_186_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_186_address0 = grp_quantize_activation_fu_4076_output_states_46_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_186_address0 = grp_linear_forward_no_mu_fu_3335_input_46_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_186_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_186_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_186_ce0 = grp_quantize_activation_fu_4076_output_states_46_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_186_ce0 = grp_linear_forward_no_mu_fu_3335_input_46_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_186_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_186_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_186_we0 = grp_quantize_activation_fu_4076_output_states_46_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_186_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_187_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_187_address0 = grp_quantize_activation_fu_4076_output_states_46_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_187_address0 = grp_linear_forward_no_mu_fu_3335_input_46_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_187_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_187_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_187_ce0 = grp_quantize_activation_fu_4076_output_states_46_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_187_ce0 = grp_linear_forward_no_mu_fu_3335_input_46_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_187_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_187_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_187_we0 = grp_quantize_activation_fu_4076_output_states_46_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_187_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_188_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_188_address0 = grp_quantize_activation_fu_4076_output_states_47_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_188_address0 = grp_linear_forward_no_mu_fu_3335_input_47_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_188_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_188_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_188_ce0 = grp_quantize_activation_fu_4076_output_states_47_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_188_ce0 = grp_linear_forward_no_mu_fu_3335_input_47_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_188_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_188_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_188_we0 = grp_quantize_activation_fu_4076_output_states_47_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_188_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_189_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_189_address0 = grp_quantize_activation_fu_4076_output_states_47_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_189_address0 = grp_linear_forward_no_mu_fu_3335_input_47_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_189_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_189_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_189_ce0 = grp_quantize_activation_fu_4076_output_states_47_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_189_ce0 = grp_linear_forward_no_mu_fu_3335_input_47_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_189_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_189_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_189_we0 = grp_quantize_activation_fu_4076_output_states_47_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_189_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_18_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_18_address0 = grp_quantize_activation_fu_4076_output_states_4_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_18_address0 = grp_linear_forward_no_mu_fu_3335_input_4_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_18_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_18_ce0 = grp_quantize_activation_fu_4076_output_states_4_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_18_ce0 = grp_linear_forward_no_mu_fu_3335_input_4_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_18_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_18_we0 = grp_quantize_activation_fu_4076_output_states_4_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_18_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_190_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_190_address0 = grp_quantize_activation_fu_4076_output_states_47_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_190_address0 = grp_linear_forward_no_mu_fu_3335_input_47_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_190_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_190_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_190_ce0 = grp_quantize_activation_fu_4076_output_states_47_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_190_ce0 = grp_linear_forward_no_mu_fu_3335_input_47_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_190_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_190_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_190_we0 = grp_quantize_activation_fu_4076_output_states_47_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_190_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_191_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_191_address0 = grp_quantize_activation_fu_4076_output_states_47_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_191_address0 = grp_linear_forward_no_mu_fu_3335_input_47_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_191_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_191_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_191_ce0 = grp_quantize_activation_fu_4076_output_states_47_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_191_ce0 = grp_linear_forward_no_mu_fu_3335_input_47_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_191_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_191_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_191_we0 = grp_quantize_activation_fu_4076_output_states_47_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_191_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_192_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_192_address0 = grp_quantize_activation_fu_4076_output_states_48_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_192_address0 = grp_linear_forward_no_mu_fu_3335_input_48_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_192_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_192_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_192_ce0 = grp_quantize_activation_fu_4076_output_states_48_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_192_ce0 = grp_linear_forward_no_mu_fu_3335_input_48_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_192_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_192_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_192_we0 = grp_quantize_activation_fu_4076_output_states_48_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_192_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_193_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_193_address0 = grp_quantize_activation_fu_4076_output_states_48_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_193_address0 = grp_linear_forward_no_mu_fu_3335_input_48_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_193_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_193_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_193_ce0 = grp_quantize_activation_fu_4076_output_states_48_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_193_ce0 = grp_linear_forward_no_mu_fu_3335_input_48_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_193_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_193_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_193_we0 = grp_quantize_activation_fu_4076_output_states_48_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_193_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_194_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_194_address0 = grp_quantize_activation_fu_4076_output_states_48_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_194_address0 = grp_linear_forward_no_mu_fu_3335_input_48_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_194_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_194_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_194_ce0 = grp_quantize_activation_fu_4076_output_states_48_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_194_ce0 = grp_linear_forward_no_mu_fu_3335_input_48_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_194_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_194_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_194_we0 = grp_quantize_activation_fu_4076_output_states_48_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_194_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_195_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_195_address0 = grp_quantize_activation_fu_4076_output_states_48_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_195_address0 = grp_linear_forward_no_mu_fu_3335_input_48_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_195_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_195_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_195_ce0 = grp_quantize_activation_fu_4076_output_states_48_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_195_ce0 = grp_linear_forward_no_mu_fu_3335_input_48_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_195_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_195_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_195_we0 = grp_quantize_activation_fu_4076_output_states_48_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_195_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_196_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_196_address0 = grp_quantize_activation_fu_4076_output_states_49_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_196_address0 = grp_linear_forward_no_mu_fu_3335_input_49_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_196_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_196_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_196_ce0 = grp_quantize_activation_fu_4076_output_states_49_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_196_ce0 = grp_linear_forward_no_mu_fu_3335_input_49_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_196_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_196_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_196_we0 = grp_quantize_activation_fu_4076_output_states_49_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_196_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_197_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_197_address0 = grp_quantize_activation_fu_4076_output_states_49_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_197_address0 = grp_linear_forward_no_mu_fu_3335_input_49_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_197_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_197_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_197_ce0 = grp_quantize_activation_fu_4076_output_states_49_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_197_ce0 = grp_linear_forward_no_mu_fu_3335_input_49_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_197_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_197_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_197_we0 = grp_quantize_activation_fu_4076_output_states_49_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_197_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_198_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_198_address0 = grp_quantize_activation_fu_4076_output_states_49_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_198_address0 = grp_linear_forward_no_mu_fu_3335_input_49_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_198_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_198_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_198_ce0 = grp_quantize_activation_fu_4076_output_states_49_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_198_ce0 = grp_linear_forward_no_mu_fu_3335_input_49_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_198_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_198_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_198_we0 = grp_quantize_activation_fu_4076_output_states_49_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_198_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_199_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_199_address0 = grp_quantize_activation_fu_4076_output_states_49_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_199_address0 = grp_linear_forward_no_mu_fu_3335_input_49_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_199_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_199_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_199_ce0 = grp_quantize_activation_fu_4076_output_states_49_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_199_ce0 = grp_linear_forward_no_mu_fu_3335_input_49_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_199_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_199_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_199_we0 = grp_quantize_activation_fu_4076_output_states_49_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_199_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_19_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_19_address0 = grp_quantize_activation_fu_4076_output_states_4_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_19_address0 = grp_linear_forward_no_mu_fu_3335_input_4_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_19_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_19_ce0 = grp_quantize_activation_fu_4076_output_states_4_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_19_ce0 = grp_linear_forward_no_mu_fu_3335_input_4_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_19_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_19_we0 = grp_quantize_activation_fu_4076_output_states_4_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_19_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_1_address0 = grp_quantize_activation_fu_4076_output_states_0_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_1_address0 = grp_linear_forward_no_mu_fu_3335_input_0_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_1_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_1_ce0 = grp_quantize_activation_fu_4076_output_states_0_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_1_ce0 = grp_linear_forward_no_mu_fu_3335_input_0_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_1_we0 = grp_quantize_activation_fu_4076_output_states_0_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_1_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_200_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_200_address0 = grp_quantize_activation_fu_4076_output_states_50_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_200_address0 = grp_linear_forward_no_mu_fu_3335_input_50_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_200_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_200_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_200_ce0 = grp_quantize_activation_fu_4076_output_states_50_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_200_ce0 = grp_linear_forward_no_mu_fu_3335_input_50_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_200_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_200_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_200_we0 = grp_quantize_activation_fu_4076_output_states_50_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_200_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_201_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_201_address0 = grp_quantize_activation_fu_4076_output_states_50_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_201_address0 = grp_linear_forward_no_mu_fu_3335_input_50_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_201_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_201_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_201_ce0 = grp_quantize_activation_fu_4076_output_states_50_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_201_ce0 = grp_linear_forward_no_mu_fu_3335_input_50_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_201_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_201_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_201_we0 = grp_quantize_activation_fu_4076_output_states_50_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_201_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_202_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_202_address0 = grp_quantize_activation_fu_4076_output_states_50_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_202_address0 = grp_linear_forward_no_mu_fu_3335_input_50_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_202_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_202_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_202_ce0 = grp_quantize_activation_fu_4076_output_states_50_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_202_ce0 = grp_linear_forward_no_mu_fu_3335_input_50_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_202_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_202_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_202_we0 = grp_quantize_activation_fu_4076_output_states_50_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_202_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_203_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_203_address0 = grp_quantize_activation_fu_4076_output_states_50_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_203_address0 = grp_linear_forward_no_mu_fu_3335_input_50_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_203_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_203_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_203_ce0 = grp_quantize_activation_fu_4076_output_states_50_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_203_ce0 = grp_linear_forward_no_mu_fu_3335_input_50_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_203_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_203_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_203_we0 = grp_quantize_activation_fu_4076_output_states_50_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_203_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_204_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_204_address0 = grp_quantize_activation_fu_4076_output_states_51_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_204_address0 = grp_linear_forward_no_mu_fu_3335_input_51_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_204_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_204_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_204_ce0 = grp_quantize_activation_fu_4076_output_states_51_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_204_ce0 = grp_linear_forward_no_mu_fu_3335_input_51_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_204_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_204_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_204_we0 = grp_quantize_activation_fu_4076_output_states_51_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_204_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_205_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_205_address0 = grp_quantize_activation_fu_4076_output_states_51_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_205_address0 = grp_linear_forward_no_mu_fu_3335_input_51_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_205_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_205_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_205_ce0 = grp_quantize_activation_fu_4076_output_states_51_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_205_ce0 = grp_linear_forward_no_mu_fu_3335_input_51_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_205_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_205_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_205_we0 = grp_quantize_activation_fu_4076_output_states_51_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_205_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_206_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_206_address0 = grp_quantize_activation_fu_4076_output_states_51_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_206_address0 = grp_linear_forward_no_mu_fu_3335_input_51_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_206_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_206_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_206_ce0 = grp_quantize_activation_fu_4076_output_states_51_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_206_ce0 = grp_linear_forward_no_mu_fu_3335_input_51_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_206_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_206_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_206_we0 = grp_quantize_activation_fu_4076_output_states_51_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_206_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_207_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_207_address0 = grp_quantize_activation_fu_4076_output_states_51_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_207_address0 = grp_linear_forward_no_mu_fu_3335_input_51_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_207_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_207_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_207_ce0 = grp_quantize_activation_fu_4076_output_states_51_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_207_ce0 = grp_linear_forward_no_mu_fu_3335_input_51_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_207_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_207_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_207_we0 = grp_quantize_activation_fu_4076_output_states_51_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_207_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_208_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_208_address0 = grp_quantize_activation_fu_4076_output_states_52_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_208_address0 = grp_linear_forward_no_mu_fu_3335_input_52_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_208_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_208_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_208_ce0 = grp_quantize_activation_fu_4076_output_states_52_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_208_ce0 = grp_linear_forward_no_mu_fu_3335_input_52_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_208_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_208_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_208_we0 = grp_quantize_activation_fu_4076_output_states_52_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_208_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_209_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_209_address0 = grp_quantize_activation_fu_4076_output_states_52_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_209_address0 = grp_linear_forward_no_mu_fu_3335_input_52_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_209_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_209_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_209_ce0 = grp_quantize_activation_fu_4076_output_states_52_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_209_ce0 = grp_linear_forward_no_mu_fu_3335_input_52_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_209_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_209_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_209_we0 = grp_quantize_activation_fu_4076_output_states_52_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_209_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_20_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_20_address0 = grp_quantize_activation_fu_4076_output_states_5_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_20_address0 = grp_linear_forward_no_mu_fu_3335_input_5_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_20_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_20_ce0 = grp_quantize_activation_fu_4076_output_states_5_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_20_ce0 = grp_linear_forward_no_mu_fu_3335_input_5_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_20_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_20_we0 = grp_quantize_activation_fu_4076_output_states_5_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_20_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_210_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_210_address0 = grp_quantize_activation_fu_4076_output_states_52_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_210_address0 = grp_linear_forward_no_mu_fu_3335_input_52_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_210_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_210_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_210_ce0 = grp_quantize_activation_fu_4076_output_states_52_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_210_ce0 = grp_linear_forward_no_mu_fu_3335_input_52_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_210_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_210_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_210_we0 = grp_quantize_activation_fu_4076_output_states_52_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_210_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_211_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_211_address0 = grp_quantize_activation_fu_4076_output_states_52_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_211_address0 = grp_linear_forward_no_mu_fu_3335_input_52_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_211_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_211_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_211_ce0 = grp_quantize_activation_fu_4076_output_states_52_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_211_ce0 = grp_linear_forward_no_mu_fu_3335_input_52_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_211_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_211_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_211_we0 = grp_quantize_activation_fu_4076_output_states_52_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_211_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_212_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_212_address0 = grp_quantize_activation_fu_4076_output_states_53_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_212_address0 = grp_linear_forward_no_mu_fu_3335_input_53_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_212_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_212_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_212_ce0 = grp_quantize_activation_fu_4076_output_states_53_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_212_ce0 = grp_linear_forward_no_mu_fu_3335_input_53_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_212_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_212_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_212_we0 = grp_quantize_activation_fu_4076_output_states_53_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_212_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_213_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_213_address0 = grp_quantize_activation_fu_4076_output_states_53_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_213_address0 = grp_linear_forward_no_mu_fu_3335_input_53_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_213_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_213_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_213_ce0 = grp_quantize_activation_fu_4076_output_states_53_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_213_ce0 = grp_linear_forward_no_mu_fu_3335_input_53_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_213_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_213_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_213_we0 = grp_quantize_activation_fu_4076_output_states_53_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_213_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_214_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_214_address0 = grp_quantize_activation_fu_4076_output_states_53_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_214_address0 = grp_linear_forward_no_mu_fu_3335_input_53_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_214_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_214_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_214_ce0 = grp_quantize_activation_fu_4076_output_states_53_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_214_ce0 = grp_linear_forward_no_mu_fu_3335_input_53_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_214_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_214_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_214_we0 = grp_quantize_activation_fu_4076_output_states_53_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_214_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_215_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_215_address0 = grp_quantize_activation_fu_4076_output_states_53_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_215_address0 = grp_linear_forward_no_mu_fu_3335_input_53_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_215_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_215_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_215_ce0 = grp_quantize_activation_fu_4076_output_states_53_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_215_ce0 = grp_linear_forward_no_mu_fu_3335_input_53_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_215_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_215_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_215_we0 = grp_quantize_activation_fu_4076_output_states_53_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_215_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_216_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_216_address0 = grp_quantize_activation_fu_4076_output_states_54_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_216_address0 = grp_linear_forward_no_mu_fu_3335_input_54_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_216_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_216_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_216_ce0 = grp_quantize_activation_fu_4076_output_states_54_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_216_ce0 = grp_linear_forward_no_mu_fu_3335_input_54_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_216_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_216_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_216_we0 = grp_quantize_activation_fu_4076_output_states_54_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_216_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_217_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_217_address0 = grp_quantize_activation_fu_4076_output_states_54_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_217_address0 = grp_linear_forward_no_mu_fu_3335_input_54_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_217_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_217_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_217_ce0 = grp_quantize_activation_fu_4076_output_states_54_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_217_ce0 = grp_linear_forward_no_mu_fu_3335_input_54_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_217_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_217_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_217_we0 = grp_quantize_activation_fu_4076_output_states_54_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_217_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_218_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_218_address0 = grp_quantize_activation_fu_4076_output_states_54_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_218_address0 = grp_linear_forward_no_mu_fu_3335_input_54_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_218_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_218_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_218_ce0 = grp_quantize_activation_fu_4076_output_states_54_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_218_ce0 = grp_linear_forward_no_mu_fu_3335_input_54_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_218_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_218_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_218_we0 = grp_quantize_activation_fu_4076_output_states_54_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_218_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_219_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_219_address0 = grp_quantize_activation_fu_4076_output_states_54_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_219_address0 = grp_linear_forward_no_mu_fu_3335_input_54_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_219_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_219_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_219_ce0 = grp_quantize_activation_fu_4076_output_states_54_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_219_ce0 = grp_linear_forward_no_mu_fu_3335_input_54_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_219_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_219_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_219_we0 = grp_quantize_activation_fu_4076_output_states_54_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_219_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_21_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_21_address0 = grp_quantize_activation_fu_4076_output_states_5_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_21_address0 = grp_linear_forward_no_mu_fu_3335_input_5_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_21_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_21_ce0 = grp_quantize_activation_fu_4076_output_states_5_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_21_ce0 = grp_linear_forward_no_mu_fu_3335_input_5_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_21_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_21_we0 = grp_quantize_activation_fu_4076_output_states_5_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_21_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_220_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_220_address0 = grp_quantize_activation_fu_4076_output_states_55_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_220_address0 = grp_linear_forward_no_mu_fu_3335_input_55_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_220_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_220_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_220_ce0 = grp_quantize_activation_fu_4076_output_states_55_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_220_ce0 = grp_linear_forward_no_mu_fu_3335_input_55_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_220_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_220_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_220_we0 = grp_quantize_activation_fu_4076_output_states_55_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_220_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_221_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_221_address0 = grp_quantize_activation_fu_4076_output_states_55_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_221_address0 = grp_linear_forward_no_mu_fu_3335_input_55_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_221_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_221_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_221_ce0 = grp_quantize_activation_fu_4076_output_states_55_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_221_ce0 = grp_linear_forward_no_mu_fu_3335_input_55_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_221_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_221_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_221_we0 = grp_quantize_activation_fu_4076_output_states_55_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_221_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_222_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_222_address0 = grp_quantize_activation_fu_4076_output_states_55_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_222_address0 = grp_linear_forward_no_mu_fu_3335_input_55_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_222_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_222_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_222_ce0 = grp_quantize_activation_fu_4076_output_states_55_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_222_ce0 = grp_linear_forward_no_mu_fu_3335_input_55_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_222_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_222_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_222_we0 = grp_quantize_activation_fu_4076_output_states_55_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_222_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_223_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_223_address0 = grp_quantize_activation_fu_4076_output_states_55_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_223_address0 = grp_linear_forward_no_mu_fu_3335_input_55_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_223_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_223_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_223_ce0 = grp_quantize_activation_fu_4076_output_states_55_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_223_ce0 = grp_linear_forward_no_mu_fu_3335_input_55_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_223_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_223_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_223_we0 = grp_quantize_activation_fu_4076_output_states_55_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_223_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_224_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_224_address0 = grp_quantize_activation_fu_4076_output_states_56_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_224_address0 = grp_linear_forward_no_mu_fu_3335_input_56_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_224_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_224_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_224_ce0 = grp_quantize_activation_fu_4076_output_states_56_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_224_ce0 = grp_linear_forward_no_mu_fu_3335_input_56_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_224_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_224_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_224_we0 = grp_quantize_activation_fu_4076_output_states_56_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_224_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_225_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_225_address0 = grp_quantize_activation_fu_4076_output_states_56_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_225_address0 = grp_linear_forward_no_mu_fu_3335_input_56_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_225_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_225_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_225_ce0 = grp_quantize_activation_fu_4076_output_states_56_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_225_ce0 = grp_linear_forward_no_mu_fu_3335_input_56_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_225_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_225_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_225_we0 = grp_quantize_activation_fu_4076_output_states_56_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_225_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_226_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_226_address0 = grp_quantize_activation_fu_4076_output_states_56_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_226_address0 = grp_linear_forward_no_mu_fu_3335_input_56_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_226_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_226_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_226_ce0 = grp_quantize_activation_fu_4076_output_states_56_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_226_ce0 = grp_linear_forward_no_mu_fu_3335_input_56_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_226_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_226_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_226_we0 = grp_quantize_activation_fu_4076_output_states_56_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_226_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_227_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_227_address0 = grp_quantize_activation_fu_4076_output_states_56_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_227_address0 = grp_linear_forward_no_mu_fu_3335_input_56_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_227_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_227_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_227_ce0 = grp_quantize_activation_fu_4076_output_states_56_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_227_ce0 = grp_linear_forward_no_mu_fu_3335_input_56_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_227_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_227_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_227_we0 = grp_quantize_activation_fu_4076_output_states_56_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_227_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_228_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_228_address0 = grp_quantize_activation_fu_4076_output_states_57_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_228_address0 = grp_linear_forward_no_mu_fu_3335_input_57_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_228_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_228_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_228_ce0 = grp_quantize_activation_fu_4076_output_states_57_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_228_ce0 = grp_linear_forward_no_mu_fu_3335_input_57_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_228_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_228_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_228_we0 = grp_quantize_activation_fu_4076_output_states_57_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_228_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_229_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_229_address0 = grp_quantize_activation_fu_4076_output_states_57_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_229_address0 = grp_linear_forward_no_mu_fu_3335_input_57_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_229_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_229_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_229_ce0 = grp_quantize_activation_fu_4076_output_states_57_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_229_ce0 = grp_linear_forward_no_mu_fu_3335_input_57_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_229_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_229_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_229_we0 = grp_quantize_activation_fu_4076_output_states_57_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_229_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_22_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_22_address0 = grp_quantize_activation_fu_4076_output_states_5_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_22_address0 = grp_linear_forward_no_mu_fu_3335_input_5_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_22_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_22_ce0 = grp_quantize_activation_fu_4076_output_states_5_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_22_ce0 = grp_linear_forward_no_mu_fu_3335_input_5_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_22_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_22_we0 = grp_quantize_activation_fu_4076_output_states_5_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_22_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_230_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_230_address0 = grp_quantize_activation_fu_4076_output_states_57_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_230_address0 = grp_linear_forward_no_mu_fu_3335_input_57_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_230_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_230_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_230_ce0 = grp_quantize_activation_fu_4076_output_states_57_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_230_ce0 = grp_linear_forward_no_mu_fu_3335_input_57_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_230_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_230_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_230_we0 = grp_quantize_activation_fu_4076_output_states_57_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_230_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_231_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_231_address0 = grp_quantize_activation_fu_4076_output_states_57_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_231_address0 = grp_linear_forward_no_mu_fu_3335_input_57_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_231_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_231_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_231_ce0 = grp_quantize_activation_fu_4076_output_states_57_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_231_ce0 = grp_linear_forward_no_mu_fu_3335_input_57_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_231_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_231_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_231_we0 = grp_quantize_activation_fu_4076_output_states_57_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_231_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_232_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_232_address0 = grp_quantize_activation_fu_4076_output_states_58_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_232_address0 = grp_linear_forward_no_mu_fu_3335_input_58_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_232_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_232_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_232_ce0 = grp_quantize_activation_fu_4076_output_states_58_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_232_ce0 = grp_linear_forward_no_mu_fu_3335_input_58_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_232_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_232_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_232_we0 = grp_quantize_activation_fu_4076_output_states_58_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_232_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_233_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_233_address0 = grp_quantize_activation_fu_4076_output_states_58_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_233_address0 = grp_linear_forward_no_mu_fu_3335_input_58_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_233_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_233_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_233_ce0 = grp_quantize_activation_fu_4076_output_states_58_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_233_ce0 = grp_linear_forward_no_mu_fu_3335_input_58_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_233_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_233_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_233_we0 = grp_quantize_activation_fu_4076_output_states_58_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_233_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_234_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_234_address0 = grp_quantize_activation_fu_4076_output_states_58_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_234_address0 = grp_linear_forward_no_mu_fu_3335_input_58_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_234_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_234_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_234_ce0 = grp_quantize_activation_fu_4076_output_states_58_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_234_ce0 = grp_linear_forward_no_mu_fu_3335_input_58_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_234_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_234_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_234_we0 = grp_quantize_activation_fu_4076_output_states_58_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_234_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_235_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_235_address0 = grp_quantize_activation_fu_4076_output_states_58_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_235_address0 = grp_linear_forward_no_mu_fu_3335_input_58_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_235_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_235_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_235_ce0 = grp_quantize_activation_fu_4076_output_states_58_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_235_ce0 = grp_linear_forward_no_mu_fu_3335_input_58_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_235_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_235_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_235_we0 = grp_quantize_activation_fu_4076_output_states_58_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_235_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_236_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_236_address0 = grp_quantize_activation_fu_4076_output_states_59_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_236_address0 = grp_linear_forward_no_mu_fu_3335_input_59_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_236_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_236_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_236_ce0 = grp_quantize_activation_fu_4076_output_states_59_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_236_ce0 = grp_linear_forward_no_mu_fu_3335_input_59_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_236_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_236_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_236_we0 = grp_quantize_activation_fu_4076_output_states_59_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_236_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_237_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_237_address0 = grp_quantize_activation_fu_4076_output_states_59_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_237_address0 = grp_linear_forward_no_mu_fu_3335_input_59_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_237_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_237_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_237_ce0 = grp_quantize_activation_fu_4076_output_states_59_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_237_ce0 = grp_linear_forward_no_mu_fu_3335_input_59_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_237_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_237_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_237_we0 = grp_quantize_activation_fu_4076_output_states_59_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_237_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_238_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_238_address0 = grp_quantize_activation_fu_4076_output_states_59_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_238_address0 = grp_linear_forward_no_mu_fu_3335_input_59_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_238_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_238_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_238_ce0 = grp_quantize_activation_fu_4076_output_states_59_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_238_ce0 = grp_linear_forward_no_mu_fu_3335_input_59_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_238_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_238_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_238_we0 = grp_quantize_activation_fu_4076_output_states_59_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_238_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_239_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_239_address0 = grp_quantize_activation_fu_4076_output_states_59_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_239_address0 = grp_linear_forward_no_mu_fu_3335_input_59_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_239_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_239_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_239_ce0 = grp_quantize_activation_fu_4076_output_states_59_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_239_ce0 = grp_linear_forward_no_mu_fu_3335_input_59_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_239_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_239_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_239_we0 = grp_quantize_activation_fu_4076_output_states_59_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_239_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_23_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_23_address0 = grp_quantize_activation_fu_4076_output_states_5_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_23_address0 = grp_linear_forward_no_mu_fu_3335_input_5_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_23_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_23_ce0 = grp_quantize_activation_fu_4076_output_states_5_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_23_ce0 = grp_linear_forward_no_mu_fu_3335_input_5_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_23_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_23_we0 = grp_quantize_activation_fu_4076_output_states_5_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_23_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_240_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_240_address0 = grp_quantize_activation_fu_4076_output_states_60_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_240_address0 = grp_linear_forward_no_mu_fu_3335_input_60_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_240_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_240_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_240_ce0 = grp_quantize_activation_fu_4076_output_states_60_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_240_ce0 = grp_linear_forward_no_mu_fu_3335_input_60_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_240_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_240_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_240_we0 = grp_quantize_activation_fu_4076_output_states_60_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_240_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_241_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_241_address0 = grp_quantize_activation_fu_4076_output_states_60_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_241_address0 = grp_linear_forward_no_mu_fu_3335_input_60_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_241_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_241_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_241_ce0 = grp_quantize_activation_fu_4076_output_states_60_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_241_ce0 = grp_linear_forward_no_mu_fu_3335_input_60_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_241_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_241_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_241_we0 = grp_quantize_activation_fu_4076_output_states_60_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_241_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_242_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_242_address0 = grp_quantize_activation_fu_4076_output_states_60_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_242_address0 = grp_linear_forward_no_mu_fu_3335_input_60_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_242_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_242_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_242_ce0 = grp_quantize_activation_fu_4076_output_states_60_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_242_ce0 = grp_linear_forward_no_mu_fu_3335_input_60_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_242_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_242_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_242_we0 = grp_quantize_activation_fu_4076_output_states_60_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_242_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_243_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_243_address0 = grp_quantize_activation_fu_4076_output_states_60_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_243_address0 = grp_linear_forward_no_mu_fu_3335_input_60_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_243_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_243_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_243_ce0 = grp_quantize_activation_fu_4076_output_states_60_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_243_ce0 = grp_linear_forward_no_mu_fu_3335_input_60_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_243_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_243_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_243_we0 = grp_quantize_activation_fu_4076_output_states_60_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_243_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_244_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_244_address0 = grp_quantize_activation_fu_4076_output_states_61_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_244_address0 = grp_linear_forward_no_mu_fu_3335_input_61_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_244_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_244_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_244_ce0 = grp_quantize_activation_fu_4076_output_states_61_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_244_ce0 = grp_linear_forward_no_mu_fu_3335_input_61_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_244_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_244_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_244_we0 = grp_quantize_activation_fu_4076_output_states_61_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_244_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_245_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_245_address0 = grp_quantize_activation_fu_4076_output_states_61_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_245_address0 = grp_linear_forward_no_mu_fu_3335_input_61_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_245_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_245_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_245_ce0 = grp_quantize_activation_fu_4076_output_states_61_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_245_ce0 = grp_linear_forward_no_mu_fu_3335_input_61_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_245_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_245_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_245_we0 = grp_quantize_activation_fu_4076_output_states_61_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_245_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_246_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_246_address0 = grp_quantize_activation_fu_4076_output_states_61_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_246_address0 = grp_linear_forward_no_mu_fu_3335_input_61_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_246_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_246_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_246_ce0 = grp_quantize_activation_fu_4076_output_states_61_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_246_ce0 = grp_linear_forward_no_mu_fu_3335_input_61_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_246_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_246_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_246_we0 = grp_quantize_activation_fu_4076_output_states_61_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_246_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_247_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_247_address0 = grp_quantize_activation_fu_4076_output_states_61_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_247_address0 = grp_linear_forward_no_mu_fu_3335_input_61_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_247_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_247_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_247_ce0 = grp_quantize_activation_fu_4076_output_states_61_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_247_ce0 = grp_linear_forward_no_mu_fu_3335_input_61_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_247_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_247_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_247_we0 = grp_quantize_activation_fu_4076_output_states_61_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_247_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_248_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_248_address0 = grp_quantize_activation_fu_4076_output_states_62_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_248_address0 = grp_linear_forward_no_mu_fu_3335_input_62_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_248_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_248_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_248_ce0 = grp_quantize_activation_fu_4076_output_states_62_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_248_ce0 = grp_linear_forward_no_mu_fu_3335_input_62_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_248_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_248_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_248_we0 = grp_quantize_activation_fu_4076_output_states_62_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_248_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_249_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_249_address0 = grp_quantize_activation_fu_4076_output_states_62_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_249_address0 = grp_linear_forward_no_mu_fu_3335_input_62_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_249_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_249_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_249_ce0 = grp_quantize_activation_fu_4076_output_states_62_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_249_ce0 = grp_linear_forward_no_mu_fu_3335_input_62_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_249_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_249_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_249_we0 = grp_quantize_activation_fu_4076_output_states_62_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_249_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_24_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_24_address0 = grp_quantize_activation_fu_4076_output_states_6_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_24_address0 = grp_linear_forward_no_mu_fu_3335_input_6_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_24_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_24_ce0 = grp_quantize_activation_fu_4076_output_states_6_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_24_ce0 = grp_linear_forward_no_mu_fu_3335_input_6_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_24_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_24_we0 = grp_quantize_activation_fu_4076_output_states_6_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_24_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_250_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_250_address0 = grp_quantize_activation_fu_4076_output_states_62_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_250_address0 = grp_linear_forward_no_mu_fu_3335_input_62_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_250_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_250_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_250_ce0 = grp_quantize_activation_fu_4076_output_states_62_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_250_ce0 = grp_linear_forward_no_mu_fu_3335_input_62_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_250_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_250_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_250_we0 = grp_quantize_activation_fu_4076_output_states_62_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_250_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_251_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_251_address0 = grp_quantize_activation_fu_4076_output_states_62_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_251_address0 = grp_linear_forward_no_mu_fu_3335_input_62_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_251_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_251_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_251_ce0 = grp_quantize_activation_fu_4076_output_states_62_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_251_ce0 = grp_linear_forward_no_mu_fu_3335_input_62_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_251_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_251_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_251_we0 = grp_quantize_activation_fu_4076_output_states_62_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_251_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_252_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_252_address0 = grp_quantize_activation_fu_4076_output_states_63_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_252_address0 = grp_linear_forward_no_mu_fu_3335_input_63_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_252_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_252_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_252_ce0 = grp_quantize_activation_fu_4076_output_states_63_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_252_ce0 = grp_linear_forward_no_mu_fu_3335_input_63_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_252_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_252_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_252_we0 = grp_quantize_activation_fu_4076_output_states_63_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_252_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_253_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_253_address0 = grp_quantize_activation_fu_4076_output_states_63_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_253_address0 = grp_linear_forward_no_mu_fu_3335_input_63_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_253_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_253_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_253_ce0 = grp_quantize_activation_fu_4076_output_states_63_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_253_ce0 = grp_linear_forward_no_mu_fu_3335_input_63_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_253_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_253_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_253_we0 = grp_quantize_activation_fu_4076_output_states_63_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_253_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_254_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_254_address0 = grp_quantize_activation_fu_4076_output_states_63_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_254_address0 = grp_linear_forward_no_mu_fu_3335_input_63_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_254_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_254_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_254_ce0 = grp_quantize_activation_fu_4076_output_states_63_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_254_ce0 = grp_linear_forward_no_mu_fu_3335_input_63_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_254_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_254_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_254_we0 = grp_quantize_activation_fu_4076_output_states_63_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_254_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_255_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_255_address0 = grp_quantize_activation_fu_4076_output_states_63_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_255_address0 = grp_linear_forward_no_mu_fu_3335_input_63_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_255_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_255_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_255_ce0 = grp_quantize_activation_fu_4076_output_states_63_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_255_ce0 = grp_linear_forward_no_mu_fu_3335_input_63_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_255_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_255_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_255_we0 = grp_quantize_activation_fu_4076_output_states_63_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_255_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_25_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_25_address0 = grp_quantize_activation_fu_4076_output_states_6_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_25_address0 = grp_linear_forward_no_mu_fu_3335_input_6_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_25_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_25_ce0 = grp_quantize_activation_fu_4076_output_states_6_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_25_ce0 = grp_linear_forward_no_mu_fu_3335_input_6_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_25_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_25_we0 = grp_quantize_activation_fu_4076_output_states_6_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_25_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_26_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_26_address0 = grp_quantize_activation_fu_4076_output_states_6_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_26_address0 = grp_linear_forward_no_mu_fu_3335_input_6_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_26_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_26_ce0 = grp_quantize_activation_fu_4076_output_states_6_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_26_ce0 = grp_linear_forward_no_mu_fu_3335_input_6_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_26_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_26_we0 = grp_quantize_activation_fu_4076_output_states_6_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_26_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_27_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_27_address0 = grp_quantize_activation_fu_4076_output_states_6_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_27_address0 = grp_linear_forward_no_mu_fu_3335_input_6_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_27_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_27_ce0 = grp_quantize_activation_fu_4076_output_states_6_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_27_ce0 = grp_linear_forward_no_mu_fu_3335_input_6_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_27_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_27_we0 = grp_quantize_activation_fu_4076_output_states_6_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_27_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_28_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_28_address0 = grp_quantize_activation_fu_4076_output_states_7_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_28_address0 = grp_linear_forward_no_mu_fu_3335_input_7_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_28_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_28_ce0 = grp_quantize_activation_fu_4076_output_states_7_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_28_ce0 = grp_linear_forward_no_mu_fu_3335_input_7_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_28_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_28_we0 = grp_quantize_activation_fu_4076_output_states_7_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_28_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_29_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_29_address0 = grp_quantize_activation_fu_4076_output_states_7_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_29_address0 = grp_linear_forward_no_mu_fu_3335_input_7_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_29_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_29_ce0 = grp_quantize_activation_fu_4076_output_states_7_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_29_ce0 = grp_linear_forward_no_mu_fu_3335_input_7_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_29_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_29_we0 = grp_quantize_activation_fu_4076_output_states_7_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_29_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_2_address0 = grp_quantize_activation_fu_4076_output_states_0_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_2_address0 = grp_linear_forward_no_mu_fu_3335_input_0_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_2_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_2_ce0 = grp_quantize_activation_fu_4076_output_states_0_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_2_ce0 = grp_linear_forward_no_mu_fu_3335_input_0_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_2_we0 = grp_quantize_activation_fu_4076_output_states_0_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_2_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_30_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_30_address0 = grp_quantize_activation_fu_4076_output_states_7_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_30_address0 = grp_linear_forward_no_mu_fu_3335_input_7_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_30_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_30_ce0 = grp_quantize_activation_fu_4076_output_states_7_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_30_ce0 = grp_linear_forward_no_mu_fu_3335_input_7_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_30_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_30_we0 = grp_quantize_activation_fu_4076_output_states_7_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_30_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_31_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_31_address0 = grp_quantize_activation_fu_4076_output_states_7_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_31_address0 = grp_linear_forward_no_mu_fu_3335_input_7_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_31_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_31_ce0 = grp_quantize_activation_fu_4076_output_states_7_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_31_ce0 = grp_linear_forward_no_mu_fu_3335_input_7_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_31_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_31_we0 = grp_quantize_activation_fu_4076_output_states_7_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_31_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_32_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_32_address0 = grp_quantize_activation_fu_4076_output_states_8_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_32_address0 = grp_linear_forward_no_mu_fu_3335_input_8_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_32_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_32_ce0 = grp_quantize_activation_fu_4076_output_states_8_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_32_ce0 = grp_linear_forward_no_mu_fu_3335_input_8_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_32_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_32_we0 = grp_quantize_activation_fu_4076_output_states_8_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_32_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_33_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_33_address0 = grp_quantize_activation_fu_4076_output_states_8_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_33_address0 = grp_linear_forward_no_mu_fu_3335_input_8_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_33_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_33_ce0 = grp_quantize_activation_fu_4076_output_states_8_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_33_ce0 = grp_linear_forward_no_mu_fu_3335_input_8_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_33_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_33_we0 = grp_quantize_activation_fu_4076_output_states_8_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_33_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_34_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_34_address0 = grp_quantize_activation_fu_4076_output_states_8_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_34_address0 = grp_linear_forward_no_mu_fu_3335_input_8_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_34_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_34_ce0 = grp_quantize_activation_fu_4076_output_states_8_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_34_ce0 = grp_linear_forward_no_mu_fu_3335_input_8_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_34_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_34_we0 = grp_quantize_activation_fu_4076_output_states_8_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_34_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_35_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_35_address0 = grp_quantize_activation_fu_4076_output_states_8_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_35_address0 = grp_linear_forward_no_mu_fu_3335_input_8_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_35_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_35_ce0 = grp_quantize_activation_fu_4076_output_states_8_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_35_ce0 = grp_linear_forward_no_mu_fu_3335_input_8_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_35_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_35_we0 = grp_quantize_activation_fu_4076_output_states_8_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_35_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_36_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_36_address0 = grp_quantize_activation_fu_4076_output_states_9_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_36_address0 = grp_linear_forward_no_mu_fu_3335_input_9_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_36_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_36_ce0 = grp_quantize_activation_fu_4076_output_states_9_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_36_ce0 = grp_linear_forward_no_mu_fu_3335_input_9_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_36_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_36_we0 = grp_quantize_activation_fu_4076_output_states_9_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_36_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_37_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_37_address0 = grp_quantize_activation_fu_4076_output_states_9_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_37_address0 = grp_linear_forward_no_mu_fu_3335_input_9_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_37_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_37_ce0 = grp_quantize_activation_fu_4076_output_states_9_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_37_ce0 = grp_linear_forward_no_mu_fu_3335_input_9_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_37_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_37_we0 = grp_quantize_activation_fu_4076_output_states_9_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_37_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_38_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_38_address0 = grp_quantize_activation_fu_4076_output_states_9_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_38_address0 = grp_linear_forward_no_mu_fu_3335_input_9_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_38_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_38_ce0 = grp_quantize_activation_fu_4076_output_states_9_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_38_ce0 = grp_linear_forward_no_mu_fu_3335_input_9_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_38_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_38_we0 = grp_quantize_activation_fu_4076_output_states_9_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_38_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_39_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_39_address0 = grp_quantize_activation_fu_4076_output_states_9_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_39_address0 = grp_linear_forward_no_mu_fu_3335_input_9_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_39_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_39_ce0 = grp_quantize_activation_fu_4076_output_states_9_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_39_ce0 = grp_linear_forward_no_mu_fu_3335_input_9_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_39_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_39_we0 = grp_quantize_activation_fu_4076_output_states_9_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_39_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_3_address0 = grp_quantize_activation_fu_4076_output_states_0_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_3_address0 = grp_linear_forward_no_mu_fu_3335_input_0_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_3_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_3_ce0 = grp_quantize_activation_fu_4076_output_states_0_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_3_ce0 = grp_linear_forward_no_mu_fu_3335_input_0_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_3_we0 = grp_quantize_activation_fu_4076_output_states_0_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_3_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_40_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_40_address0 = grp_quantize_activation_fu_4076_output_states_10_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_40_address0 = grp_linear_forward_no_mu_fu_3335_input_10_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_40_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_40_ce0 = grp_quantize_activation_fu_4076_output_states_10_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_40_ce0 = grp_linear_forward_no_mu_fu_3335_input_10_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_40_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_40_we0 = grp_quantize_activation_fu_4076_output_states_10_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_40_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_41_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_41_address0 = grp_quantize_activation_fu_4076_output_states_10_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_41_address0 = grp_linear_forward_no_mu_fu_3335_input_10_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_41_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_41_ce0 = grp_quantize_activation_fu_4076_output_states_10_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_41_ce0 = grp_linear_forward_no_mu_fu_3335_input_10_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_41_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_41_we0 = grp_quantize_activation_fu_4076_output_states_10_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_41_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_42_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_42_address0 = grp_quantize_activation_fu_4076_output_states_10_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_42_address0 = grp_linear_forward_no_mu_fu_3335_input_10_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_42_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_42_ce0 = grp_quantize_activation_fu_4076_output_states_10_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_42_ce0 = grp_linear_forward_no_mu_fu_3335_input_10_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_42_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_42_we0 = grp_quantize_activation_fu_4076_output_states_10_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_42_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_43_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_43_address0 = grp_quantize_activation_fu_4076_output_states_10_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_43_address0 = grp_linear_forward_no_mu_fu_3335_input_10_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_43_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_43_ce0 = grp_quantize_activation_fu_4076_output_states_10_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_43_ce0 = grp_linear_forward_no_mu_fu_3335_input_10_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_43_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_43_we0 = grp_quantize_activation_fu_4076_output_states_10_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_43_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_44_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_44_address0 = grp_quantize_activation_fu_4076_output_states_11_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_44_address0 = grp_linear_forward_no_mu_fu_3335_input_11_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_44_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_44_ce0 = grp_quantize_activation_fu_4076_output_states_11_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_44_ce0 = grp_linear_forward_no_mu_fu_3335_input_11_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_44_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_44_we0 = grp_quantize_activation_fu_4076_output_states_11_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_44_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_45_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_45_address0 = grp_quantize_activation_fu_4076_output_states_11_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_45_address0 = grp_linear_forward_no_mu_fu_3335_input_11_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_45_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_45_ce0 = grp_quantize_activation_fu_4076_output_states_11_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_45_ce0 = grp_linear_forward_no_mu_fu_3335_input_11_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_45_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_45_we0 = grp_quantize_activation_fu_4076_output_states_11_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_45_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_46_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_46_address0 = grp_quantize_activation_fu_4076_output_states_11_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_46_address0 = grp_linear_forward_no_mu_fu_3335_input_11_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_46_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_46_ce0 = grp_quantize_activation_fu_4076_output_states_11_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_46_ce0 = grp_linear_forward_no_mu_fu_3335_input_11_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_46_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_46_we0 = grp_quantize_activation_fu_4076_output_states_11_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_46_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_47_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_47_address0 = grp_quantize_activation_fu_4076_output_states_11_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_47_address0 = grp_linear_forward_no_mu_fu_3335_input_11_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_47_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_47_ce0 = grp_quantize_activation_fu_4076_output_states_11_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_47_ce0 = grp_linear_forward_no_mu_fu_3335_input_11_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_47_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_47_we0 = grp_quantize_activation_fu_4076_output_states_11_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_47_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_48_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_48_address0 = grp_quantize_activation_fu_4076_output_states_12_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_48_address0 = grp_linear_forward_no_mu_fu_3335_input_12_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_48_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_48_ce0 = grp_quantize_activation_fu_4076_output_states_12_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_48_ce0 = grp_linear_forward_no_mu_fu_3335_input_12_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_48_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_48_we0 = grp_quantize_activation_fu_4076_output_states_12_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_48_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_49_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_49_address0 = grp_quantize_activation_fu_4076_output_states_12_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_49_address0 = grp_linear_forward_no_mu_fu_3335_input_12_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_49_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_49_ce0 = grp_quantize_activation_fu_4076_output_states_12_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_49_ce0 = grp_linear_forward_no_mu_fu_3335_input_12_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_49_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_49_we0 = grp_quantize_activation_fu_4076_output_states_12_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_49_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_4_address0 = grp_quantize_activation_fu_4076_output_states_1_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_4_address0 = grp_linear_forward_no_mu_fu_3335_input_1_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_4_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_4_ce0 = grp_quantize_activation_fu_4076_output_states_1_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_4_ce0 = grp_linear_forward_no_mu_fu_3335_input_1_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_4_we0 = grp_quantize_activation_fu_4076_output_states_1_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_4_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_50_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_50_address0 = grp_quantize_activation_fu_4076_output_states_12_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_50_address0 = grp_linear_forward_no_mu_fu_3335_input_12_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_50_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_50_ce0 = grp_quantize_activation_fu_4076_output_states_12_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_50_ce0 = grp_linear_forward_no_mu_fu_3335_input_12_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_50_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_50_we0 = grp_quantize_activation_fu_4076_output_states_12_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_50_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_51_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_51_address0 = grp_quantize_activation_fu_4076_output_states_12_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_51_address0 = grp_linear_forward_no_mu_fu_3335_input_12_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_51_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_51_ce0 = grp_quantize_activation_fu_4076_output_states_12_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_51_ce0 = grp_linear_forward_no_mu_fu_3335_input_12_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_51_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_51_we0 = grp_quantize_activation_fu_4076_output_states_12_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_51_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_52_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_52_address0 = grp_quantize_activation_fu_4076_output_states_13_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_52_address0 = grp_linear_forward_no_mu_fu_3335_input_13_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_52_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_52_ce0 = grp_quantize_activation_fu_4076_output_states_13_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_52_ce0 = grp_linear_forward_no_mu_fu_3335_input_13_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_52_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_52_we0 = grp_quantize_activation_fu_4076_output_states_13_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_52_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_53_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_53_address0 = grp_quantize_activation_fu_4076_output_states_13_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_53_address0 = grp_linear_forward_no_mu_fu_3335_input_13_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_53_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_53_ce0 = grp_quantize_activation_fu_4076_output_states_13_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_53_ce0 = grp_linear_forward_no_mu_fu_3335_input_13_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_53_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_53_we0 = grp_quantize_activation_fu_4076_output_states_13_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_53_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_54_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_54_address0 = grp_quantize_activation_fu_4076_output_states_13_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_54_address0 = grp_linear_forward_no_mu_fu_3335_input_13_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_54_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_54_ce0 = grp_quantize_activation_fu_4076_output_states_13_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_54_ce0 = grp_linear_forward_no_mu_fu_3335_input_13_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_54_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_54_we0 = grp_quantize_activation_fu_4076_output_states_13_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_54_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_55_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_55_address0 = grp_quantize_activation_fu_4076_output_states_13_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_55_address0 = grp_linear_forward_no_mu_fu_3335_input_13_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_55_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_55_ce0 = grp_quantize_activation_fu_4076_output_states_13_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_55_ce0 = grp_linear_forward_no_mu_fu_3335_input_13_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_55_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_55_we0 = grp_quantize_activation_fu_4076_output_states_13_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_55_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_56_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_56_address0 = grp_quantize_activation_fu_4076_output_states_14_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_56_address0 = grp_linear_forward_no_mu_fu_3335_input_14_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_56_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_56_ce0 = grp_quantize_activation_fu_4076_output_states_14_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_56_ce0 = grp_linear_forward_no_mu_fu_3335_input_14_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_56_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_56_we0 = grp_quantize_activation_fu_4076_output_states_14_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_56_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_57_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_57_address0 = grp_quantize_activation_fu_4076_output_states_14_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_57_address0 = grp_linear_forward_no_mu_fu_3335_input_14_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_57_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_57_ce0 = grp_quantize_activation_fu_4076_output_states_14_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_57_ce0 = grp_linear_forward_no_mu_fu_3335_input_14_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_57_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_57_we0 = grp_quantize_activation_fu_4076_output_states_14_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_57_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_58_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_58_address0 = grp_quantize_activation_fu_4076_output_states_14_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_58_address0 = grp_linear_forward_no_mu_fu_3335_input_14_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_58_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_58_ce0 = grp_quantize_activation_fu_4076_output_states_14_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_58_ce0 = grp_linear_forward_no_mu_fu_3335_input_14_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_58_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_58_we0 = grp_quantize_activation_fu_4076_output_states_14_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_58_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_59_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_59_address0 = grp_quantize_activation_fu_4076_output_states_14_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_59_address0 = grp_linear_forward_no_mu_fu_3335_input_14_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_59_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_59_ce0 = grp_quantize_activation_fu_4076_output_states_14_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_59_ce0 = grp_linear_forward_no_mu_fu_3335_input_14_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_59_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_59_we0 = grp_quantize_activation_fu_4076_output_states_14_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_59_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_5_address0 = grp_quantize_activation_fu_4076_output_states_1_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_5_address0 = grp_linear_forward_no_mu_fu_3335_input_1_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_5_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_5_ce0 = grp_quantize_activation_fu_4076_output_states_1_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_5_ce0 = grp_linear_forward_no_mu_fu_3335_input_1_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_5_we0 = grp_quantize_activation_fu_4076_output_states_1_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_5_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_60_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_60_address0 = grp_quantize_activation_fu_4076_output_states_15_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_60_address0 = grp_linear_forward_no_mu_fu_3335_input_15_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_60_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_60_ce0 = grp_quantize_activation_fu_4076_output_states_15_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_60_ce0 = grp_linear_forward_no_mu_fu_3335_input_15_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_60_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_60_we0 = grp_quantize_activation_fu_4076_output_states_15_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_60_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_61_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_61_address0 = grp_quantize_activation_fu_4076_output_states_15_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_61_address0 = grp_linear_forward_no_mu_fu_3335_input_15_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_61_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_61_ce0 = grp_quantize_activation_fu_4076_output_states_15_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_61_ce0 = grp_linear_forward_no_mu_fu_3335_input_15_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_61_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_61_we0 = grp_quantize_activation_fu_4076_output_states_15_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_61_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_62_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_62_address0 = grp_quantize_activation_fu_4076_output_states_15_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_62_address0 = grp_linear_forward_no_mu_fu_3335_input_15_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_62_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_62_ce0 = grp_quantize_activation_fu_4076_output_states_15_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_62_ce0 = grp_linear_forward_no_mu_fu_3335_input_15_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_62_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_62_we0 = grp_quantize_activation_fu_4076_output_states_15_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_62_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_63_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_63_address0 = grp_quantize_activation_fu_4076_output_states_15_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_63_address0 = grp_linear_forward_no_mu_fu_3335_input_15_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_63_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_63_ce0 = grp_quantize_activation_fu_4076_output_states_15_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_63_ce0 = grp_linear_forward_no_mu_fu_3335_input_15_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_63_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_63_we0 = grp_quantize_activation_fu_4076_output_states_15_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_63_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_64_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_64_address0 = grp_quantize_activation_fu_4076_output_states_16_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_64_address0 = grp_linear_forward_no_mu_fu_3335_input_16_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_64_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_64_ce0 = grp_quantize_activation_fu_4076_output_states_16_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_64_ce0 = grp_linear_forward_no_mu_fu_3335_input_16_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_64_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_64_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_64_we0 = grp_quantize_activation_fu_4076_output_states_16_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_64_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_65_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_65_address0 = grp_quantize_activation_fu_4076_output_states_16_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_65_address0 = grp_linear_forward_no_mu_fu_3335_input_16_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_65_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_65_ce0 = grp_quantize_activation_fu_4076_output_states_16_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_65_ce0 = grp_linear_forward_no_mu_fu_3335_input_16_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_65_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_65_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_65_we0 = grp_quantize_activation_fu_4076_output_states_16_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_65_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_66_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_66_address0 = grp_quantize_activation_fu_4076_output_states_16_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_66_address0 = grp_linear_forward_no_mu_fu_3335_input_16_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_66_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_66_ce0 = grp_quantize_activation_fu_4076_output_states_16_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_66_ce0 = grp_linear_forward_no_mu_fu_3335_input_16_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_66_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_66_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_66_we0 = grp_quantize_activation_fu_4076_output_states_16_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_66_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_67_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_67_address0 = grp_quantize_activation_fu_4076_output_states_16_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_67_address0 = grp_linear_forward_no_mu_fu_3335_input_16_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_67_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_67_ce0 = grp_quantize_activation_fu_4076_output_states_16_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_67_ce0 = grp_linear_forward_no_mu_fu_3335_input_16_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_67_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_67_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_67_we0 = grp_quantize_activation_fu_4076_output_states_16_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_67_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_68_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_68_address0 = grp_quantize_activation_fu_4076_output_states_17_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_68_address0 = grp_linear_forward_no_mu_fu_3335_input_17_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_68_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_68_ce0 = grp_quantize_activation_fu_4076_output_states_17_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_68_ce0 = grp_linear_forward_no_mu_fu_3335_input_17_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_68_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_68_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_68_we0 = grp_quantize_activation_fu_4076_output_states_17_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_68_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_69_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_69_address0 = grp_quantize_activation_fu_4076_output_states_17_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_69_address0 = grp_linear_forward_no_mu_fu_3335_input_17_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_69_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_69_ce0 = grp_quantize_activation_fu_4076_output_states_17_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_69_ce0 = grp_linear_forward_no_mu_fu_3335_input_17_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_69_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_69_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_69_we0 = grp_quantize_activation_fu_4076_output_states_17_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_69_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_6_address0 = grp_quantize_activation_fu_4076_output_states_1_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_6_address0 = grp_linear_forward_no_mu_fu_3335_input_1_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_6_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_6_ce0 = grp_quantize_activation_fu_4076_output_states_1_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_6_ce0 = grp_linear_forward_no_mu_fu_3335_input_1_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_6_we0 = grp_quantize_activation_fu_4076_output_states_1_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_6_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_70_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_70_address0 = grp_quantize_activation_fu_4076_output_states_17_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_70_address0 = grp_linear_forward_no_mu_fu_3335_input_17_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_70_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_70_ce0 = grp_quantize_activation_fu_4076_output_states_17_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_70_ce0 = grp_linear_forward_no_mu_fu_3335_input_17_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_70_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_70_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_70_we0 = grp_quantize_activation_fu_4076_output_states_17_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_70_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_71_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_71_address0 = grp_quantize_activation_fu_4076_output_states_17_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_71_address0 = grp_linear_forward_no_mu_fu_3335_input_17_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_71_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_71_ce0 = grp_quantize_activation_fu_4076_output_states_17_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_71_ce0 = grp_linear_forward_no_mu_fu_3335_input_17_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_71_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_71_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_71_we0 = grp_quantize_activation_fu_4076_output_states_17_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_71_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_72_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_72_address0 = grp_quantize_activation_fu_4076_output_states_18_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_72_address0 = grp_linear_forward_no_mu_fu_3335_input_18_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_72_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_72_ce0 = grp_quantize_activation_fu_4076_output_states_18_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_72_ce0 = grp_linear_forward_no_mu_fu_3335_input_18_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_72_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_72_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_72_we0 = grp_quantize_activation_fu_4076_output_states_18_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_72_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_73_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_73_address0 = grp_quantize_activation_fu_4076_output_states_18_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_73_address0 = grp_linear_forward_no_mu_fu_3335_input_18_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_73_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_73_ce0 = grp_quantize_activation_fu_4076_output_states_18_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_73_ce0 = grp_linear_forward_no_mu_fu_3335_input_18_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_73_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_73_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_73_we0 = grp_quantize_activation_fu_4076_output_states_18_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_73_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_74_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_74_address0 = grp_quantize_activation_fu_4076_output_states_18_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_74_address0 = grp_linear_forward_no_mu_fu_3335_input_18_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_74_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_74_ce0 = grp_quantize_activation_fu_4076_output_states_18_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_74_ce0 = grp_linear_forward_no_mu_fu_3335_input_18_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_74_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_74_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_74_we0 = grp_quantize_activation_fu_4076_output_states_18_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_74_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_75_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_75_address0 = grp_quantize_activation_fu_4076_output_states_18_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_75_address0 = grp_linear_forward_no_mu_fu_3335_input_18_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_75_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_75_ce0 = grp_quantize_activation_fu_4076_output_states_18_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_75_ce0 = grp_linear_forward_no_mu_fu_3335_input_18_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_75_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_75_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_75_we0 = grp_quantize_activation_fu_4076_output_states_18_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_75_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_76_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_76_address0 = grp_quantize_activation_fu_4076_output_states_19_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_76_address0 = grp_linear_forward_no_mu_fu_3335_input_19_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_76_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_76_ce0 = grp_quantize_activation_fu_4076_output_states_19_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_76_ce0 = grp_linear_forward_no_mu_fu_3335_input_19_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_76_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_76_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_76_we0 = grp_quantize_activation_fu_4076_output_states_19_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_76_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_77_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_77_address0 = grp_quantize_activation_fu_4076_output_states_19_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_77_address0 = grp_linear_forward_no_mu_fu_3335_input_19_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_77_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_77_ce0 = grp_quantize_activation_fu_4076_output_states_19_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_77_ce0 = grp_linear_forward_no_mu_fu_3335_input_19_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_77_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_77_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_77_we0 = grp_quantize_activation_fu_4076_output_states_19_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_77_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_78_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_78_address0 = grp_quantize_activation_fu_4076_output_states_19_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_78_address0 = grp_linear_forward_no_mu_fu_3335_input_19_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_78_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_78_ce0 = grp_quantize_activation_fu_4076_output_states_19_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_78_ce0 = grp_linear_forward_no_mu_fu_3335_input_19_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_78_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_78_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_78_we0 = grp_quantize_activation_fu_4076_output_states_19_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_78_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_79_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_79_address0 = grp_quantize_activation_fu_4076_output_states_19_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_79_address0 = grp_linear_forward_no_mu_fu_3335_input_19_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_79_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_79_ce0 = grp_quantize_activation_fu_4076_output_states_19_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_79_ce0 = grp_linear_forward_no_mu_fu_3335_input_19_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_79_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_79_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_79_we0 = grp_quantize_activation_fu_4076_output_states_19_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_79_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_7_address0 = grp_quantize_activation_fu_4076_output_states_1_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_7_address0 = grp_linear_forward_no_mu_fu_3335_input_1_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_7_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_7_ce0 = grp_quantize_activation_fu_4076_output_states_1_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_7_ce0 = grp_linear_forward_no_mu_fu_3335_input_1_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_7_we0 = grp_quantize_activation_fu_4076_output_states_1_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_7_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_80_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_80_address0 = grp_quantize_activation_fu_4076_output_states_20_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_80_address0 = grp_linear_forward_no_mu_fu_3335_input_20_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_80_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_80_ce0 = grp_quantize_activation_fu_4076_output_states_20_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_80_ce0 = grp_linear_forward_no_mu_fu_3335_input_20_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_80_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_80_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_80_we0 = grp_quantize_activation_fu_4076_output_states_20_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_80_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_81_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_81_address0 = grp_quantize_activation_fu_4076_output_states_20_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_81_address0 = grp_linear_forward_no_mu_fu_3335_input_20_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_81_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_81_ce0 = grp_quantize_activation_fu_4076_output_states_20_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_81_ce0 = grp_linear_forward_no_mu_fu_3335_input_20_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_81_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_81_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_81_we0 = grp_quantize_activation_fu_4076_output_states_20_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_81_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_82_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_82_address0 = grp_quantize_activation_fu_4076_output_states_20_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_82_address0 = grp_linear_forward_no_mu_fu_3335_input_20_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_82_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_82_ce0 = grp_quantize_activation_fu_4076_output_states_20_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_82_ce0 = grp_linear_forward_no_mu_fu_3335_input_20_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_82_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_82_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_82_we0 = grp_quantize_activation_fu_4076_output_states_20_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_82_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_83_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_83_address0 = grp_quantize_activation_fu_4076_output_states_20_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_83_address0 = grp_linear_forward_no_mu_fu_3335_input_20_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_83_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_83_ce0 = grp_quantize_activation_fu_4076_output_states_20_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_83_ce0 = grp_linear_forward_no_mu_fu_3335_input_20_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_83_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_83_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_83_we0 = grp_quantize_activation_fu_4076_output_states_20_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_83_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_84_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_84_address0 = grp_quantize_activation_fu_4076_output_states_21_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_84_address0 = grp_linear_forward_no_mu_fu_3335_input_21_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_84_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_84_ce0 = grp_quantize_activation_fu_4076_output_states_21_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_84_ce0 = grp_linear_forward_no_mu_fu_3335_input_21_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_84_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_84_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_84_we0 = grp_quantize_activation_fu_4076_output_states_21_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_84_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_85_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_85_address0 = grp_quantize_activation_fu_4076_output_states_21_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_85_address0 = grp_linear_forward_no_mu_fu_3335_input_21_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_85_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_85_ce0 = grp_quantize_activation_fu_4076_output_states_21_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_85_ce0 = grp_linear_forward_no_mu_fu_3335_input_21_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_85_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_85_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_85_we0 = grp_quantize_activation_fu_4076_output_states_21_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_85_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_86_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_86_address0 = grp_quantize_activation_fu_4076_output_states_21_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_86_address0 = grp_linear_forward_no_mu_fu_3335_input_21_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_86_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_86_ce0 = grp_quantize_activation_fu_4076_output_states_21_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_86_ce0 = grp_linear_forward_no_mu_fu_3335_input_21_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_86_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_86_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_86_we0 = grp_quantize_activation_fu_4076_output_states_21_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_86_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_87_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_87_address0 = grp_quantize_activation_fu_4076_output_states_21_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_87_address0 = grp_linear_forward_no_mu_fu_3335_input_21_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_87_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_87_ce0 = grp_quantize_activation_fu_4076_output_states_21_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_87_ce0 = grp_linear_forward_no_mu_fu_3335_input_21_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_87_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_87_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_87_we0 = grp_quantize_activation_fu_4076_output_states_21_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_87_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_88_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_88_address0 = grp_quantize_activation_fu_4076_output_states_22_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_88_address0 = grp_linear_forward_no_mu_fu_3335_input_22_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_88_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_88_ce0 = grp_quantize_activation_fu_4076_output_states_22_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_88_ce0 = grp_linear_forward_no_mu_fu_3335_input_22_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_88_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_88_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_88_we0 = grp_quantize_activation_fu_4076_output_states_22_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_88_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_89_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_89_address0 = grp_quantize_activation_fu_4076_output_states_22_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_89_address0 = grp_linear_forward_no_mu_fu_3335_input_22_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_89_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_89_ce0 = grp_quantize_activation_fu_4076_output_states_22_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_89_ce0 = grp_linear_forward_no_mu_fu_3335_input_22_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_89_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_89_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_89_we0 = grp_quantize_activation_fu_4076_output_states_22_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_89_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_8_address0 = grp_quantize_activation_fu_4076_output_states_2_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_8_address0 = grp_linear_forward_no_mu_fu_3335_input_2_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_8_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_8_ce0 = grp_quantize_activation_fu_4076_output_states_2_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_8_ce0 = grp_linear_forward_no_mu_fu_3335_input_2_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_8_we0 = grp_quantize_activation_fu_4076_output_states_2_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_8_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_90_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_90_address0 = grp_quantize_activation_fu_4076_output_states_22_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_90_address0 = grp_linear_forward_no_mu_fu_3335_input_22_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_90_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_90_ce0 = grp_quantize_activation_fu_4076_output_states_22_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_90_ce0 = grp_linear_forward_no_mu_fu_3335_input_22_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_90_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_90_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_90_we0 = grp_quantize_activation_fu_4076_output_states_22_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_90_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_91_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_91_address0 = grp_quantize_activation_fu_4076_output_states_22_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_91_address0 = grp_linear_forward_no_mu_fu_3335_input_22_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_91_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_91_ce0 = grp_quantize_activation_fu_4076_output_states_22_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_91_ce0 = grp_linear_forward_no_mu_fu_3335_input_22_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_91_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_91_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_91_we0 = grp_quantize_activation_fu_4076_output_states_22_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_91_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_92_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_92_address0 = grp_quantize_activation_fu_4076_output_states_23_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_92_address0 = grp_linear_forward_no_mu_fu_3335_input_23_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_92_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_92_ce0 = grp_quantize_activation_fu_4076_output_states_23_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_92_ce0 = grp_linear_forward_no_mu_fu_3335_input_23_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_92_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_92_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_92_we0 = grp_quantize_activation_fu_4076_output_states_23_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_92_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_93_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_93_address0 = grp_quantize_activation_fu_4076_output_states_23_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_93_address0 = grp_linear_forward_no_mu_fu_3335_input_23_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_93_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_93_ce0 = grp_quantize_activation_fu_4076_output_states_23_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_93_ce0 = grp_linear_forward_no_mu_fu_3335_input_23_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_93_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_93_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_93_we0 = grp_quantize_activation_fu_4076_output_states_23_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_93_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_94_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_94_address0 = grp_quantize_activation_fu_4076_output_states_23_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_94_address0 = grp_linear_forward_no_mu_fu_3335_input_23_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_94_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_94_ce0 = grp_quantize_activation_fu_4076_output_states_23_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_94_ce0 = grp_linear_forward_no_mu_fu_3335_input_23_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_94_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_94_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_94_we0 = grp_quantize_activation_fu_4076_output_states_23_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_94_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_95_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_95_address0 = grp_quantize_activation_fu_4076_output_states_23_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_95_address0 = grp_linear_forward_no_mu_fu_3335_input_23_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_95_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_95_ce0 = grp_quantize_activation_fu_4076_output_states_23_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_95_ce0 = grp_linear_forward_no_mu_fu_3335_input_23_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_95_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_95_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_95_we0 = grp_quantize_activation_fu_4076_output_states_23_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_95_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_96_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_96_address0 = grp_quantize_activation_fu_4076_output_states_24_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_96_address0 = grp_linear_forward_no_mu_fu_3335_input_24_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_96_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_96_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_96_ce0 = grp_quantize_activation_fu_4076_output_states_24_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_96_ce0 = grp_linear_forward_no_mu_fu_3335_input_24_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_96_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_96_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_96_we0 = grp_quantize_activation_fu_4076_output_states_24_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_96_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_97_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_97_address0 = grp_quantize_activation_fu_4076_output_states_24_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_97_address0 = grp_linear_forward_no_mu_fu_3335_input_24_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_97_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_97_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_97_ce0 = grp_quantize_activation_fu_4076_output_states_24_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_97_ce0 = grp_linear_forward_no_mu_fu_3335_input_24_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_97_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_97_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_97_we0 = grp_quantize_activation_fu_4076_output_states_24_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_97_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_98_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_98_address0 = grp_quantize_activation_fu_4076_output_states_24_2_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_98_address0 = grp_linear_forward_no_mu_fu_3335_input_24_2_0_V_address0.read();
    } else {
        quantized_hidden_sta_98_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_98_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_98_ce0 = grp_quantize_activation_fu_4076_output_states_24_2_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_98_ce0 = grp_linear_forward_no_mu_fu_3335_input_24_2_0_V_ce0.read();
    } else {
        quantized_hidden_sta_98_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_98_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_98_we0 = grp_quantize_activation_fu_4076_output_states_24_2_0_V_we0.read();
    } else {
        quantized_hidden_sta_98_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_99_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_99_address0 = grp_quantize_activation_fu_4076_output_states_24_3_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_99_address0 = grp_linear_forward_no_mu_fu_3335_input_24_3_0_V_address0.read();
    } else {
        quantized_hidden_sta_99_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_99_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_99_ce0 = grp_quantize_activation_fu_4076_output_states_24_3_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_99_ce0 = grp_linear_forward_no_mu_fu_3335_input_24_3_0_V_ce0.read();
    } else {
        quantized_hidden_sta_99_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_99_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_99_we0 = grp_quantize_activation_fu_4076_output_states_24_3_0_V_we0.read();
    } else {
        quantized_hidden_sta_99_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_9_address0 = grp_quantize_activation_fu_4076_output_states_2_1_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_9_address0 = grp_linear_forward_no_mu_fu_3335_input_2_1_0_V_address0.read();
    } else {
        quantized_hidden_sta_9_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_9_ce0 = grp_quantize_activation_fu_4076_output_states_2_1_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_9_ce0 = grp_linear_forward_no_mu_fu_3335_input_2_1_0_V_ce0.read();
    } else {
        quantized_hidden_sta_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_9_we0 = grp_quantize_activation_fu_4076_output_states_2_1_0_V_we0.read();
    } else {
        quantized_hidden_sta_9_we0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_address0 = grp_quantize_activation_fu_4076_output_states_0_0_0_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_address0 = grp_linear_forward_no_mu_fu_3335_input_0_0_0_V_address0.read();
    } else {
        quantized_hidden_sta_address0 =  (sc_lv<3>) ("XXX");
    }
}

void attention::thread_quantized_hidden_sta_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_ce0 = grp_quantize_activation_fu_4076_output_states_0_0_0_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()))) {
        quantized_hidden_sta_ce0 = grp_linear_forward_no_mu_fu_3335_input_0_0_0_V_ce0.read();
    } else {
        quantized_hidden_sta_ce0 = ap_const_logic_0;
    }
}

void attention::thread_quantized_hidden_sta_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        quantized_hidden_sta_we0 = grp_quantize_activation_fu_4076_output_states_0_0_0_V_we0.read();
    } else {
        quantized_hidden_sta_we0 = ap_const_logic_0;
    }
}

void attention::thread_select_ln1148_2_fu_4660_p3() {
    select_ln1148_2_fu_4660_p3 = (!tmp_85_reg_4810.read()[0].is_01())? sc_lv<40>(): ((tmp_85_reg_4810.read()[0].to_bool())? sub_ln703_fu_4651_p2.read(): sext_ln703_504_fu_4657_p1.read());
}

void attention::thread_select_ln1148_fu_4642_p3() {
    select_ln1148_fu_4642_p3 = (!tmp_85_reg_4810.read()[0].is_01())? sc_lv<37>(): ((tmp_85_reg_4810.read()[0].to_bool())? tmp_86_fu_4632_p4.read(): tmp_87_reg_4826.read());
}

void attention::thread_sext_ln1265_fu_4587_p1() {
    sext_ln1265_fu_4587_p1 = esl_sext<64,8>(add_ln1265_fu_4582_p2.read());
}

void attention::thread_sext_ln203_fu_4766_p1() {
    sext_ln203_fu_4766_p1 = esl_sext<64,12>(add_ln203_fu_4761_p2.read());
}

void attention::thread_sext_ln210_fu_4771_p1() {
    sext_ln210_fu_4771_p1 = esl_sext<32,12>(add_ln210_reg_4863.read());
}

void attention::thread_sext_ln703_504_fu_4657_p1() {
    sext_ln703_504_fu_4657_p1 = esl_sext<40,37>(select_ln1148_reg_4831.read());
}

void attention::thread_sext_ln703_fu_4648_p1() {
    sext_ln703_fu_4648_p1 = esl_sext<40,37>(select_ln1148_reg_4831.read());
}

void attention::thread_shl_ln210_1_fu_4696_p3() {
    shl_ln210_1_fu_4696_p3 = esl_concat<4,5>(trunc_ln210_fu_4680_p1.read(), ap_const_lv5_0);
}

void attention::thread_shl_ln3_fu_4600_p3() {
    shl_ln3_fu_4600_p3 = esl_concat<40,16>(attn_weights_0_V_lo_reg_4805.read(), ap_const_lv16_0);
}

void attention::thread_shl_ln_fu_4684_p3() {
    shl_ln_fu_4684_p3 = esl_concat<4,7>(trunc_ln210_fu_4680_p1.read(), ap_const_lv7_0);
}

void attention::thread_sub_ln1148_fu_4627_p2() {
    sub_ln1148_fu_4627_p2 = (!ap_const_lv113_0.is_01() || !mul_ln1148_reg_4821.read().is_01())? sc_lv<113>(): (sc_biguint<113>(ap_const_lv113_0) - sc_biguint<113>(mul_ln1148_reg_4821.read()));
}

void attention::thread_sub_ln1265_fu_4560_p2() {
    sub_ln1265_fu_4560_p2 = (!tmp_64_fu_4540_p3.read().is_01() || !zext_ln1265_fu_4556_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_64_fu_4540_p3.read()) - sc_biguint<8>(zext_ln1265_fu_4556_p1.read()));
}

void attention::thread_sub_ln203_fu_4734_p2() {
    sub_ln203_fu_4734_p2 = (!tmp_66_fu_4714_p3.read().is_01() || !zext_ln203_fu_4730_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_66_fu_4714_p3.read()) - sc_biguint<12>(zext_ln203_fu_4730_p1.read()));
}

void attention::thread_sub_ln210_fu_4708_p2() {
    sub_ln210_fu_4708_p2 = (!zext_ln210_fu_4692_p1.read().is_01() || !zext_ln210_2_fu_4704_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln210_fu_4692_p1.read()) - sc_biguint<12>(zext_ln210_2_fu_4704_p1.read()));
}

void attention::thread_sub_ln703_fu_4651_p2() {
    sub_ln703_fu_4651_p2 = (!ap_const_lv40_0.is_01() || !sext_ln703_fu_4648_p1.read().is_01())? sc_lv<40>(): (sc_biguint<40>(ap_const_lv40_0) - sc_bigint<40>(sext_ln703_fu_4648_p1.read()));
}

void attention::thread_tmp_64_fu_4540_p3() {
    tmp_64_fu_4540_p3 = esl_concat<5,3>(h_0_reg_3291.read(), ap_const_lv3_0);
}

void attention::thread_tmp_65_fu_4548_p3() {
    tmp_65_fu_4548_p3 = esl_concat<5,1>(h_0_reg_3291.read(), ap_const_lv1_0);
}

void attention::thread_tmp_66_fu_4714_p3() {
    tmp_66_fu_4714_p3 = esl_concat<5,7>(h106_0_0_reg_3313.read(), ap_const_lv7_0);
}

void attention::thread_tmp_67_fu_4722_p3() {
    tmp_67_fu_4722_p3 = esl_concat<5,5>(h106_0_0_reg_3313.read(), ap_const_lv5_0);
}

void attention::thread_tmp_86_fu_4632_p4() {
    tmp_86_fu_4632_p4 = sub_ln1148_fu_4627_p2.read().range(112, 76);
}

void attention::thread_trunc_ln210_fu_4680_p1() {
    trunc_ln210_fu_4680_p1 = h106_0_0_reg_3313.read().range(4-1, 0);
}

void attention::thread_v_cache_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_cache_V_ce0 = grp_cache_update_fu_4489_cache_in_V_ce0.read();
    } else {
        v_cache_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_cache_upd_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_cache_upd_V_address0 = grp_cache_update_fu_4489_cache_out_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        v_cache_upd_V_address0 = grp_GEMM_3D_float_1_fu_4338_input_2_V_address0.read();
    } else {
        v_cache_upd_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void attention::thread_v_cache_upd_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_cache_upd_V_ce0 = grp_cache_update_fu_4489_cache_out_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        v_cache_upd_V_ce0 = grp_GEMM_3D_float_1_fu_4338_input_2_V_ce0.read();
    } else {
        v_cache_upd_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_cache_upd_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        v_cache_upd_V_ce1 = grp_GEMM_3D_float_1_fu_4338_input_2_V_ce1.read();
    } else {
        v_cache_upd_V_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v_cache_upd_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_cache_upd_V_we0 = grp_cache_update_fu_4489_cache_out_V_we0.read();
    } else {
        v_cache_upd_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v_proj_0_V_address0 = grp_reshape_2D_to_3D_fu_4498_output_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_proj_0_V_address0 = grp_cache_update_fu_4489_update_0_V_address0.read();
    } else {
        v_proj_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_v_proj_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v_proj_0_V_ce0 = grp_reshape_2D_to_3D_fu_4498_output_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        v_proj_0_V_ce0 = grp_cache_update_fu_4489_update_0_V_ce0.read();
    } else {
        v_proj_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v_proj_0_V_we0 = grp_reshape_2D_to_3D_fu_4498_output_0_V_we0.read();
    } else {
        v_proj_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_re_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        v_proj_re_0_V_address0 = grp_init_2d_mem_fu_4516_mem_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v_proj_re_0_V_address0 = grp_reshape_2D_to_3D_fu_4498_input_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_proj_re_0_V_address0 = grp_linear_forward_no_mu_fu_3335_output_0_V_address0.read();
    } else {
        v_proj_re_0_V_address0 = "XXXXXXXXXXX";
    }
}

void attention::thread_v_proj_re_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        v_proj_re_0_V_ce0 = grp_init_2d_mem_fu_4516_mem_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        v_proj_re_0_V_ce0 = grp_reshape_2D_to_3D_fu_4498_input_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_proj_re_0_V_ce0 = grp_linear_forward_no_mu_fu_3335_output_0_V_ce0.read();
    } else {
        v_proj_re_0_V_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_re_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_proj_re_0_V_ce1 = grp_linear_forward_no_mu_fu_3335_output_0_V_ce1.read();
    } else {
        v_proj_re_0_V_ce1 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_re_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        v_proj_re_0_V_d0 = grp_init_2d_mem_fu_4516_mem_0_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_proj_re_0_V_d0 = grp_linear_forward_no_mu_fu_3335_output_0_V_d0.read();
    } else {
        v_proj_re_0_V_d0 =  (sc_lv<40>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void attention::thread_v_proj_re_0_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        v_proj_re_0_V_we0 = grp_init_2d_mem_fu_4516_mem_0_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_proj_re_0_V_we0 = grp_linear_forward_no_mu_fu_3335_output_0_V_we0.read();
    } else {
        v_proj_re_0_V_we0 = ap_const_logic_0;
    }
}

void attention::thread_v_proj_re_0_V_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_proj_re_0_V_we1 = grp_linear_forward_no_mu_fu_3335_output_0_V_we1.read();
    } else {
        v_proj_re_0_V_we1 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_0_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_0_ce0.read();
    } else {
        v_weights_0_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_10_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_10_ce0.read();
    } else {
        v_weights_10_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_11_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_11_ce0.read();
    } else {
        v_weights_11_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_12_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_12_ce0.read();
    } else {
        v_weights_12_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_13_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_13_ce0.read();
    } else {
        v_weights_13_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_14_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_14_ce0.read();
    } else {
        v_weights_14_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_15_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_15_ce0.read();
    } else {
        v_weights_15_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_16_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_16_ce0.read();
    } else {
        v_weights_16_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_17_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_17_ce0.read();
    } else {
        v_weights_17_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_18_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_18_ce0.read();
    } else {
        v_weights_18_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_19_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_19_ce0.read();
    } else {
        v_weights_19_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_1_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_1_ce0.read();
    } else {
        v_weights_1_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_20_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_20_ce0.read();
    } else {
        v_weights_20_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_21_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_21_ce0.read();
    } else {
        v_weights_21_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_22_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_22_ce0.read();
    } else {
        v_weights_22_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_23_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_23_ce0.read();
    } else {
        v_weights_23_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_24_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_24_ce0.read();
    } else {
        v_weights_24_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_25_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_25_ce0.read();
    } else {
        v_weights_25_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_26_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_26_ce0.read();
    } else {
        v_weights_26_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_27_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_27_ce0.read();
    } else {
        v_weights_27_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_28_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_28_ce0.read();
    } else {
        v_weights_28_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_29_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_29_ce0.read();
    } else {
        v_weights_29_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_2_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_2_ce0.read();
    } else {
        v_weights_2_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_30_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_30_ce0.read();
    } else {
        v_weights_30_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_31_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_31_ce0.read();
    } else {
        v_weights_31_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_32_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_32_ce0.read();
    } else {
        v_weights_32_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_33_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_33_ce0.read();
    } else {
        v_weights_33_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_34_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_34_ce0.read();
    } else {
        v_weights_34_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_35_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_35_ce0.read();
    } else {
        v_weights_35_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_36_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_36_ce0.read();
    } else {
        v_weights_36_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_37_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_37_ce0.read();
    } else {
        v_weights_37_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_38_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_38_ce0.read();
    } else {
        v_weights_38_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_39_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_39_ce0.read();
    } else {
        v_weights_39_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_3_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_3_ce0.read();
    } else {
        v_weights_3_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_40_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_40_ce0.read();
    } else {
        v_weights_40_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_41_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_41_ce0.read();
    } else {
        v_weights_41_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_42_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_42_ce0.read();
    } else {
        v_weights_42_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_43_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_43_ce0.read();
    } else {
        v_weights_43_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_44_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_44_ce0.read();
    } else {
        v_weights_44_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_45_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_45_ce0.read();
    } else {
        v_weights_45_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_46_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_46_ce0.read();
    } else {
        v_weights_46_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_47_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_47_ce0.read();
    } else {
        v_weights_47_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_48_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_48_ce0.read();
    } else {
        v_weights_48_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_49_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_49_ce0.read();
    } else {
        v_weights_49_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_4_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_4_ce0.read();
    } else {
        v_weights_4_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_50_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_50_ce0.read();
    } else {
        v_weights_50_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_51_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_51_ce0.read();
    } else {
        v_weights_51_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_52_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_52_ce0.read();
    } else {
        v_weights_52_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_53_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_53_ce0.read();
    } else {
        v_weights_53_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_54_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_54_ce0.read();
    } else {
        v_weights_54_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_55_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_55_ce0.read();
    } else {
        v_weights_55_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_56_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_56_ce0.read();
    } else {
        v_weights_56_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_57_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_57_ce0.read();
    } else {
        v_weights_57_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_58_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_58_ce0.read();
    } else {
        v_weights_58_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_59_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_59_ce0.read();
    } else {
        v_weights_59_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_5_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_5_ce0.read();
    } else {
        v_weights_5_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_60_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_60_ce0.read();
    } else {
        v_weights_60_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_61_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_61_ce0.read();
    } else {
        v_weights_61_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_62_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_62_ce0.read();
    } else {
        v_weights_62_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_63_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_63_ce0.read();
    } else {
        v_weights_63_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_6_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_6_ce0.read();
    } else {
        v_weights_6_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_7_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_7_ce0.read();
    } else {
        v_weights_7_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_8_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_8_ce0.read();
    } else {
        v_weights_8_ce0 = ap_const_logic_0;
    }
}

void attention::thread_v_weights_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        v_weights_9_ce0 = grp_linear_forward_no_mu_fu_3335_packed_weights_9_ce0.read();
    } else {
        v_weights_9_ce0 = ap_const_logic_0;
    }
}

void attention::thread_zext_ln1265_2_fu_4578_p1() {
    zext_ln1265_2_fu_4578_p1 = esl_zext<8,3>(d_0_0_reg_3302.read());
}

void attention::thread_zext_ln1265_fu_4556_p1() {
    zext_ln1265_fu_4556_p1 = esl_zext<8,6>(tmp_65_fu_4548_p3.read());
}

void attention::thread_zext_ln203_fu_4730_p1() {
    zext_ln203_fu_4730_p1 = esl_zext<12,10>(tmp_67_fu_4722_p3.read());
}

void attention::thread_zext_ln209_fu_4740_p1() {
    zext_ln209_fu_4740_p1 = esl_zext<12,7>(d107_0_0_reg_3324.read());
}

void attention::thread_zext_ln210_1_fu_4774_p1() {
    zext_ln210_1_fu_4774_p1 = esl_zext<64,32>(sext_ln210_fu_4771_p1.read());
}

void attention::thread_zext_ln210_2_fu_4704_p1() {
    zext_ln210_2_fu_4704_p1 = esl_zext<12,9>(shl_ln210_1_fu_4696_p3.read());
}

void attention::thread_zext_ln210_fu_4692_p1() {
    zext_ln210_fu_4692_p1 = esl_zext<12,11>(shl_ln_fu_4684_p3.read());
}

}

