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
	{ hidden_states_0_V int 40 regular {array 96 { 2 1 } 1 1 }  }
	{ final_output_0_V int 40 regular {array 96 { 2 0 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "hidden_states_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READWRITE"} , 
 	{ "Name" : "final_output_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 23
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ hidden_states_0_V_address0 sc_out sc_lv 7 signal 0 } 
	{ hidden_states_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ hidden_states_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ hidden_states_0_V_d0 sc_out sc_lv 40 signal 0 } 
	{ hidden_states_0_V_q0 sc_in sc_lv 40 signal 0 } 
	{ hidden_states_0_V_address1 sc_out sc_lv 7 signal 0 } 
	{ hidden_states_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ hidden_states_0_V_q1 sc_in sc_lv 40 signal 0 } 
	{ final_output_0_V_address0 sc_out sc_lv 7 signal 1 } 
	{ final_output_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ final_output_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ final_output_0_V_d0 sc_out sc_lv 40 signal 1 } 
	{ final_output_0_V_q0 sc_in sc_lv 40 signal 1 } 
	{ final_output_0_V_address1 sc_out sc_lv 7 signal 1 } 
	{ final_output_0_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ final_output_0_V_we1 sc_out sc_logic 1 signal 1 } 
	{ final_output_0_V_d1 sc_out sc_lv 40 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "hidden_states_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "address0" }} , 
 	{ "name": "hidden_states_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "ce0" }} , 
 	{ "name": "hidden_states_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "we0" }} , 
 	{ "name": "hidden_states_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "d0" }} , 
 	{ "name": "hidden_states_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "q0" }} , 
 	{ "name": "hidden_states_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "address1" }} , 
 	{ "name": "hidden_states_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "ce1" }} , 
 	{ "name": "hidden_states_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "q1" }} , 
 	{ "name": "final_output_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "address0" }} , 
 	{ "name": "final_output_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "ce0" }} , 
 	{ "name": "final_output_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "we0" }} , 
 	{ "name": "final_output_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "d0" }} , 
 	{ "name": "final_output_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "q0" }} , 
 	{ "name": "final_output_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "address1" }} , 
 	{ "name": "final_output_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "ce1" }} , 
 	{ "name": "final_output_0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "we1" }} , 
 	{ "name": "final_output_0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "67", "72", "80", "82", "87", "88", "89", "91", "93", "94", "95", "96", "97", "98", "99"],
		"CDFG" : "attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21970", "EstimateLatencyMax" : "21970",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_429"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_429"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_429"},
			{"State" : "ap_ST_fsm_state37", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_429"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_96_s_fu_477"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_96_s_fu_477"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_1_4_6_s_fu_486"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_497"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_497"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_apply_rotary_pos_emb_fu_519"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_1_fu_531"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_fu_538"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_1_fu_545"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_553"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transpose_last_two_d_fu_561"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_567"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_567"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_567"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_3d_mem_fu_573"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_3d_mem_fu_573"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_609"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_609"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_609"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_615"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_621"}],
		"Port" : [
			{"Name" : "hidden_states_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_rms_norm_96_s_fu_477", "Port" : "input_0_V"},
					{"ID" : "80", "SubInstance" : "grp_quantize_activation_fu_497", "Port" : "input_0_V"}]},
			{"Name" : "final_output_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_init_2d_mem_fu_609", "Port" : "mem_0_V"},
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "output_0_V"}]},
			{"Name" : "ln_weight_in_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_rms_norm_96_s_fu_477", "Port" : "weight_V"}]},
			{"Name" : "q_weights_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_0"}]},
			{"Name" : "q_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_1"}]},
			{"Name" : "q_weights_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_2"}]},
			{"Name" : "q_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_3"}]},
			{"Name" : "k_weights_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_0"}]},
			{"Name" : "k_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_1"}]},
			{"Name" : "k_weights_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_2"}]},
			{"Name" : "k_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_3"}]},
			{"Name" : "v_weights_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_0"}]},
			{"Name" : "v_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_1"}]},
			{"Name" : "v_weights_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_2"}]},
			{"Name" : "v_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_3"}]},
			{"Name" : "cos_tab_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "82", "SubInstance" : "grp_apply_rotary_pos_emb_fu_519", "Port" : "cos_tab_V_5"}]},
			{"Name" : "sin_tab_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "82", "SubInstance" : "grp_apply_rotary_pos_emb_fu_519", "Port" : "sin_tab_V_5"}]},
			{"Name" : "k_cache_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "grp_cache_update_fu_553", "Port" : "k_cache_V"}]},
			{"Name" : "v_cache_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_cache_update_1_fu_545", "Port" : "v_cache_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_softmax_1_4_6_s_fu_486", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_softmax_1_4_6_s_fu_486", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_softmax_1_4_6_s_fu_486", "Port" : "exp_x_msb_1_table_V"}]},
			{"Name" : "ln_weight_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_rms_norm_96_s_fu_477", "Port" : "weight_V"}]},
			{"Name" : "o_weights_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_0"}]},
			{"Name" : "o_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_1"}]},
			{"Name" : "o_weights_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_2"}]},
			{"Name" : "o_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_linear_forward_no_mu_fu_429", "Port" : "packed_weights_3"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ln_weight_in_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_0_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_1_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_2_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_3_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_0_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_1_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_2_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_3_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ln_weight_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_0_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_1_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_2_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_3_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_1_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_2_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_3_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_4_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_5_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_6_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_7_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_8_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_9_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_10_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_11_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_12_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_13_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_14_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_15_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_0_V_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_0_V_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_0_V_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_0_V_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_embed_0_V_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_cache_upd_V_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_cache_upd_V_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_V_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_weights_0_V_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_0_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_2D_0_V_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_1_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_2_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_3_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_4_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_5_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_6_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_7_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_8_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_9_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_10_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_11_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_12_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_13_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_14_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_15_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_429", "Parent" : "0", "Child" : ["66"],
		"CDFG" : "linear_forward_no_mu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1807", "EstimateLatencyMax" : "1807",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_0_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_0_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_0_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "scales_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "packed_weights_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_scale_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_429.dut_sdiv_72ns_61sfYi_U46", "Parent" : "65"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_96_s_fu_477", "Parent" : "0", "Child" : ["68", "69", "70", "71"],
		"CDFG" : "rms_norm_96_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1308", "EstimateLatencyMax" : "1308",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_96_s_fu_477.grp_sqrt_fixed_42_26_s_fu_127", "Parent" : "67",
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
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_96_s_fu_477.dut_mul_40s_42ns_bkb_U2", "Parent" : "67"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_96_s_fu_477.dut_udiv_33s_29nscud_U3", "Parent" : "67"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_96_s_fu_477.dut_mul_72s_40s_7dEe_U4", "Parent" : "67"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_4_6_s_fu_486", "Parent" : "0", "Child" : ["73", "79"],
		"CDFG" : "softmax_1_4_6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1765", "EstimateLatencyMax" : "1765",
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
					{"ID" : "73", "SubInstance" : "grp_exp_40_24_s_fu_159", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_exp_40_24_s_fu_159", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_exp_40_24_s_fu_159", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_4_6_s_fu_486.grp_exp_40_24_s_fu_159", "Parent" : "72", "Child" : ["74", "75", "76", "77", "78"],
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
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_4_6_s_fu_486.grp_exp_40_24_s_fu_159.f_x_msb_3_table_V_U", "Parent" : "73"},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_4_6_s_fu_486.grp_exp_40_24_s_fu_159.f_x_msb_2_table_V_U", "Parent" : "73"},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_4_6_s_fu_486.grp_exp_40_24_s_fu_159.exp_x_msb_1_table_V_U", "Parent" : "73"},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_4_6_s_fu_486.grp_exp_40_24_s_fu_159.dut_mul_50ns_47nspcA_U91", "Parent" : "73"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_4_6_s_fu_486.grp_exp_40_24_s_fu_159.dut_mul_50ns_50nsqcK_U92", "Parent" : "73"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_4_6_s_fu_486.dut_sdiv_56ns_40srcU_U99", "Parent" : "72"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_497", "Parent" : "0", "Child" : ["81"],
		"CDFG" : "quantize_activation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "488", "EstimateLatencyMax" : "488",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_states_0_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_0_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_0_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_0_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_1_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_1_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_1_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_1_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_2_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_2_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_2_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_2_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_3_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_3_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_3_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_3_3_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_497.dut_udiv_40ns_40neOg_U26", "Parent" : "80"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_519", "Parent" : "0", "Child" : ["83", "84", "85", "86"],
		"CDFG" : "apply_rotary_pos_emb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "546", "EstimateLatencyMax" : "546",
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
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_519.cos_tab_V_5_U", "Parent" : "82"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_519.sin_tab_V_5_U", "Parent" : "82"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_519.rotated_q_0_V_U", "Parent" : "82"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_519.rotated_k_0_V_U", "Parent" : "82"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_1_fu_531", "Parent" : "0",
		"CDFG" : "GEMM_3D_float_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2937", "EstimateLatencyMax" : "2937",
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
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_538", "Parent" : "0",
		"CDFG" : "GEMM_3D_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3081", "EstimateLatencyMax" : "3081",
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
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_1_fu_545", "Parent" : "0", "Child" : ["90"],
		"CDFG" : "cache_update_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1209", "EstimateLatencyMax" : "1209",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "cache_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "update_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v_cache_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_1_fu_545.v_cache_V_U", "Parent" : "89"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_fu_553", "Parent" : "0", "Child" : ["92"],
		"CDFG" : "cache_update",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1209", "EstimateLatencyMax" : "1209",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "cache_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "update_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "k_cache_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_fu_553.k_cache_V_U", "Parent" : "91"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transpose_last_two_d_fu_561", "Parent" : "0",
		"CDFG" : "transpose_last_two_d",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1209", "EstimateLatencyMax" : "1209",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_567", "Parent" : "0",
		"CDFG" : "reshape_2D_to_3D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "201", "EstimateLatencyMax" : "201",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_3d_mem_fu_573", "Parent" : "0",
		"CDFG" : "init_3d_mem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "145", "EstimateLatencyMax" : "145",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mem_0_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_0_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_0_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_0_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_1_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_1_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_1_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_1_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_2_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_2_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_2_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_2_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_3_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_3_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_3_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_3_3_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_609", "Parent" : "0",
		"CDFG" : "init_2d_mem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "97", "EstimateLatencyMax" : "97",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mem_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_615", "Parent" : "0",
		"CDFG" : "init_2d_mem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "97", "EstimateLatencyMax" : "97",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mem_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_621", "Parent" : "0",
		"CDFG" : "init_2d_mem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "97", "EstimateLatencyMax" : "97",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mem_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mul_58ns_56s_bun_U105", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	attention {
		hidden_states_0_V {Type IO LastRead 61 FirstWrite -1}
		final_output_0_V {Type IO LastRead 3 FirstWrite 1}
		ln_weight_in_V {Type I LastRead -1 FirstWrite -1}
		q_weights_0 {Type I LastRead -1 FirstWrite -1}
		q_weights_1 {Type I LastRead -1 FirstWrite -1}
		q_weights_2 {Type I LastRead -1 FirstWrite -1}
		q_weights_3 {Type I LastRead -1 FirstWrite -1}
		k_weights_0 {Type I LastRead -1 FirstWrite -1}
		k_weights_1 {Type I LastRead -1 FirstWrite -1}
		k_weights_2 {Type I LastRead -1 FirstWrite -1}
		k_weights_3 {Type I LastRead -1 FirstWrite -1}
		v_weights_0 {Type I LastRead -1 FirstWrite -1}
		v_weights_1 {Type I LastRead -1 FirstWrite -1}
		v_weights_2 {Type I LastRead -1 FirstWrite -1}
		v_weights_3 {Type I LastRead -1 FirstWrite -1}
		cos_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		sin_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		k_cache_V {Type I LastRead -1 FirstWrite -1}
		v_cache_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}
		ln_weight_V {Type I LastRead -1 FirstWrite -1}
		o_weights_0 {Type I LastRead -1 FirstWrite -1}
		o_weights_1 {Type I LastRead -1 FirstWrite -1}
		o_weights_2 {Type I LastRead -1 FirstWrite -1}
		o_weights_3 {Type I LastRead -1 FirstWrite -1}}
	linear_forward_no_mu {
		input_0_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_0_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_0_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_0_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_1_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_1_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_1_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_1_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_2_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_2_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_2_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_2_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_3_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_3_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_3_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_3_3_0_V {Type I LastRead 1 FirstWrite -1}
		output_0_V {Type IO LastRead 3 FirstWrite 5}
		scales_0_V_read {Type I LastRead 0 FirstWrite -1}
		packed_weights_0 {Type I LastRead 2 FirstWrite -1}
		packed_weights_1 {Type I LastRead 2 FirstWrite -1}
		packed_weights_2 {Type I LastRead 2 FirstWrite -1}
		packed_weights_3 {Type I LastRead 2 FirstWrite -1}
		w_scale_V {Type I LastRead 0 FirstWrite -1}}
	rms_norm_96_s {
		input_0_V {Type IO LastRead 61 FirstWrite 68}
		weight_V {Type I LastRead 60 FirstWrite -1}}
	sqrt_fixed_42_26_s {
		x_V {Type I LastRead 0 FirstWrite -1}}
	softmax_1_4_6_s {
		input_0_V {Type IO LastRead 5 FirstWrite 13}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	exp_40_24_s {
		x_V {Type I LastRead 0 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	quantize_activation {
		input_0_V {Type I LastRead 50 FirstWrite -1}
		output_states_0_0_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_0_1_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_0_2_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_0_3_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_1_0_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_1_1_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_1_2_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_1_3_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_2_0_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_2_1_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_2_2_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_2_3_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_3_0_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_3_1_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_3_2_0_V {Type O LastRead -1 FirstWrite 53}
		output_states_3_3_0_V {Type O LastRead -1 FirstWrite 53}}
	apply_rotary_pos_emb {
		input_q_0_V {Type I LastRead 4 FirstWrite -1}
		input_k_0_V {Type I LastRead 4 FirstWrite -1}
		output_q_0_V {Type O LastRead -1 FirstWrite 6}
		output_k_0_V {Type O LastRead -1 FirstWrite 6}
		cos_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		sin_tab_V_5 {Type I LastRead -1 FirstWrite -1}}
	GEMM_3D_float_1 {
		input_1_0_V {Type I LastRead 4 FirstWrite -1}
		input_2_V {Type I LastRead 4 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 3}}
	GEMM_3D_float {
		input_1_0_V {Type I LastRead 4 FirstWrite -1}
		input_2_V {Type I LastRead 4 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 3}}
	cache_update_1 {
		cache_out_V {Type O LastRead -1 FirstWrite 4}
		update_0_V {Type I LastRead 3 FirstWrite -1}
		v_cache_V {Type I LastRead -1 FirstWrite -1}}
	cache_update {
		cache_out_V {Type O LastRead -1 FirstWrite 4}
		update_0_V {Type I LastRead 3 FirstWrite -1}
		k_cache_V {Type I LastRead -1 FirstWrite -1}}
	transpose_last_two_d {
		input_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}}
	reshape_2D_to_3D {
		input_0_V {Type I LastRead 2 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 3}}
	init_3d_mem {
		mem_0_0_0_V {Type O LastRead -1 FirstWrite 2}
		mem_0_1_0_V {Type O LastRead -1 FirstWrite 2}
		mem_0_2_0_V {Type O LastRead -1 FirstWrite 2}
		mem_0_3_0_V {Type O LastRead -1 FirstWrite 2}
		mem_1_0_0_V {Type O LastRead -1 FirstWrite 2}
		mem_1_1_0_V {Type O LastRead -1 FirstWrite 2}
		mem_1_2_0_V {Type O LastRead -1 FirstWrite 2}
		mem_1_3_0_V {Type O LastRead -1 FirstWrite 2}
		mem_2_0_0_V {Type O LastRead -1 FirstWrite 2}
		mem_2_1_0_V {Type O LastRead -1 FirstWrite 2}
		mem_2_2_0_V {Type O LastRead -1 FirstWrite 2}
		mem_2_3_0_V {Type O LastRead -1 FirstWrite 2}
		mem_3_0_0_V {Type O LastRead -1 FirstWrite 2}
		mem_3_1_0_V {Type O LastRead -1 FirstWrite 2}
		mem_3_2_0_V {Type O LastRead -1 FirstWrite 2}
		mem_3_3_0_V {Type O LastRead -1 FirstWrite 2}}
	init_2d_mem {
		mem_0_V {Type O LastRead -1 FirstWrite 1}}
	init_2d_mem {
		mem_0_V {Type O LastRead -1 FirstWrite 1}}
	init_2d_mem {
		mem_0_V {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "21970", "Max" : "21970"}
	, {"Name" : "Interval", "Min" : "21970", "Max" : "21970"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	hidden_states_0_V { ap_memory {  { hidden_states_0_V_address0 mem_address 1 7 }  { hidden_states_0_V_ce0 mem_ce 1 1 }  { hidden_states_0_V_we0 mem_we 1 1 }  { hidden_states_0_V_d0 mem_din 1 40 }  { hidden_states_0_V_q0 mem_dout 0 40 }  { hidden_states_0_V_address1 MemPortADDR2 1 7 }  { hidden_states_0_V_ce1 MemPortCE2 1 1 }  { hidden_states_0_V_q1 MemPortDOUT2 0 40 } } }
	final_output_0_V { ap_memory {  { final_output_0_V_address0 mem_address 1 7 }  { final_output_0_V_ce0 mem_ce 1 1 }  { final_output_0_V_we0 mem_we 1 1 }  { final_output_0_V_d0 mem_din 1 40 }  { final_output_0_V_q0 mem_dout 0 40 }  { final_output_0_V_address1 MemPortADDR2 1 7 }  { final_output_0_V_ce1 MemPortCE2 1 1 }  { final_output_0_V_we1 MemPortWE2 1 1 }  { final_output_0_V_d1 MemPortDIN2 1 40 } } }
}
