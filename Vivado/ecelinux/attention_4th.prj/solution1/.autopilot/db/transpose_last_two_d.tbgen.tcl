set moduleName transpose_last_two_d
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
set C_modelName {transpose_last_two_d}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_V int 38 regular {array 2304 { 1 3 } 1 1 }  }
	{ output_0_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_1_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_2_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_3_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_4_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_5_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_6_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_7_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_8_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_9_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_10_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_11_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_12_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_13_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_14_V int 38 regular {array 144 { 0 3 } 0 1 }  }
	{ output_15_V int 38 regular {array 144 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "output_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_1_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_2_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_3_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_4_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_5_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_6_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_7_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_8_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_9_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_10_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_11_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_12_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_13_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_14_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_15_V", "interface" : "memory", "bitwidth" : 38, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 73
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_V_address0 sc_out sc_lv 12 signal 0 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_V_q0 sc_in sc_lv 38 signal 0 } 
	{ output_0_V_address0 sc_out sc_lv 8 signal 1 } 
	{ output_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ output_0_V_d0 sc_out sc_lv 38 signal 1 } 
	{ output_1_V_address0 sc_out sc_lv 8 signal 2 } 
	{ output_1_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ output_1_V_we0 sc_out sc_logic 1 signal 2 } 
	{ output_1_V_d0 sc_out sc_lv 38 signal 2 } 
	{ output_2_V_address0 sc_out sc_lv 8 signal 3 } 
	{ output_2_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ output_2_V_we0 sc_out sc_logic 1 signal 3 } 
	{ output_2_V_d0 sc_out sc_lv 38 signal 3 } 
	{ output_3_V_address0 sc_out sc_lv 8 signal 4 } 
	{ output_3_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ output_3_V_we0 sc_out sc_logic 1 signal 4 } 
	{ output_3_V_d0 sc_out sc_lv 38 signal 4 } 
	{ output_4_V_address0 sc_out sc_lv 8 signal 5 } 
	{ output_4_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ output_4_V_we0 sc_out sc_logic 1 signal 5 } 
	{ output_4_V_d0 sc_out sc_lv 38 signal 5 } 
	{ output_5_V_address0 sc_out sc_lv 8 signal 6 } 
	{ output_5_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ output_5_V_we0 sc_out sc_logic 1 signal 6 } 
	{ output_5_V_d0 sc_out sc_lv 38 signal 6 } 
	{ output_6_V_address0 sc_out sc_lv 8 signal 7 } 
	{ output_6_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ output_6_V_we0 sc_out sc_logic 1 signal 7 } 
	{ output_6_V_d0 sc_out sc_lv 38 signal 7 } 
	{ output_7_V_address0 sc_out sc_lv 8 signal 8 } 
	{ output_7_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ output_7_V_we0 sc_out sc_logic 1 signal 8 } 
	{ output_7_V_d0 sc_out sc_lv 38 signal 8 } 
	{ output_8_V_address0 sc_out sc_lv 8 signal 9 } 
	{ output_8_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ output_8_V_we0 sc_out sc_logic 1 signal 9 } 
	{ output_8_V_d0 sc_out sc_lv 38 signal 9 } 
	{ output_9_V_address0 sc_out sc_lv 8 signal 10 } 
	{ output_9_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ output_9_V_we0 sc_out sc_logic 1 signal 10 } 
	{ output_9_V_d0 sc_out sc_lv 38 signal 10 } 
	{ output_10_V_address0 sc_out sc_lv 8 signal 11 } 
	{ output_10_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ output_10_V_we0 sc_out sc_logic 1 signal 11 } 
	{ output_10_V_d0 sc_out sc_lv 38 signal 11 } 
	{ output_11_V_address0 sc_out sc_lv 8 signal 12 } 
	{ output_11_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ output_11_V_we0 sc_out sc_logic 1 signal 12 } 
	{ output_11_V_d0 sc_out sc_lv 38 signal 12 } 
	{ output_12_V_address0 sc_out sc_lv 8 signal 13 } 
	{ output_12_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ output_12_V_we0 sc_out sc_logic 1 signal 13 } 
	{ output_12_V_d0 sc_out sc_lv 38 signal 13 } 
	{ output_13_V_address0 sc_out sc_lv 8 signal 14 } 
	{ output_13_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ output_13_V_we0 sc_out sc_logic 1 signal 14 } 
	{ output_13_V_d0 sc_out sc_lv 38 signal 14 } 
	{ output_14_V_address0 sc_out sc_lv 8 signal 15 } 
	{ output_14_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ output_14_V_we0 sc_out sc_logic 1 signal 15 } 
	{ output_14_V_d0 sc_out sc_lv 38 signal 15 } 
	{ output_15_V_address0 sc_out sc_lv 8 signal 16 } 
	{ output_15_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ output_15_V_we0 sc_out sc_logic 1 signal 16 } 
	{ output_15_V_d0 sc_out sc_lv 38 signal 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "output_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_0_V", "role": "address0" }} , 
 	{ "name": "output_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "ce0" }} , 
 	{ "name": "output_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "we0" }} , 
 	{ "name": "output_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_0_V", "role": "d0" }} , 
 	{ "name": "output_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_1_V", "role": "address0" }} , 
 	{ "name": "output_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_1_V", "role": "ce0" }} , 
 	{ "name": "output_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_1_V", "role": "we0" }} , 
 	{ "name": "output_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_1_V", "role": "d0" }} , 
 	{ "name": "output_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_2_V", "role": "address0" }} , 
 	{ "name": "output_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_2_V", "role": "ce0" }} , 
 	{ "name": "output_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_2_V", "role": "we0" }} , 
 	{ "name": "output_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_2_V", "role": "d0" }} , 
 	{ "name": "output_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_3_V", "role": "address0" }} , 
 	{ "name": "output_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_3_V", "role": "ce0" }} , 
 	{ "name": "output_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_3_V", "role": "we0" }} , 
 	{ "name": "output_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_3_V", "role": "d0" }} , 
 	{ "name": "output_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_4_V", "role": "address0" }} , 
 	{ "name": "output_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_4_V", "role": "ce0" }} , 
 	{ "name": "output_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_4_V", "role": "we0" }} , 
 	{ "name": "output_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_4_V", "role": "d0" }} , 
 	{ "name": "output_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_5_V", "role": "address0" }} , 
 	{ "name": "output_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_5_V", "role": "ce0" }} , 
 	{ "name": "output_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_5_V", "role": "we0" }} , 
 	{ "name": "output_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_5_V", "role": "d0" }} , 
 	{ "name": "output_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_6_V", "role": "address0" }} , 
 	{ "name": "output_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_6_V", "role": "ce0" }} , 
 	{ "name": "output_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_6_V", "role": "we0" }} , 
 	{ "name": "output_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_6_V", "role": "d0" }} , 
 	{ "name": "output_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_7_V", "role": "address0" }} , 
 	{ "name": "output_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_7_V", "role": "ce0" }} , 
 	{ "name": "output_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_7_V", "role": "we0" }} , 
 	{ "name": "output_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_7_V", "role": "d0" }} , 
 	{ "name": "output_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_8_V", "role": "address0" }} , 
 	{ "name": "output_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_8_V", "role": "ce0" }} , 
 	{ "name": "output_8_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_8_V", "role": "we0" }} , 
 	{ "name": "output_8_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_8_V", "role": "d0" }} , 
 	{ "name": "output_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_9_V", "role": "address0" }} , 
 	{ "name": "output_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_9_V", "role": "ce0" }} , 
 	{ "name": "output_9_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_9_V", "role": "we0" }} , 
 	{ "name": "output_9_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_9_V", "role": "d0" }} , 
 	{ "name": "output_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_10_V", "role": "address0" }} , 
 	{ "name": "output_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_10_V", "role": "ce0" }} , 
 	{ "name": "output_10_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_10_V", "role": "we0" }} , 
 	{ "name": "output_10_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_10_V", "role": "d0" }} , 
 	{ "name": "output_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_11_V", "role": "address0" }} , 
 	{ "name": "output_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_11_V", "role": "ce0" }} , 
 	{ "name": "output_11_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_11_V", "role": "we0" }} , 
 	{ "name": "output_11_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_11_V", "role": "d0" }} , 
 	{ "name": "output_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_12_V", "role": "address0" }} , 
 	{ "name": "output_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_12_V", "role": "ce0" }} , 
 	{ "name": "output_12_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_12_V", "role": "we0" }} , 
 	{ "name": "output_12_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_12_V", "role": "d0" }} , 
 	{ "name": "output_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_13_V", "role": "address0" }} , 
 	{ "name": "output_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_13_V", "role": "ce0" }} , 
 	{ "name": "output_13_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_13_V", "role": "we0" }} , 
 	{ "name": "output_13_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_13_V", "role": "d0" }} , 
 	{ "name": "output_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_14_V", "role": "address0" }} , 
 	{ "name": "output_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_14_V", "role": "ce0" }} , 
 	{ "name": "output_14_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_14_V", "role": "we0" }} , 
 	{ "name": "output_14_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_14_V", "role": "d0" }} , 
 	{ "name": "output_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_15_V", "role": "address0" }} , 
 	{ "name": "output_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_15_V", "role": "ce0" }} , 
 	{ "name": "output_15_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_15_V", "role": "we0" }} , 
 	{ "name": "output_15_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_15_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "output_15_V", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
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
		output_15_V {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4721", "Max" : "4721"}
	, {"Name" : "Interval", "Min" : "4721", "Max" : "4721"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_V { ap_memory {  { input_V_address0 mem_address 1 12 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 38 } } }
	output_0_V { ap_memory {  { output_0_V_address0 mem_address 1 8 }  { output_0_V_ce0 mem_ce 1 1 }  { output_0_V_we0 mem_we 1 1 }  { output_0_V_d0 mem_din 1 38 } } }
	output_1_V { ap_memory {  { output_1_V_address0 mem_address 1 8 }  { output_1_V_ce0 mem_ce 1 1 }  { output_1_V_we0 mem_we 1 1 }  { output_1_V_d0 mem_din 1 38 } } }
	output_2_V { ap_memory {  { output_2_V_address0 mem_address 1 8 }  { output_2_V_ce0 mem_ce 1 1 }  { output_2_V_we0 mem_we 1 1 }  { output_2_V_d0 mem_din 1 38 } } }
	output_3_V { ap_memory {  { output_3_V_address0 mem_address 1 8 }  { output_3_V_ce0 mem_ce 1 1 }  { output_3_V_we0 mem_we 1 1 }  { output_3_V_d0 mem_din 1 38 } } }
	output_4_V { ap_memory {  { output_4_V_address0 mem_address 1 8 }  { output_4_V_ce0 mem_ce 1 1 }  { output_4_V_we0 mem_we 1 1 }  { output_4_V_d0 mem_din 1 38 } } }
	output_5_V { ap_memory {  { output_5_V_address0 mem_address 1 8 }  { output_5_V_ce0 mem_ce 1 1 }  { output_5_V_we0 mem_we 1 1 }  { output_5_V_d0 mem_din 1 38 } } }
	output_6_V { ap_memory {  { output_6_V_address0 mem_address 1 8 }  { output_6_V_ce0 mem_ce 1 1 }  { output_6_V_we0 mem_we 1 1 }  { output_6_V_d0 mem_din 1 38 } } }
	output_7_V { ap_memory {  { output_7_V_address0 mem_address 1 8 }  { output_7_V_ce0 mem_ce 1 1 }  { output_7_V_we0 mem_we 1 1 }  { output_7_V_d0 mem_din 1 38 } } }
	output_8_V { ap_memory {  { output_8_V_address0 mem_address 1 8 }  { output_8_V_ce0 mem_ce 1 1 }  { output_8_V_we0 mem_we 1 1 }  { output_8_V_d0 mem_din 1 38 } } }
	output_9_V { ap_memory {  { output_9_V_address0 mem_address 1 8 }  { output_9_V_ce0 mem_ce 1 1 }  { output_9_V_we0 mem_we 1 1 }  { output_9_V_d0 mem_din 1 38 } } }
	output_10_V { ap_memory {  { output_10_V_address0 mem_address 1 8 }  { output_10_V_ce0 mem_ce 1 1 }  { output_10_V_we0 mem_we 1 1 }  { output_10_V_d0 mem_din 1 38 } } }
	output_11_V { ap_memory {  { output_11_V_address0 mem_address 1 8 }  { output_11_V_ce0 mem_ce 1 1 }  { output_11_V_we0 mem_we 1 1 }  { output_11_V_d0 mem_din 1 38 } } }
	output_12_V { ap_memory {  { output_12_V_address0 mem_address 1 8 }  { output_12_V_ce0 mem_ce 1 1 }  { output_12_V_we0 mem_we 1 1 }  { output_12_V_d0 mem_din 1 38 } } }
	output_13_V { ap_memory {  { output_13_V_address0 mem_address 1 8 }  { output_13_V_ce0 mem_ce 1 1 }  { output_13_V_we0 mem_we 1 1 }  { output_13_V_d0 mem_din 1 38 } } }
	output_14_V { ap_memory {  { output_14_V_address0 mem_address 1 8 }  { output_14_V_ce0 mem_ce 1 1 }  { output_14_V_we0 mem_we 1 1 }  { output_14_V_d0 mem_din 1 38 } } }
	output_15_V { ap_memory {  { output_15_V_address0 mem_address 1 8 }  { output_15_V_ce0 mem_ce 1 1 }  { output_15_V_we0 mem_we 1 1 }  { output_15_V_d0 mem_din 1 38 } } }
}