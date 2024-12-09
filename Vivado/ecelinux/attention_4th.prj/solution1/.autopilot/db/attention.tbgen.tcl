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
	{ hidden_states_0_V int 38 regular {array 384 { 2 1 } 1 1 }  }
	{ final_output_0_V int 38 regular {array 384 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "hidden_states_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READWRITE"} , 
 	{ "Name" : "final_output_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 19
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
	{ hidden_states_0_V_d0 sc_out sc_lv 38 signal 0 } 
	{ hidden_states_0_V_q0 sc_in sc_lv 38 signal 0 } 
	{ hidden_states_0_V_address1 sc_out sc_lv 9 signal 0 } 
	{ hidden_states_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ hidden_states_0_V_q1 sc_in sc_lv 38 signal 0 } 
	{ final_output_0_V_address0 sc_out sc_lv 9 signal 1 } 
	{ final_output_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ final_output_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ final_output_0_V_d0 sc_out sc_lv 38 signal 1 } 
	{ final_output_0_V_q0 sc_in sc_lv 38 signal 1 } 
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
 	{ "name": "hidden_states_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "d0" }} , 
 	{ "name": "hidden_states_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "q0" }} , 
 	{ "name": "hidden_states_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "address1" }} , 
 	{ "name": "hidden_states_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "ce1" }} , 
 	{ "name": "hidden_states_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "hidden_states_0_V", "role": "q1" }} , 
 	{ "name": "final_output_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "address0" }} , 
 	{ "name": "final_output_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "ce0" }} , 
 	{ "name": "final_output_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "we0" }} , 
 	{ "name": "final_output_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "d0" }} , 
 	{ "name": "final_output_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "final_output_0_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "243", "247", "248", "261", "263", "264", "269", "270", "271", "272", "273", "274", "275"],
		"CDFG" : "attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "73466", "EstimateLatencyMax" : "73466",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_1037"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_1037"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_1037"},
			{"State" : "ap_ST_fsm_state39", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_1037"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_384_s_fu_1193"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_384_s_fu_1193"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_1_fu_1202"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_1_8_6_s_fu_1239"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_1256"},
			{"State" : "ap_ST_fsm_state37", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_1256"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_fu_1326"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_apply_rotary_pos_emb_fu_1333"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_1360"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_1360"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transpose_last_two_d_fu_1369"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1390"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1390"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1390"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_1396"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_1396"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_1402"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_init_2d_mem_fu_1408"}],
		"Port" : [
			{"Name" : "hidden_states_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "261", "SubInstance" : "grp_quantize_activation_fu_1256", "Port" : "input_0_V"},
					{"ID" : "243", "SubInstance" : "grp_rms_norm_384_s_fu_1193", "Port" : "input_0_V"}]},
			{"Name" : "final_output_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_init_2d_mem_fu_1396", "Port" : "mem_0_V"},
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "output_0_V"}]},
			{"Name" : "ln_weight_in_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "243", "SubInstance" : "grp_rms_norm_384_s_fu_1193", "Port" : "weight_V"}]},
			{"Name" : "q_weights_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_0"}]},
			{"Name" : "q_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_1"}]},
			{"Name" : "q_weights_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_2"}]},
			{"Name" : "q_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_3"}]},
			{"Name" : "q_weights_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_4"}]},
			{"Name" : "q_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_5"}]},
			{"Name" : "q_weights_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_6"}]},
			{"Name" : "q_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_7"}]},
			{"Name" : "q_weights_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_8"}]},
			{"Name" : "q_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_9"}]},
			{"Name" : "q_weights_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_10"}]},
			{"Name" : "q_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_11"}]},
			{"Name" : "q_weights_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_12"}]},
			{"Name" : "q_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_13"}]},
			{"Name" : "q_weights_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_14"}]},
			{"Name" : "q_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_15"}]},
			{"Name" : "k_weights_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_0"}]},
			{"Name" : "k_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_1"}]},
			{"Name" : "k_weights_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_2"}]},
			{"Name" : "k_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_3"}]},
			{"Name" : "k_weights_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_4"}]},
			{"Name" : "k_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_5"}]},
			{"Name" : "k_weights_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_6"}]},
			{"Name" : "k_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_7"}]},
			{"Name" : "k_weights_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_8"}]},
			{"Name" : "k_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_9"}]},
			{"Name" : "k_weights_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_10"}]},
			{"Name" : "k_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_11"}]},
			{"Name" : "k_weights_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_12"}]},
			{"Name" : "k_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_13"}]},
			{"Name" : "k_weights_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_14"}]},
			{"Name" : "k_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_15"}]},
			{"Name" : "v_weights_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_0"}]},
			{"Name" : "v_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_1"}]},
			{"Name" : "v_weights_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_2"}]},
			{"Name" : "v_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_3"}]},
			{"Name" : "v_weights_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_4"}]},
			{"Name" : "v_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_5"}]},
			{"Name" : "v_weights_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_6"}]},
			{"Name" : "v_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_7"}]},
			{"Name" : "v_weights_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_8"}]},
			{"Name" : "v_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_9"}]},
			{"Name" : "v_weights_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_10"}]},
			{"Name" : "v_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_11"}]},
			{"Name" : "v_weights_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_12"}]},
			{"Name" : "v_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_13"}]},
			{"Name" : "v_weights_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_14"}]},
			{"Name" : "v_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_15"}]},
			{"Name" : "cos_tab_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "264", "SubInstance" : "grp_apply_rotary_pos_emb_fu_1333", "Port" : "cos_tab_V_5"}]},
			{"Name" : "sin_tab_V_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "264", "SubInstance" : "grp_apply_rotary_pos_emb_fu_1333", "Port" : "sin_tab_V_5"}]},
			{"Name" : "k_cache_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "269", "SubInstance" : "grp_cache_update_fu_1360", "Port" : "cache_in_V"}]},
			{"Name" : "v_cache_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "269", "SubInstance" : "grp_cache_update_fu_1360", "Port" : "cache_in_V"}]},
			{"Name" : "f_x_msb_4_h_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "248", "SubInstance" : "grp_softmax_1_8_6_s_fu_1239", "Port" : "f_x_msb_4_h_table_V"}]},
			{"Name" : "f_x_msb_4_l_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "248", "SubInstance" : "grp_softmax_1_8_6_s_fu_1239", "Port" : "f_x_msb_4_l_table_V"}]},
			{"Name" : "f_x_lsb_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "248", "SubInstance" : "grp_softmax_1_8_6_s_fu_1239", "Port" : "f_x_lsb_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "248", "SubInstance" : "grp_softmax_1_8_6_s_fu_1239", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "248", "SubInstance" : "grp_softmax_1_8_6_s_fu_1239", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "248", "SubInstance" : "grp_softmax_1_8_6_s_fu_1239", "Port" : "exp_x_msb_1_table_V"}]},
			{"Name" : "ln_weight_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "243", "SubInstance" : "grp_rms_norm_384_s_fu_1193", "Port" : "weight_V"}]},
			{"Name" : "o_weights_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_0"}]},
			{"Name" : "o_weights_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_1"}]},
			{"Name" : "o_weights_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_2"}]},
			{"Name" : "o_weights_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_3"}]},
			{"Name" : "o_weights_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_4"}]},
			{"Name" : "o_weights_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_5"}]},
			{"Name" : "o_weights_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_6"}]},
			{"Name" : "o_weights_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_7"}]},
			{"Name" : "o_weights_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_8"}]},
			{"Name" : "o_weights_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_9"}]},
			{"Name" : "o_weights_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_10"}]},
			{"Name" : "o_weights_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_11"}]},
			{"Name" : "o_weights_12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_12"}]},
			{"Name" : "o_weights_13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_13"}]},
			{"Name" : "o_weights_14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_14"}]},
			{"Name" : "o_weights_15", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "241", "SubInstance" : "grp_linear_forward_no_mu_fu_1037", "Port" : "packed_weights_15"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ln_weight_in_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_4_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_5_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_6_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_7_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_8_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_9_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_10_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_11_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_12_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_13_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_14_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_weights_15_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_0_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_1_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_2_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_3_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_4_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_5_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_6_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_7_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_8_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_9_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_10_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_11_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_12_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_13_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_14_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_weights_15_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_0_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_1_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_2_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_3_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_4_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_5_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_6_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_7_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_8_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_9_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_10_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_11_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_12_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_13_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_14_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_weights_15_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_cache_V_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_cache_V_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ln_weight_V_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_0_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_1_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_2_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_3_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_4_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_5_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_6_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_7_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_8_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_9_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_10_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_11_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_12_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_13_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_14_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.o_weights_15_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_1_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_2_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_3_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_4_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_5_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_6_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_7_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_8_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_9_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_10_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_11_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_12_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_13_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_14_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_15_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_16_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_17_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_18_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_19_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_20_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_21_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_22_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_23_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_24_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_25_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_26_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_27_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_28_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_29_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_30_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_31_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_32_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_33_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_34_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_35_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_36_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_37_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_38_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_39_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_40_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_41_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_42_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_43_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_44_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_45_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_46_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_47_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_48_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_49_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_50_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_51_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_52_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_53_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_54_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_55_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_56_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_57_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_58_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_59_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_60_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_61_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_62_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_63_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_re_0_V_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_0_V_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_0_V_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_0_V_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_0_0_V_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_1_0_V_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_2_0_V_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_3_0_V_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_4_0_V_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_5_0_V_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_6_0_V_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_7_0_V_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_8_0_V_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_9_0_V_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_10_0_V_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_11_0_V_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_12_0_V_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_13_0_V_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_14_0_V_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_15_0_V_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_embed_0_V_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_cache_upd_V_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_cache_upd_V_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_0_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_1_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_2_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_3_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_4_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_5_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_6_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_7_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_8_U", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_9_U", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_10_U", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_11_U", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_12_U", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_13_U", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_14_U", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_15_U", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_weights_0_V_U", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_0_U", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_2D_0_V_U", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_U", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_1_U", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_2_U", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_3_U", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_4_U", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_5_U", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_6_U", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_7_U", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_8_U", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_9_U", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_10_U", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_11_U", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_12_U", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_13_U", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_14_U", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_15_U", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_16_U", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_17_U", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_18_U", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_19_U", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_20_U", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_21_U", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_22_U", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_23_U", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_24_U", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_25_U", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_26_U", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_27_U", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_28_U", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_29_U", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_30_U", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_31_U", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_32_U", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_33_U", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_34_U", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_35_U", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_36_U", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_37_U", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_38_U", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_39_U", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_40_U", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_41_U", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_42_U", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_43_U", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_44_U", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_45_U", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_46_U", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_47_U", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_48_U", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_49_U", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_50_U", "Parent" : "0"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_51_U", "Parent" : "0"},
	{"ID" : "229", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_52_U", "Parent" : "0"},
	{"ID" : "230", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_53_U", "Parent" : "0"},
	{"ID" : "231", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_54_U", "Parent" : "0"},
	{"ID" : "232", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_55_U", "Parent" : "0"},
	{"ID" : "233", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_56_U", "Parent" : "0"},
	{"ID" : "234", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_57_U", "Parent" : "0"},
	{"ID" : "235", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_58_U", "Parent" : "0"},
	{"ID" : "236", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_59_U", "Parent" : "0"},
	{"ID" : "237", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_60_U", "Parent" : "0"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_61_U", "Parent" : "0"},
	{"ID" : "239", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_62_U", "Parent" : "0"},
	{"ID" : "240", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_63_U", "Parent" : "0"},
	{"ID" : "241", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_1037", "Parent" : "0", "Child" : ["242"],
		"CDFG" : "linear_forward_no_mu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9301", "EstimateLatencyMax" : "9301",
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
			{"Name" : "input_4_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_4_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_4_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_4_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_6_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_6_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_6_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_6_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_7_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_7_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_7_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_7_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_8_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_8_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_8_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_8_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_9_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_9_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_9_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_9_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_10_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_10_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_10_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_10_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_11_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_11_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_11_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_11_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_12_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_12_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_12_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_12_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_13_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_13_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_13_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_13_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_14_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_14_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_14_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_14_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_15_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_15_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_15_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_15_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "scales_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "packed_weights_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "packed_weights_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_scale_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "242", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_1037.dut_sdiv_78ns_63seOg_U76", "Parent" : "241"},
	{"ID" : "243", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_1193", "Parent" : "0", "Child" : ["244", "245", "246"],
		"CDFG" : "rms_norm_384_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5063", "EstimateLatencyMax" : "5063",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_1193.grp_sqrt_fixed_40_20_s_fu_129", "Parent" : "243",
		"CDFG" : "sqrt_fixed_40_20_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "20", "EstimateLatencyMin" : "20", "EstimateLatencyMax" : "20",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "245", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_1193.dut_udiv_41s_30nsbkb_U2", "Parent" : "243"},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_384_s_fu_1193.dut_mul_76s_38s_7cud_U3", "Parent" : "243"},
	{"ID" : "247", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_1_fu_1202", "Parent" : "0",
		"CDFG" : "GEMM_3D_float_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1985", "EstimateLatencyMax" : "1985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_1_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_4_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_5_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_6_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_7_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_8_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_9_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_10_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_11_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_12_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_13_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_14_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_15_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "248", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239", "Parent" : "0", "Child" : ["249", "260"],
		"CDFG" : "softmax_1_8_6_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3865", "EstimateLatencyMax" : "3865",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "f_x_msb_4_h_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_exp_38_18_s_fu_169", "Port" : "f_x_msb_4_h_table_V"}]},
			{"Name" : "f_x_msb_4_l_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_exp_38_18_s_fu_169", "Port" : "f_x_msb_4_l_table_V"}]},
			{"Name" : "f_x_lsb_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_exp_38_18_s_fu_169", "Port" : "f_x_lsb_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_exp_38_18_s_fu_169", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_exp_38_18_s_fu_169", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_exp_38_18_s_fu_169", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169", "Parent" : "248", "Child" : ["250", "251", "252", "253", "254", "255", "256", "257", "258", "259"],
		"CDFG" : "exp_38_18_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "11", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "f_x_msb_4_h_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "f_x_msb_4_l_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "f_x_lsb_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "250", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.f_x_msb_4_h_table_V_U", "Parent" : "249"},
	{"ID" : "251", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.f_x_msb_4_l_table_V_U", "Parent" : "249"},
	{"ID" : "252", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.f_x_lsb_table_V_U", "Parent" : "249"},
	{"ID" : "253", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.f_x_msb_3_table_V_U", "Parent" : "249"},
	{"ID" : "254", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.f_x_msb_2_table_V_U", "Parent" : "249"},
	{"ID" : "255", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.exp_x_msb_1_table_V_U", "Parent" : "249"},
	{"ID" : "256", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.dut_mul_42ns_44nspcA_U238", "Parent" : "249"},
	{"ID" : "257", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.dut_mul_48ns_50nsqcK_U239", "Parent" : "249"},
	{"ID" : "258", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.dut_mul_50ns_50nsrcU_U240", "Parent" : "249"},
	{"ID" : "259", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.grp_exp_38_18_s_fu_169.dut_mac_muladd_3nsc4_U241", "Parent" : "249"},
	{"ID" : "260", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_1_8_6_s_fu_1239.dut_sdiv_58ns_38stde_U253", "Parent" : "248"},
	{"ID" : "261", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_1256", "Parent" : "0", "Child" : ["262"],
		"CDFG" : "quantize_activation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1791", "EstimateLatencyMax" : "1791",
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
			{"Name" : "output_states_3_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_4_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_4_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_4_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_4_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_5_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_5_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_5_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_5_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_6_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_6_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_6_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_6_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_7_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_7_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_7_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_7_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_8_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_8_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_8_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_8_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_9_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_9_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_9_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_9_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_10_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_10_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_10_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_10_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_11_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_11_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_11_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_11_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_12_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_12_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_12_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_12_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_13_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_13_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_13_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_13_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_14_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_14_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_14_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_14_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_15_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_15_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_15_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_states_15_3_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "262", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_1256.dut_udiv_47s_37nsdEe_U8", "Parent" : "261"},
	{"ID" : "263", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_1326", "Parent" : "0",
		"CDFG" : "GEMM_3D_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2705", "EstimateLatencyMax" : "2705",
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
	{"ID" : "264", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_1333", "Parent" : "0", "Child" : ["265", "266", "267", "268"],
		"CDFG" : "apply_rotary_pos_emb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3298", "EstimateLatencyMax" : "3298",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_q_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_k_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_q_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_4_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_5_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_6_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_7_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_8_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_9_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_10_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_11_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_12_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_13_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_14_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_q_15_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_k_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cos_tab_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sin_tab_V_5", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "265", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_1333.cos_tab_V_5_U", "Parent" : "264"},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_1333.sin_tab_V_5_U", "Parent" : "264"},
	{"ID" : "267", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_1333.rotated_q_0_V_U", "Parent" : "264"},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_1333.rotated_k_0_V_U", "Parent" : "264"},
	{"ID" : "269", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_fu_1360", "Parent" : "0",
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
	{"ID" : "270", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transpose_last_two_d_fu_1369", "Parent" : "0",
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
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_7_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_8_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_9_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_10_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_11_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_12_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_13_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_14_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_15_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "271", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_1390", "Parent" : "0",
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
	{"ID" : "272", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_1396", "Parent" : "0",
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
	{"ID" : "273", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_1402", "Parent" : "0",
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
	{"ID" : "274", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_init_2d_mem_fu_1408", "Parent" : "0",
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
	{"ID" : "275", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mul_60ns_58s_ekP_U259", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	attention {
		hidden_states_0_V {Type IO LastRead 72 FirstWrite -1}
		final_output_0_V {Type IO LastRead 3 FirstWrite 1}
		ln_weight_in_V {Type I LastRead -1 FirstWrite -1}
		q_weights_0 {Type I LastRead -1 FirstWrite -1}
		q_weights_1 {Type I LastRead -1 FirstWrite -1}
		q_weights_2 {Type I LastRead -1 FirstWrite -1}
		q_weights_3 {Type I LastRead -1 FirstWrite -1}
		q_weights_4 {Type I LastRead -1 FirstWrite -1}
		q_weights_5 {Type I LastRead -1 FirstWrite -1}
		q_weights_6 {Type I LastRead -1 FirstWrite -1}
		q_weights_7 {Type I LastRead -1 FirstWrite -1}
		q_weights_8 {Type I LastRead -1 FirstWrite -1}
		q_weights_9 {Type I LastRead -1 FirstWrite -1}
		q_weights_10 {Type I LastRead -1 FirstWrite -1}
		q_weights_11 {Type I LastRead -1 FirstWrite -1}
		q_weights_12 {Type I LastRead -1 FirstWrite -1}
		q_weights_13 {Type I LastRead -1 FirstWrite -1}
		q_weights_14 {Type I LastRead -1 FirstWrite -1}
		q_weights_15 {Type I LastRead -1 FirstWrite -1}
		k_weights_0 {Type I LastRead -1 FirstWrite -1}
		k_weights_1 {Type I LastRead -1 FirstWrite -1}
		k_weights_2 {Type I LastRead -1 FirstWrite -1}
		k_weights_3 {Type I LastRead -1 FirstWrite -1}
		k_weights_4 {Type I LastRead -1 FirstWrite -1}
		k_weights_5 {Type I LastRead -1 FirstWrite -1}
		k_weights_6 {Type I LastRead -1 FirstWrite -1}
		k_weights_7 {Type I LastRead -1 FirstWrite -1}
		k_weights_8 {Type I LastRead -1 FirstWrite -1}
		k_weights_9 {Type I LastRead -1 FirstWrite -1}
		k_weights_10 {Type I LastRead -1 FirstWrite -1}
		k_weights_11 {Type I LastRead -1 FirstWrite -1}
		k_weights_12 {Type I LastRead -1 FirstWrite -1}
		k_weights_13 {Type I LastRead -1 FirstWrite -1}
		k_weights_14 {Type I LastRead -1 FirstWrite -1}
		k_weights_15 {Type I LastRead -1 FirstWrite -1}
		v_weights_0 {Type I LastRead -1 FirstWrite -1}
		v_weights_1 {Type I LastRead -1 FirstWrite -1}
		v_weights_2 {Type I LastRead -1 FirstWrite -1}
		v_weights_3 {Type I LastRead -1 FirstWrite -1}
		v_weights_4 {Type I LastRead -1 FirstWrite -1}
		v_weights_5 {Type I LastRead -1 FirstWrite -1}
		v_weights_6 {Type I LastRead -1 FirstWrite -1}
		v_weights_7 {Type I LastRead -1 FirstWrite -1}
		v_weights_8 {Type I LastRead -1 FirstWrite -1}
		v_weights_9 {Type I LastRead -1 FirstWrite -1}
		v_weights_10 {Type I LastRead -1 FirstWrite -1}
		v_weights_11 {Type I LastRead -1 FirstWrite -1}
		v_weights_12 {Type I LastRead -1 FirstWrite -1}
		v_weights_13 {Type I LastRead -1 FirstWrite -1}
		v_weights_14 {Type I LastRead -1 FirstWrite -1}
		v_weights_15 {Type I LastRead -1 FirstWrite -1}
		cos_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		sin_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		k_cache_V {Type I LastRead -1 FirstWrite -1}
		v_cache_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_4_h_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_4_l_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_lsb_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}
		ln_weight_V {Type I LastRead -1 FirstWrite -1}
		o_weights_0 {Type I LastRead -1 FirstWrite -1}
		o_weights_1 {Type I LastRead -1 FirstWrite -1}
		o_weights_2 {Type I LastRead -1 FirstWrite -1}
		o_weights_3 {Type I LastRead -1 FirstWrite -1}
		o_weights_4 {Type I LastRead -1 FirstWrite -1}
		o_weights_5 {Type I LastRead -1 FirstWrite -1}
		o_weights_6 {Type I LastRead -1 FirstWrite -1}
		o_weights_7 {Type I LastRead -1 FirstWrite -1}
		o_weights_8 {Type I LastRead -1 FirstWrite -1}
		o_weights_9 {Type I LastRead -1 FirstWrite -1}
		o_weights_10 {Type I LastRead -1 FirstWrite -1}
		o_weights_11 {Type I LastRead -1 FirstWrite -1}
		o_weights_12 {Type I LastRead -1 FirstWrite -1}
		o_weights_13 {Type I LastRead -1 FirstWrite -1}
		o_weights_14 {Type I LastRead -1 FirstWrite -1}
		o_weights_15 {Type I LastRead -1 FirstWrite -1}}
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
		input_4_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_4_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_4_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_4_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_5_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_5_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_5_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_5_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_6_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_6_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_6_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_6_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_7_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_7_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_7_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_7_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_8_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_8_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_8_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_8_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_9_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_9_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_9_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_9_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_10_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_10_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_10_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_10_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_11_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_11_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_11_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_11_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_12_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_12_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_12_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_12_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_13_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_13_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_13_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_13_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_14_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_14_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_14_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_14_3_0_V {Type I LastRead 1 FirstWrite -1}
		input_15_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_15_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_15_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_15_3_0_V {Type I LastRead 1 FirstWrite -1}
		output_0_V {Type IO LastRead 3 FirstWrite 6}
		scales_0_V_read {Type I LastRead 0 FirstWrite -1}
		packed_weights_0 {Type I LastRead 2 FirstWrite -1}
		packed_weights_1 {Type I LastRead 2 FirstWrite -1}
		packed_weights_2 {Type I LastRead 2 FirstWrite -1}
		packed_weights_3 {Type I LastRead 2 FirstWrite -1}
		packed_weights_4 {Type I LastRead 2 FirstWrite -1}
		packed_weights_5 {Type I LastRead 2 FirstWrite -1}
		packed_weights_6 {Type I LastRead 2 FirstWrite -1}
		packed_weights_7 {Type I LastRead 2 FirstWrite -1}
		packed_weights_8 {Type I LastRead 2 FirstWrite -1}
		packed_weights_9 {Type I LastRead 2 FirstWrite -1}
		packed_weights_10 {Type I LastRead 2 FirstWrite -1}
		packed_weights_11 {Type I LastRead 2 FirstWrite -1}
		packed_weights_12 {Type I LastRead 2 FirstWrite -1}
		packed_weights_13 {Type I LastRead 2 FirstWrite -1}
		packed_weights_14 {Type I LastRead 2 FirstWrite -1}
		packed_weights_15 {Type I LastRead 2 FirstWrite -1}
		w_scale_V {Type I LastRead 0 FirstWrite -1}}
	rms_norm_384_s {
		input_0_V {Type IO LastRead 72 FirstWrite 79}
		weight_V {Type I LastRead 71 FirstWrite -1}}
	sqrt_fixed_40_20_s {
		x_V {Type I LastRead 0 FirstWrite -1}}
	GEMM_3D_float_1 {
		input_1_0_0_V {Type I LastRead 4 FirstWrite -1}
		input_1_1_0_V {Type I LastRead 4 FirstWrite -1}
		input_1_2_0_V {Type I LastRead 5 FirstWrite -1}
		input_1_3_0_V {Type I LastRead 5 FirstWrite -1}
		input_1_4_0_V {Type I LastRead 6 FirstWrite -1}
		input_1_5_0_V {Type I LastRead 6 FirstWrite -1}
		input_1_6_0_V {Type I LastRead 7 FirstWrite -1}
		input_1_7_0_V {Type I LastRead 7 FirstWrite -1}
		input_1_8_0_V {Type I LastRead 8 FirstWrite -1}
		input_1_9_0_V {Type I LastRead 8 FirstWrite -1}
		input_1_10_0_V {Type I LastRead 9 FirstWrite -1}
		input_1_11_0_V {Type I LastRead 9 FirstWrite -1}
		input_1_12_0_V {Type I LastRead 10 FirstWrite -1}
		input_1_13_0_V {Type I LastRead 10 FirstWrite -1}
		input_1_14_0_V {Type I LastRead 10 FirstWrite -1}
		input_1_15_0_V {Type I LastRead 10 FirstWrite -1}
		input_2_0_V {Type I LastRead 4 FirstWrite -1}
		input_2_1_V {Type I LastRead 4 FirstWrite -1}
		input_2_2_V {Type I LastRead 5 FirstWrite -1}
		input_2_3_V {Type I LastRead 5 FirstWrite -1}
		input_2_4_V {Type I LastRead 6 FirstWrite -1}
		input_2_5_V {Type I LastRead 6 FirstWrite -1}
		input_2_6_V {Type I LastRead 7 FirstWrite -1}
		input_2_7_V {Type I LastRead 7 FirstWrite -1}
		input_2_8_V {Type I LastRead 8 FirstWrite -1}
		input_2_9_V {Type I LastRead 8 FirstWrite -1}
		input_2_10_V {Type I LastRead 9 FirstWrite -1}
		input_2_11_V {Type I LastRead 9 FirstWrite -1}
		input_2_12_V {Type I LastRead 10 FirstWrite -1}
		input_2_13_V {Type I LastRead 10 FirstWrite -1}
		input_2_14_V {Type I LastRead 10 FirstWrite -1}
		input_2_15_V {Type I LastRead 10 FirstWrite -1}
		output_0_V {Type IO LastRead 5 FirstWrite 2}}
	softmax_1_8_6_s {
		input_0_V {Type IO LastRead 5 FirstWrite 18}
		f_x_msb_4_h_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_4_l_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_lsb_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	exp_38_18_s {
		x_V {Type I LastRead 0 FirstWrite -1}
		f_x_msb_4_h_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_4_l_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_lsb_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	quantize_activation {
		input_0_V {Type I LastRead 57 FirstWrite -1}
		output_states_0_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_0_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_0_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_0_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_1_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_1_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_1_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_1_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_2_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_2_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_2_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_2_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_3_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_3_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_3_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_3_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_4_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_4_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_4_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_4_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_5_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_5_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_5_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_5_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_6_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_6_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_6_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_6_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_7_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_7_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_7_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_7_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_8_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_8_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_8_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_8_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_9_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_9_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_9_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_9_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_10_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_10_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_10_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_10_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_11_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_11_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_11_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_11_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_12_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_12_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_12_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_12_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_13_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_13_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_13_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_13_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_14_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_14_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_14_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_14_3_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_15_0_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_15_1_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_15_2_0_V {Type O LastRead -1 FirstWrite 60}
		output_states_15_3_0_V {Type O LastRead -1 FirstWrite 60}}
	GEMM_3D_float {
		input_1_0_V {Type I LastRead 5 FirstWrite -1}
		input_2_V {Type I LastRead 5 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 8}}
	apply_rotary_pos_emb {
		input_q_0_V {Type I LastRead 4 FirstWrite -1}
		input_k_0_V {Type I LastRead 6 FirstWrite -1}
		output_q_0_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_1_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_2_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_3_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_4_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_5_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_6_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_7_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_8_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_9_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_10_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_11_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_12_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_13_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_14_0_V {Type O LastRead -1 FirstWrite 6}
		output_q_15_0_V {Type O LastRead -1 FirstWrite 6}
		output_k_0_V {Type O LastRead -1 FirstWrite 9}
		cos_tab_V_5 {Type I LastRead -1 FirstWrite -1}
		sin_tab_V_5 {Type I LastRead -1 FirstWrite -1}}
	cache_update {
		cache_in_V {Type I LastRead 3 FirstWrite -1}
		cache_out_V {Type O LastRead -1 FirstWrite 4}
		update_0_V {Type I LastRead 3 FirstWrite -1}}
	transpose_last_two_d {
		input_V {Type I LastRead 3 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 4}
		output_1_V {Type O LastRead -1 FirstWrite 4}
		output_2_V {Type O LastRead -1 FirstWrite 4}
		output_3_V {Type O LastRead -1 FirstWrite 4}
		output_4_V {Type O LastRead -1 FirstWrite 4}
		output_5_V {Type O LastRead -1 FirstWrite 4}
		output_6_V {Type O LastRead -1 FirstWrite 4}
		output_7_V {Type O LastRead -1 FirstWrite 4}
		output_8_V {Type O LastRead -1 FirstWrite 4}
		output_9_V {Type O LastRead -1 FirstWrite 4}
		output_10_V {Type O LastRead -1 FirstWrite 4}
		output_11_V {Type O LastRead -1 FirstWrite 4}
		output_12_V {Type O LastRead -1 FirstWrite 4}
		output_13_V {Type O LastRead -1 FirstWrite 4}
		output_14_V {Type O LastRead -1 FirstWrite 4}
		output_15_V {Type O LastRead -1 FirstWrite 4}}
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
	{"Name" : "Latency", "Min" : "73466", "Max" : "73466"}
	, {"Name" : "Interval", "Min" : "73466", "Max" : "73466"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	hidden_states_0_V { ap_memory {  { hidden_states_0_V_address0 mem_address 1 9 }  { hidden_states_0_V_ce0 mem_ce 1 1 }  { hidden_states_0_V_we0 mem_we 1 1 }  { hidden_states_0_V_d0 mem_din 1 38 }  { hidden_states_0_V_q0 mem_dout 0 38 }  { hidden_states_0_V_address1 MemPortADDR2 1 9 }  { hidden_states_0_V_ce1 MemPortCE2 1 1 }  { hidden_states_0_V_q1 MemPortDOUT2 0 38 } } }
	final_output_0_V { ap_memory {  { final_output_0_V_address0 mem_address 1 9 }  { final_output_0_V_ce0 mem_ce 1 1 }  { final_output_0_V_we0 mem_we 1 1 }  { final_output_0_V_d0 mem_din 1 38 }  { final_output_0_V_q0 mem_dout 0 38 } } }
}
