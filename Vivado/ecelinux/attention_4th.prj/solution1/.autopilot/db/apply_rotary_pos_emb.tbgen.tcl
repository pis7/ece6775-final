set moduleName apply_rotary_pos_emb
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
set C_modelName {apply_rotary_pos_emb}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_q_0_V int 38 regular {array 384 { 1 1 } 1 1 }  }
	{ input_k_0_V int 38 regular {array 384 { 1 1 } 1 1 }  }
	{ output_q_0_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_1_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_2_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_3_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_4_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_5_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_6_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_7_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_8_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_9_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_10_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_11_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_12_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_13_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_14_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_q_15_0_V int 38 regular {array 24 { 0 3 } 0 1 }  }
	{ output_k_0_V int 38 regular {array 384 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_q_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_k_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "output_q_0_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_1_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_2_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_3_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_4_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_5_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_6_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_7_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_8_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_9_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_10_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_11_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_12_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_13_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_14_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_q_15_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_k_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 86
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_q_0_V_address0 sc_out sc_lv 9 signal 0 } 
	{ input_q_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_q_0_V_q0 sc_in sc_lv 38 signal 0 } 
	{ input_q_0_V_address1 sc_out sc_lv 9 signal 0 } 
	{ input_q_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ input_q_0_V_q1 sc_in sc_lv 38 signal 0 } 
	{ input_k_0_V_address0 sc_out sc_lv 9 signal 1 } 
	{ input_k_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_k_0_V_q0 sc_in sc_lv 38 signal 1 } 
	{ input_k_0_V_address1 sc_out sc_lv 9 signal 1 } 
	{ input_k_0_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ input_k_0_V_q1 sc_in sc_lv 38 signal 1 } 
	{ output_q_0_0_V_address0 sc_out sc_lv 5 signal 2 } 
	{ output_q_0_0_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ output_q_0_0_V_we0 sc_out sc_logic 1 signal 2 } 
	{ output_q_0_0_V_d0 sc_out sc_lv 38 signal 2 } 
	{ output_q_1_0_V_address0 sc_out sc_lv 5 signal 3 } 
	{ output_q_1_0_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ output_q_1_0_V_we0 sc_out sc_logic 1 signal 3 } 
	{ output_q_1_0_V_d0 sc_out sc_lv 38 signal 3 } 
	{ output_q_2_0_V_address0 sc_out sc_lv 5 signal 4 } 
	{ output_q_2_0_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ output_q_2_0_V_we0 sc_out sc_logic 1 signal 4 } 
	{ output_q_2_0_V_d0 sc_out sc_lv 38 signal 4 } 
	{ output_q_3_0_V_address0 sc_out sc_lv 5 signal 5 } 
	{ output_q_3_0_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ output_q_3_0_V_we0 sc_out sc_logic 1 signal 5 } 
	{ output_q_3_0_V_d0 sc_out sc_lv 38 signal 5 } 
	{ output_q_4_0_V_address0 sc_out sc_lv 5 signal 6 } 
	{ output_q_4_0_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ output_q_4_0_V_we0 sc_out sc_logic 1 signal 6 } 
	{ output_q_4_0_V_d0 sc_out sc_lv 38 signal 6 } 
	{ output_q_5_0_V_address0 sc_out sc_lv 5 signal 7 } 
	{ output_q_5_0_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ output_q_5_0_V_we0 sc_out sc_logic 1 signal 7 } 
	{ output_q_5_0_V_d0 sc_out sc_lv 38 signal 7 } 
	{ output_q_6_0_V_address0 sc_out sc_lv 5 signal 8 } 
	{ output_q_6_0_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ output_q_6_0_V_we0 sc_out sc_logic 1 signal 8 } 
	{ output_q_6_0_V_d0 sc_out sc_lv 38 signal 8 } 
	{ output_q_7_0_V_address0 sc_out sc_lv 5 signal 9 } 
	{ output_q_7_0_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ output_q_7_0_V_we0 sc_out sc_logic 1 signal 9 } 
	{ output_q_7_0_V_d0 sc_out sc_lv 38 signal 9 } 
	{ output_q_8_0_V_address0 sc_out sc_lv 5 signal 10 } 
	{ output_q_8_0_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ output_q_8_0_V_we0 sc_out sc_logic 1 signal 10 } 
	{ output_q_8_0_V_d0 sc_out sc_lv 38 signal 10 } 
	{ output_q_9_0_V_address0 sc_out sc_lv 5 signal 11 } 
	{ output_q_9_0_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ output_q_9_0_V_we0 sc_out sc_logic 1 signal 11 } 
	{ output_q_9_0_V_d0 sc_out sc_lv 38 signal 11 } 
	{ output_q_10_0_V_address0 sc_out sc_lv 5 signal 12 } 
	{ output_q_10_0_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ output_q_10_0_V_we0 sc_out sc_logic 1 signal 12 } 
	{ output_q_10_0_V_d0 sc_out sc_lv 38 signal 12 } 
	{ output_q_11_0_V_address0 sc_out sc_lv 5 signal 13 } 
	{ output_q_11_0_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ output_q_11_0_V_we0 sc_out sc_logic 1 signal 13 } 
	{ output_q_11_0_V_d0 sc_out sc_lv 38 signal 13 } 
	{ output_q_12_0_V_address0 sc_out sc_lv 5 signal 14 } 
	{ output_q_12_0_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ output_q_12_0_V_we0 sc_out sc_logic 1 signal 14 } 
	{ output_q_12_0_V_d0 sc_out sc_lv 38 signal 14 } 
	{ output_q_13_0_V_address0 sc_out sc_lv 5 signal 15 } 
	{ output_q_13_0_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ output_q_13_0_V_we0 sc_out sc_logic 1 signal 15 } 
	{ output_q_13_0_V_d0 sc_out sc_lv 38 signal 15 } 
	{ output_q_14_0_V_address0 sc_out sc_lv 5 signal 16 } 
	{ output_q_14_0_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ output_q_14_0_V_we0 sc_out sc_logic 1 signal 16 } 
	{ output_q_14_0_V_d0 sc_out sc_lv 38 signal 16 } 
	{ output_q_15_0_V_address0 sc_out sc_lv 5 signal 17 } 
	{ output_q_15_0_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ output_q_15_0_V_we0 sc_out sc_logic 1 signal 17 } 
	{ output_q_15_0_V_d0 sc_out sc_lv 38 signal 17 } 
	{ output_k_0_V_address0 sc_out sc_lv 9 signal 18 } 
	{ output_k_0_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ output_k_0_V_we0 sc_out sc_logic 1 signal 18 } 
	{ output_k_0_V_d0 sc_out sc_lv 38 signal 18 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_q_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "input_q_0_V", "role": "address0" }} , 
 	{ "name": "input_q_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_q_0_V", "role": "ce0" }} , 
 	{ "name": "input_q_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_q_0_V", "role": "q0" }} , 
 	{ "name": "input_q_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "input_q_0_V", "role": "address1" }} , 
 	{ "name": "input_q_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_q_0_V", "role": "ce1" }} , 
 	{ "name": "input_q_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_q_0_V", "role": "q1" }} , 
 	{ "name": "input_k_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "input_k_0_V", "role": "address0" }} , 
 	{ "name": "input_k_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_k_0_V", "role": "ce0" }} , 
 	{ "name": "input_k_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_k_0_V", "role": "q0" }} , 
 	{ "name": "input_k_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "input_k_0_V", "role": "address1" }} , 
 	{ "name": "input_k_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_k_0_V", "role": "ce1" }} , 
 	{ "name": "input_k_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_k_0_V", "role": "q1" }} , 
 	{ "name": "output_q_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_0_0_V", "role": "address0" }} , 
 	{ "name": "output_q_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_0_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_0_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_0_0_V", "role": "we0" }} , 
 	{ "name": "output_q_0_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_0_0_V", "role": "d0" }} , 
 	{ "name": "output_q_1_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_1_0_V", "role": "address0" }} , 
 	{ "name": "output_q_1_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_1_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_1_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_1_0_V", "role": "we0" }} , 
 	{ "name": "output_q_1_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_1_0_V", "role": "d0" }} , 
 	{ "name": "output_q_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_2_0_V", "role": "address0" }} , 
 	{ "name": "output_q_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_2_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_2_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_2_0_V", "role": "we0" }} , 
 	{ "name": "output_q_2_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_2_0_V", "role": "d0" }} , 
 	{ "name": "output_q_3_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_3_0_V", "role": "address0" }} , 
 	{ "name": "output_q_3_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_3_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_3_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_3_0_V", "role": "we0" }} , 
 	{ "name": "output_q_3_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_3_0_V", "role": "d0" }} , 
 	{ "name": "output_q_4_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_4_0_V", "role": "address0" }} , 
 	{ "name": "output_q_4_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_4_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_4_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_4_0_V", "role": "we0" }} , 
 	{ "name": "output_q_4_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_4_0_V", "role": "d0" }} , 
 	{ "name": "output_q_5_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_5_0_V", "role": "address0" }} , 
 	{ "name": "output_q_5_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_5_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_5_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_5_0_V", "role": "we0" }} , 
 	{ "name": "output_q_5_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_5_0_V", "role": "d0" }} , 
 	{ "name": "output_q_6_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_6_0_V", "role": "address0" }} , 
 	{ "name": "output_q_6_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_6_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_6_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_6_0_V", "role": "we0" }} , 
 	{ "name": "output_q_6_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_6_0_V", "role": "d0" }} , 
 	{ "name": "output_q_7_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_7_0_V", "role": "address0" }} , 
 	{ "name": "output_q_7_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_7_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_7_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_7_0_V", "role": "we0" }} , 
 	{ "name": "output_q_7_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_7_0_V", "role": "d0" }} , 
 	{ "name": "output_q_8_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_8_0_V", "role": "address0" }} , 
 	{ "name": "output_q_8_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_8_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_8_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_8_0_V", "role": "we0" }} , 
 	{ "name": "output_q_8_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_8_0_V", "role": "d0" }} , 
 	{ "name": "output_q_9_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_9_0_V", "role": "address0" }} , 
 	{ "name": "output_q_9_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_9_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_9_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_9_0_V", "role": "we0" }} , 
 	{ "name": "output_q_9_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_9_0_V", "role": "d0" }} , 
 	{ "name": "output_q_10_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_10_0_V", "role": "address0" }} , 
 	{ "name": "output_q_10_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_10_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_10_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_10_0_V", "role": "we0" }} , 
 	{ "name": "output_q_10_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_10_0_V", "role": "d0" }} , 
 	{ "name": "output_q_11_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_11_0_V", "role": "address0" }} , 
 	{ "name": "output_q_11_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_11_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_11_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_11_0_V", "role": "we0" }} , 
 	{ "name": "output_q_11_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_11_0_V", "role": "d0" }} , 
 	{ "name": "output_q_12_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_12_0_V", "role": "address0" }} , 
 	{ "name": "output_q_12_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_12_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_12_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_12_0_V", "role": "we0" }} , 
 	{ "name": "output_q_12_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_12_0_V", "role": "d0" }} , 
 	{ "name": "output_q_13_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_13_0_V", "role": "address0" }} , 
 	{ "name": "output_q_13_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_13_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_13_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_13_0_V", "role": "we0" }} , 
 	{ "name": "output_q_13_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_13_0_V", "role": "d0" }} , 
 	{ "name": "output_q_14_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_14_0_V", "role": "address0" }} , 
 	{ "name": "output_q_14_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_14_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_14_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_14_0_V", "role": "we0" }} , 
 	{ "name": "output_q_14_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_14_0_V", "role": "d0" }} , 
 	{ "name": "output_q_15_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_q_15_0_V", "role": "address0" }} , 
 	{ "name": "output_q_15_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_15_0_V", "role": "ce0" }} , 
 	{ "name": "output_q_15_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_q_15_0_V", "role": "we0" }} , 
 	{ "name": "output_q_15_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_q_15_0_V", "role": "d0" }} , 
 	{ "name": "output_k_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "output_k_0_V", "role": "address0" }} , 
 	{ "name": "output_k_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_k_0_V", "role": "ce0" }} , 
 	{ "name": "output_k_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_k_0_V", "role": "we0" }} , 
 	{ "name": "output_k_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_k_0_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cos_tab_V_5_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sin_tab_V_5_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotated_q_0_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotated_k_0_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		sin_tab_V_5 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3298", "Max" : "3298"}
	, {"Name" : "Interval", "Min" : "3298", "Max" : "3298"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_q_0_V { ap_memory {  { input_q_0_V_address0 mem_address 1 9 }  { input_q_0_V_ce0 mem_ce 1 1 }  { input_q_0_V_q0 mem_dout 0 38 }  { input_q_0_V_address1 MemPortADDR2 1 9 }  { input_q_0_V_ce1 MemPortCE2 1 1 }  { input_q_0_V_q1 MemPortDOUT2 0 38 } } }
	input_k_0_V { ap_memory {  { input_k_0_V_address0 mem_address 1 9 }  { input_k_0_V_ce0 mem_ce 1 1 }  { input_k_0_V_q0 mem_dout 0 38 }  { input_k_0_V_address1 MemPortADDR2 1 9 }  { input_k_0_V_ce1 MemPortCE2 1 1 }  { input_k_0_V_q1 MemPortDOUT2 0 38 } } }
	output_q_0_0_V { ap_memory {  { output_q_0_0_V_address0 mem_address 1 5 }  { output_q_0_0_V_ce0 mem_ce 1 1 }  { output_q_0_0_V_we0 mem_we 1 1 }  { output_q_0_0_V_d0 mem_din 1 38 } } }
	output_q_1_0_V { ap_memory {  { output_q_1_0_V_address0 mem_address 1 5 }  { output_q_1_0_V_ce0 mem_ce 1 1 }  { output_q_1_0_V_we0 mem_we 1 1 }  { output_q_1_0_V_d0 mem_din 1 38 } } }
	output_q_2_0_V { ap_memory {  { output_q_2_0_V_address0 mem_address 1 5 }  { output_q_2_0_V_ce0 mem_ce 1 1 }  { output_q_2_0_V_we0 mem_we 1 1 }  { output_q_2_0_V_d0 mem_din 1 38 } } }
	output_q_3_0_V { ap_memory {  { output_q_3_0_V_address0 mem_address 1 5 }  { output_q_3_0_V_ce0 mem_ce 1 1 }  { output_q_3_0_V_we0 mem_we 1 1 }  { output_q_3_0_V_d0 mem_din 1 38 } } }
	output_q_4_0_V { ap_memory {  { output_q_4_0_V_address0 mem_address 1 5 }  { output_q_4_0_V_ce0 mem_ce 1 1 }  { output_q_4_0_V_we0 mem_we 1 1 }  { output_q_4_0_V_d0 mem_din 1 38 } } }
	output_q_5_0_V { ap_memory {  { output_q_5_0_V_address0 mem_address 1 5 }  { output_q_5_0_V_ce0 mem_ce 1 1 }  { output_q_5_0_V_we0 mem_we 1 1 }  { output_q_5_0_V_d0 mem_din 1 38 } } }
	output_q_6_0_V { ap_memory {  { output_q_6_0_V_address0 mem_address 1 5 }  { output_q_6_0_V_ce0 mem_ce 1 1 }  { output_q_6_0_V_we0 mem_we 1 1 }  { output_q_6_0_V_d0 mem_din 1 38 } } }
	output_q_7_0_V { ap_memory {  { output_q_7_0_V_address0 mem_address 1 5 }  { output_q_7_0_V_ce0 mem_ce 1 1 }  { output_q_7_0_V_we0 mem_we 1 1 }  { output_q_7_0_V_d0 mem_din 1 38 } } }
	output_q_8_0_V { ap_memory {  { output_q_8_0_V_address0 mem_address 1 5 }  { output_q_8_0_V_ce0 mem_ce 1 1 }  { output_q_8_0_V_we0 mem_we 1 1 }  { output_q_8_0_V_d0 mem_din 1 38 } } }
	output_q_9_0_V { ap_memory {  { output_q_9_0_V_address0 mem_address 1 5 }  { output_q_9_0_V_ce0 mem_ce 1 1 }  { output_q_9_0_V_we0 mem_we 1 1 }  { output_q_9_0_V_d0 mem_din 1 38 } } }
	output_q_10_0_V { ap_memory {  { output_q_10_0_V_address0 mem_address 1 5 }  { output_q_10_0_V_ce0 mem_ce 1 1 }  { output_q_10_0_V_we0 mem_we 1 1 }  { output_q_10_0_V_d0 mem_din 1 38 } } }
	output_q_11_0_V { ap_memory {  { output_q_11_0_V_address0 mem_address 1 5 }  { output_q_11_0_V_ce0 mem_ce 1 1 }  { output_q_11_0_V_we0 mem_we 1 1 }  { output_q_11_0_V_d0 mem_din 1 38 } } }
	output_q_12_0_V { ap_memory {  { output_q_12_0_V_address0 mem_address 1 5 }  { output_q_12_0_V_ce0 mem_ce 1 1 }  { output_q_12_0_V_we0 mem_we 1 1 }  { output_q_12_0_V_d0 mem_din 1 38 } } }
	output_q_13_0_V { ap_memory {  { output_q_13_0_V_address0 mem_address 1 5 }  { output_q_13_0_V_ce0 mem_ce 1 1 }  { output_q_13_0_V_we0 mem_we 1 1 }  { output_q_13_0_V_d0 mem_din 1 38 } } }
	output_q_14_0_V { ap_memory {  { output_q_14_0_V_address0 mem_address 1 5 }  { output_q_14_0_V_ce0 mem_ce 1 1 }  { output_q_14_0_V_we0 mem_we 1 1 }  { output_q_14_0_V_d0 mem_din 1 38 } } }
	output_q_15_0_V { ap_memory {  { output_q_15_0_V_address0 mem_address 1 5 }  { output_q_15_0_V_ce0 mem_ce 1 1 }  { output_q_15_0_V_we0 mem_we 1 1 }  { output_q_15_0_V_d0 mem_din 1 38 } } }
	output_k_0_V { ap_memory {  { output_k_0_V_address0 mem_address 1 9 }  { output_k_0_V_ce0 mem_ce 1 1 }  { output_k_0_V_we0 mem_we 1 1 }  { output_k_0_V_d0 mem_din 1 38 } } }
}