set moduleName attention
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {attention}
set C_modelType { void 0 }
set C_modelArgList {
	{ hidden_states_0_V int 40 regular {array 384 { 2 3 } 1 1 }  }
	{ final_output_0_V int 40 regular {array 384 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "hidden_states_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READWRITE"} , 
 	{ "Name" : "final_output_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ hidden_states_0_V_address0 sc_out sc_lv 9 signal 0 } 
	{ hidden_states_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ hidden_states_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ hidden_states_0_V_d0 sc_out sc_lv 40 signal 0 } 
	{ hidden_states_0_V_q0 sc_in sc_lv 40 signal 0 } 
	{ final_output_0_V_address0 sc_out sc_lv 9 signal 1 } 
	{ final_output_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ final_output_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ final_output_0_V_d0 sc_out sc_lv 40 signal 1 } 
	{ final_output_0_V_q0 sc_in sc_lv 40 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "hidden_states_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "address0" }} , 
 	{ "name": "hidden_states_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "ce0" }} , 
 	{ "name": "hidden_states_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "we0" }} , 
 	{ "name": "hidden_states_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "d0" }} , 
 	{ "name": "hidden_states_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "q0" }} , 
 	{ "name": "final_output_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "address0" }} , 
 	{ "name": "final_output_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "ce0" }} , 
 	{ "name": "final_output_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "we0" }} , 
 	{ "name": "final_output_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "d0" }} , 
 	{ "name": "final_output_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "30", "38", "40", "42", "47", "48", "49", "50", "51", "52", "53", "54", "55"],
		"CDFG" : "attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1059566", "EstimateLatencyMax" : "2386670",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_384_s_fu_349"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_384_s_fu_349"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_1_8_6_s_fu_358"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_369"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_369"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_369"},
			{"State" : "ap_ST_fsm_state37", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_369"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_387"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_387"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_apply_rotary_pos_emb_fu_394"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_fu_406"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_1_fu_413"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_420"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_420"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transpose_last_two_d_fu_429"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_435"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_435"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_435"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_441"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_441"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_441"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_446"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_451"}],
		"Port" : [
			{"Name" : "hidden_states_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_quantize_activation_fu_387", "Port" : "input_0_V"},
					{"ID" : "25", "SubInstance" : "grp_rms_norm_384_s_fu_349", "Port" : "input_0_V"}]},
			{"Name" : "final_output_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "52", "SubInstance" : "grp_init_2d_mem_fu_441", "Port" : "mem_0_V"},
					{"ID" : "38", "SubInstance" : "grp_linear_forward_no_mu_fu_369", "Port" : "output_0_V"}]},
			{"Name" : "ln_weight_in_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_rms_norm_384_s_fu_349", "Port" : "weight_V"}]},
			{"Name" : "q_weights", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_linear_forward_no_mu_fu_369", "Port" : "packed_weights"}]},
			{"Name" : "k_weights", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_linear_forward_no_mu_fu_369", "Port" : "packed_weights"}]},
			{"Name" : "v_weights", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_linear_forward_no_mu_fu_369", "Port" : "packed_weights"}]},
			{"Name" : "cos_tab_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_apply_rotary_pos_emb_fu_394", "Port" : "cos_tab_V_5"}]},
			{"Name" : "sin_tab_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_apply_rotary_pos_emb_fu_394", "Port" : "sin_tab_V_5"}]},
			{"Name" : "k_cache_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_cache_update_fu_420", "Port" : "cache_in_V"}]},
			{"Name" : "v_cache_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_cache_update_fu_420", "Port" : "cache_in_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_softmax_1_8_6_s_fu_358", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_softmax_1_8_6_s_fu_358", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_softmax_1_8_6_s_fu_358", "Port" : "exp_x_msb_1_table_V"}]},
			{"Name" : "ln_weight_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_rms_norm_384_s_fu_349", "Port" : "weight_V"}]},
			{"Name" : "o_weights", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_linear_forward_no_mu_fu_369", "Port" : "packed_weights"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ln_weight_in_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_cache_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_cache_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ln_weight_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_0_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_0_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_0_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_0_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_embed_0_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_cache_upd_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_cache_upd_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_weights_0_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_0_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_2D_0_V_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_349", "Parent" : "0", "Child" : ["26", "27", "28", "29"],
		"CDFG" : "rms_norm_384_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5052", "EstimateLatencyMax" : "5052",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_349.grp_sqrt_fixed_42_26_s_fu_127", "Parent" : "25",
		"CDFG" : "sqrt_fixed_42_26_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "17", "EstimateLatencyMin" : "17", "EstimateLatencyMax" : "17",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_349.dut_mul_40s_42ns_bkb_U2", "Parent" : "25"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_349.dut_udiv_33s_29nscud_U3", "Parent" : "25"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_349.dut_mul_72s_40s_7dEe_U4", "Parent" : "25"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_358", "Parent" : "0", "Child" : ["31", "37"],
		"CDFG" : "softmax_1_8_6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3529", "EstimateLatencyMax" : "3529",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_exp_40_24_s_fu_163", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_exp_40_24_s_fu_163", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_exp_40_24_s_fu_163", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_358.grp_exp_40_24_s_fu_163", "Parent" : "30", "Child" : ["32", "33", "34", "35", "36"],
		"CDFG" : "exp_40_24_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "7", "EstimateLatencyMin" : "7", "EstimateLatencyMax" : "7",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_358.grp_exp_40_24_s_fu_163.f_x_msb_3_table_V_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_358.grp_exp_40_24_s_fu_163.f_x_msb_2_table_V_U", "Parent" : "31"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_358.grp_exp_40_24_s_fu_163.exp_x_msb_1_table_V_U", "Parent" : "31"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_358.grp_exp_40_24_s_fu_163.dut_mul_50ns_47nsncg_U39", "Parent" : "31"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_358.grp_exp_40_24_s_fu_163.dut_mul_50ns_50nsocq_U40", "Parent" : "31"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_358.dut_sdiv_56ns_40spcA_U47", "Parent" : "30"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_369", "Parent" : "0", "Child" : ["39"],
		"CDFG" : "linear_forward_no_mu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "251137", "EstimateLatencyMax" : "582913",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "scales_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "packed_weights", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_scale_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_369.dut_sdiv_72ns_61sfYi_U15", "Parent" : "38"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_387", "Parent" : "0", "Child" : ["41"],
		"CDFG" : "quantize_activation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3116", "EstimateLatencyMax" : "3116",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_states_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_387.dut_udiv_40ns_40neOg_U10", "Parent" : "40"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_394", "Parent" : "0", "Child" : ["43", "44", "45", "46"],
		"CDFG" : "apply_rotary_pos_emb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2146", "EstimateLatencyMax" : "2146",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_q_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_k_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_q_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_k_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cos_tab_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sin_tab_V_5", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_394.cos_tab_V_5_U", "Parent" : "42"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_394.sin_tab_V_5_U", "Parent" : "42"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_394.rotated_q_0_V_U", "Parent" : "42"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_394.rotated_k_0_V_U", "Parent" : "42"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_406", "Parent" : "0",
		"CDFG" : "GEMM_3D_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "12305", "EstimateLatencyMax" : "12305",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_1_fu_413", "Parent" : "0",
		"CDFG" : "GEMM_3D_float_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9329", "EstimateLatencyMax" : "9329",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_fu_420", "Parent" : "0",
		"CDFG" : "cache_update",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4721", "EstimateLatencyMax" : "4721",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "cache_in_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cache_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "update_0_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transpose_last_two_d_fu_429", "Parent" : "0",
		"CDFG" : "transpose_last_two_d",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4721", "EstimateLatencyMax" : "4721",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_435", "Parent" : "0",
		"CDFG" : "reshape_2D_to_3D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "785", "EstimateLatencyMax" : "785",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_441", "Parent" : "0",
		"CDFG" : "init_2d_mem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "385", "EstimateLatencyMax" : "385",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mem_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_446", "Parent" : "0",
		"CDFG" : "init_2d_mem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "385", "EstimateLatencyMax" : "385",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mem_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_451", "Parent" : "0",
		"CDFG" : "init_2d_mem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "385", "EstimateLatencyMax" : "385",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mem_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mul_58ns_56s_IfE_U53", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	attention {
		hidden_states_0_V {Type IO LastRead 61 FirstWrite -1}
		final_output_0_V {Type IO LastRead 4 FirstWrite 1}
		ln_weight_in_V {Type I LastRead -1 FirstWrite -1}
		q_weights {Type I LastRead -1 FirstWrite -1}
		k_weights {Type I LastRead -1 FirstWrite -1}
		v_weights {Type I LastRead -1 FirstWrite -1}
		cos_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		sin_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		k_cache_V {Type I LastRead -1 FirstWrite -1}
		v_cache_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}
		ln_weight_V {Type I LastRead -1 FirstWrite -1}
		o_weights {Type I LastRead -1 FirstWrite -1}}
	rms_norm_384_s {
		input_0_V {Type IO LastRead 61 FirstWrite 68}
		weight_V {Type I LastRead 60 FirstWrite -1}}
	sqrt_fixed_42_26_s {
		x_V {Type I LastRead 0 FirstWrite -1}}
	softmax_1_8_6_s {
		input_0_V {Type IO LastRead 5 FirstWrite 13}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	exp_40_24_s {
		x_V {Type I LastRead 0 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	linear_forward_no_mu {
		input_0_V {Type I LastRead 4 FirstWrite -1}
		output_0_V {Type IO LastRead 4 FirstWrite 6}
		scales_0_V_read {Type I LastRead 0 FirstWrite -1}
		packed_weights {Type I LastRead 2 FirstWrite -1}
		w_scale_V {Type I LastRead 0 FirstWrite -1}}
	quantize_activation {
		input_0_V {Type I LastRead 47 FirstWrite -1}
		output_states_0_V {Type O LastRead -1 FirstWrite 51}}
	apply_rotary_pos_emb {
		input_q_0_V {Type I LastRead 4 FirstWrite -1}
		input_k_0_V {Type I LastRead 4 FirstWrite -1}
		output_q_0_V {Type O LastRead -1 FirstWrite 6}
		output_k_0_V {Type O LastRead -1 FirstWrite 6}
		cos_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		sin_tab_V_5 {Type I LastRead -1 FirstWrite -1}}
	GEMM_3D_float {
		input_1_0_V {Type I LastRead 4 FirstWrite -1}
		input_2_V {Type I LastRead 4 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 3}}
	GEMM_3D_float_1 {
		input_1_0_V {Type I LastRead 3 FirstWrite -1}
		input_2_V {Type I LastRead 3 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 3}}
	cache_update {
		cache_in_V {Type I LastRead 3 FirstWrite -1}
		cache_out_V {Type O LastRead -1 FirstWrite 4}
		update_0_V {Type I LastRead 3 FirstWrite -1}}
	transpose_last_two_d {
		input_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}}
	reshape_2D_to_3D {
		input_0_V {Type I LastRead 2 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 3}}
	init_2d_mem {
		mem_0_V {Type O LastRead -1 FirstWrite 1}}
	init_2d_mem {
		mem_0_V {Type O LastRead -1 FirstWrite 1}}
	init_2d_mem {
		mem_0_V {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1059566", "Max" : "2386670"}
	, {"Name" : "Interval", "Min" : "1059566", "Max" : "2386670"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	hidden_states_0_V { ap_memory {  { hidden_states_0_V_address0 mem_address 1 9 }  { hidden_states_0_V_ce0 mem_ce 1 1 }  { hidden_states_0_V_we0 mem_we 1 1 }  { hidden_states_0_V_d0 mem_din 1 40 }  { hidden_states_0_V_q0 mem_dout 0 40 } } }
	final_output_0_V { ap_memory {  { final_output_0_V_address0 mem_address 1 9 }  { final_output_0_V_ce0 mem_ce 1 1 }  { final_output_0_V_we0 mem_we 1 1 }  { final_output_0_V_d0 mem_din 1 40 }  { final_output_0_V_q0 mem_dout 0 40 } } }
}
