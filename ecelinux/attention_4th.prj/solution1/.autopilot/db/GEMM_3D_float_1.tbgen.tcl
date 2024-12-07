set moduleName GEMM_3D_float_1
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
set C_modelName {GEMM_3D_float.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_1_0_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_1_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_2_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_3_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_4_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_5_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_6_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_7_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_8_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_9_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_10_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_11_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_12_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_13_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_14_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_1_15_0_V int 38 regular {array 24 { 1 3 } 1 1 }  }
	{ input_2_0_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_1_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_2_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_3_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_4_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_5_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_6_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_7_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_8_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_9_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_10_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_11_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_12_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_13_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_14_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ input_2_15_V int 38 regular {array 144 { 1 3 } 1 1 }  }
	{ output_0_V int 38 regular {array 48 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_1_0_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_1_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_2_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_3_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_4_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_5_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_6_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_7_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_8_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_9_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_10_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_11_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_12_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_13_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_14_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_15_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_1_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_2_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_3_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_4_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_5_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_6_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_7_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_8_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_9_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_10_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_11_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_12_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_13_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_14_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_15_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "output_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 107
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_1_0_0_V_address0 sc_out sc_lv 5 signal 0 } 
	{ input_1_0_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_1_0_0_V_q0 sc_in sc_lv 38 signal 0 } 
	{ input_1_1_0_V_address0 sc_out sc_lv 5 signal 1 } 
	{ input_1_1_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_1_1_0_V_q0 sc_in sc_lv 38 signal 1 } 
	{ input_1_2_0_V_address0 sc_out sc_lv 5 signal 2 } 
	{ input_1_2_0_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_1_2_0_V_q0 sc_in sc_lv 38 signal 2 } 
	{ input_1_3_0_V_address0 sc_out sc_lv 5 signal 3 } 
	{ input_1_3_0_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_1_3_0_V_q0 sc_in sc_lv 38 signal 3 } 
	{ input_1_4_0_V_address0 sc_out sc_lv 5 signal 4 } 
	{ input_1_4_0_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ input_1_4_0_V_q0 sc_in sc_lv 38 signal 4 } 
	{ input_1_5_0_V_address0 sc_out sc_lv 5 signal 5 } 
	{ input_1_5_0_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ input_1_5_0_V_q0 sc_in sc_lv 38 signal 5 } 
	{ input_1_6_0_V_address0 sc_out sc_lv 5 signal 6 } 
	{ input_1_6_0_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ input_1_6_0_V_q0 sc_in sc_lv 38 signal 6 } 
	{ input_1_7_0_V_address0 sc_out sc_lv 5 signal 7 } 
	{ input_1_7_0_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ input_1_7_0_V_q0 sc_in sc_lv 38 signal 7 } 
	{ input_1_8_0_V_address0 sc_out sc_lv 5 signal 8 } 
	{ input_1_8_0_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ input_1_8_0_V_q0 sc_in sc_lv 38 signal 8 } 
	{ input_1_9_0_V_address0 sc_out sc_lv 5 signal 9 } 
	{ input_1_9_0_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ input_1_9_0_V_q0 sc_in sc_lv 38 signal 9 } 
	{ input_1_10_0_V_address0 sc_out sc_lv 5 signal 10 } 
	{ input_1_10_0_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ input_1_10_0_V_q0 sc_in sc_lv 38 signal 10 } 
	{ input_1_11_0_V_address0 sc_out sc_lv 5 signal 11 } 
	{ input_1_11_0_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ input_1_11_0_V_q0 sc_in sc_lv 38 signal 11 } 
	{ input_1_12_0_V_address0 sc_out sc_lv 5 signal 12 } 
	{ input_1_12_0_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ input_1_12_0_V_q0 sc_in sc_lv 38 signal 12 } 
	{ input_1_13_0_V_address0 sc_out sc_lv 5 signal 13 } 
	{ input_1_13_0_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ input_1_13_0_V_q0 sc_in sc_lv 38 signal 13 } 
	{ input_1_14_0_V_address0 sc_out sc_lv 5 signal 14 } 
	{ input_1_14_0_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ input_1_14_0_V_q0 sc_in sc_lv 38 signal 14 } 
	{ input_1_15_0_V_address0 sc_out sc_lv 5 signal 15 } 
	{ input_1_15_0_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ input_1_15_0_V_q0 sc_in sc_lv 38 signal 15 } 
	{ input_2_0_V_address0 sc_out sc_lv 8 signal 16 } 
	{ input_2_0_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ input_2_0_V_q0 sc_in sc_lv 38 signal 16 } 
	{ input_2_1_V_address0 sc_out sc_lv 8 signal 17 } 
	{ input_2_1_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ input_2_1_V_q0 sc_in sc_lv 38 signal 17 } 
	{ input_2_2_V_address0 sc_out sc_lv 8 signal 18 } 
	{ input_2_2_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ input_2_2_V_q0 sc_in sc_lv 38 signal 18 } 
	{ input_2_3_V_address0 sc_out sc_lv 8 signal 19 } 
	{ input_2_3_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ input_2_3_V_q0 sc_in sc_lv 38 signal 19 } 
	{ input_2_4_V_address0 sc_out sc_lv 8 signal 20 } 
	{ input_2_4_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ input_2_4_V_q0 sc_in sc_lv 38 signal 20 } 
	{ input_2_5_V_address0 sc_out sc_lv 8 signal 21 } 
	{ input_2_5_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ input_2_5_V_q0 sc_in sc_lv 38 signal 21 } 
	{ input_2_6_V_address0 sc_out sc_lv 8 signal 22 } 
	{ input_2_6_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ input_2_6_V_q0 sc_in sc_lv 38 signal 22 } 
	{ input_2_7_V_address0 sc_out sc_lv 8 signal 23 } 
	{ input_2_7_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ input_2_7_V_q0 sc_in sc_lv 38 signal 23 } 
	{ input_2_8_V_address0 sc_out sc_lv 8 signal 24 } 
	{ input_2_8_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ input_2_8_V_q0 sc_in sc_lv 38 signal 24 } 
	{ input_2_9_V_address0 sc_out sc_lv 8 signal 25 } 
	{ input_2_9_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ input_2_9_V_q0 sc_in sc_lv 38 signal 25 } 
	{ input_2_10_V_address0 sc_out sc_lv 8 signal 26 } 
	{ input_2_10_V_ce0 sc_out sc_logic 1 signal 26 } 
	{ input_2_10_V_q0 sc_in sc_lv 38 signal 26 } 
	{ input_2_11_V_address0 sc_out sc_lv 8 signal 27 } 
	{ input_2_11_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ input_2_11_V_q0 sc_in sc_lv 38 signal 27 } 
	{ input_2_12_V_address0 sc_out sc_lv 8 signal 28 } 
	{ input_2_12_V_ce0 sc_out sc_logic 1 signal 28 } 
	{ input_2_12_V_q0 sc_in sc_lv 38 signal 28 } 
	{ input_2_13_V_address0 sc_out sc_lv 8 signal 29 } 
	{ input_2_13_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ input_2_13_V_q0 sc_in sc_lv 38 signal 29 } 
	{ input_2_14_V_address0 sc_out sc_lv 8 signal 30 } 
	{ input_2_14_V_ce0 sc_out sc_logic 1 signal 30 } 
	{ input_2_14_V_q0 sc_in sc_lv 38 signal 30 } 
	{ input_2_15_V_address0 sc_out sc_lv 8 signal 31 } 
	{ input_2_15_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ input_2_15_V_q0 sc_in sc_lv 38 signal 31 } 
	{ output_0_V_address0 sc_out sc_lv 6 signal 32 } 
	{ output_0_V_ce0 sc_out sc_logic 1 signal 32 } 
	{ output_0_V_we0 sc_out sc_logic 1 signal 32 } 
	{ output_0_V_d0 sc_out sc_lv 38 signal 32 } 
	{ output_0_V_q0 sc_in sc_lv 38 signal 32 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_1_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_0_0_V", "role": "address0" }} , 
 	{ "name": "input_1_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_0_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_0_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_0_0_V", "role": "q0" }} , 
 	{ "name": "input_1_1_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_1_0_V", "role": "address0" }} , 
 	{ "name": "input_1_1_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_1_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_1_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_1_0_V", "role": "q0" }} , 
 	{ "name": "input_1_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_2_0_V", "role": "address0" }} , 
 	{ "name": "input_1_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_2_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_2_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_2_0_V", "role": "q0" }} , 
 	{ "name": "input_1_3_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_3_0_V", "role": "address0" }} , 
 	{ "name": "input_1_3_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_3_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_3_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_3_0_V", "role": "q0" }} , 
 	{ "name": "input_1_4_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_4_0_V", "role": "address0" }} , 
 	{ "name": "input_1_4_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_4_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_4_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_4_0_V", "role": "q0" }} , 
 	{ "name": "input_1_5_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_5_0_V", "role": "address0" }} , 
 	{ "name": "input_1_5_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_5_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_5_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_5_0_V", "role": "q0" }} , 
 	{ "name": "input_1_6_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_6_0_V", "role": "address0" }} , 
 	{ "name": "input_1_6_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_6_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_6_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_6_0_V", "role": "q0" }} , 
 	{ "name": "input_1_7_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_7_0_V", "role": "address0" }} , 
 	{ "name": "input_1_7_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_7_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_7_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_7_0_V", "role": "q0" }} , 
 	{ "name": "input_1_8_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_8_0_V", "role": "address0" }} , 
 	{ "name": "input_1_8_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_8_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_8_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_8_0_V", "role": "q0" }} , 
 	{ "name": "input_1_9_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_9_0_V", "role": "address0" }} , 
 	{ "name": "input_1_9_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_9_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_9_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_9_0_V", "role": "q0" }} , 
 	{ "name": "input_1_10_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_10_0_V", "role": "address0" }} , 
 	{ "name": "input_1_10_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_10_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_10_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_10_0_V", "role": "q0" }} , 
 	{ "name": "input_1_11_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_11_0_V", "role": "address0" }} , 
 	{ "name": "input_1_11_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_11_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_11_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_11_0_V", "role": "q0" }} , 
 	{ "name": "input_1_12_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_12_0_V", "role": "address0" }} , 
 	{ "name": "input_1_12_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_12_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_12_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_12_0_V", "role": "q0" }} , 
 	{ "name": "input_1_13_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_13_0_V", "role": "address0" }} , 
 	{ "name": "input_1_13_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_13_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_13_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_13_0_V", "role": "q0" }} , 
 	{ "name": "input_1_14_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_14_0_V", "role": "address0" }} , 
 	{ "name": "input_1_14_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_14_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_14_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_14_0_V", "role": "q0" }} , 
 	{ "name": "input_1_15_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_1_15_0_V", "role": "address0" }} , 
 	{ "name": "input_1_15_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_15_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_15_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_1_15_0_V", "role": "q0" }} , 
 	{ "name": "input_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_0_V", "role": "address0" }} , 
 	{ "name": "input_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_0_V", "role": "ce0" }} , 
 	{ "name": "input_2_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_0_V", "role": "q0" }} , 
 	{ "name": "input_2_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_1_V", "role": "address0" }} , 
 	{ "name": "input_2_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_1_V", "role": "ce0" }} , 
 	{ "name": "input_2_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_1_V", "role": "q0" }} , 
 	{ "name": "input_2_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_2_V", "role": "address0" }} , 
 	{ "name": "input_2_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_2_V", "role": "ce0" }} , 
 	{ "name": "input_2_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_2_V", "role": "q0" }} , 
 	{ "name": "input_2_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_3_V", "role": "address0" }} , 
 	{ "name": "input_2_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_3_V", "role": "ce0" }} , 
 	{ "name": "input_2_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_3_V", "role": "q0" }} , 
 	{ "name": "input_2_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_4_V", "role": "address0" }} , 
 	{ "name": "input_2_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_4_V", "role": "ce0" }} , 
 	{ "name": "input_2_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_4_V", "role": "q0" }} , 
 	{ "name": "input_2_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_5_V", "role": "address0" }} , 
 	{ "name": "input_2_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_5_V", "role": "ce0" }} , 
 	{ "name": "input_2_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_5_V", "role": "q0" }} , 
 	{ "name": "input_2_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_6_V", "role": "address0" }} , 
 	{ "name": "input_2_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_6_V", "role": "ce0" }} , 
 	{ "name": "input_2_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_6_V", "role": "q0" }} , 
 	{ "name": "input_2_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_7_V", "role": "address0" }} , 
 	{ "name": "input_2_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_7_V", "role": "ce0" }} , 
 	{ "name": "input_2_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_7_V", "role": "q0" }} , 
 	{ "name": "input_2_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_8_V", "role": "address0" }} , 
 	{ "name": "input_2_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_8_V", "role": "ce0" }} , 
 	{ "name": "input_2_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_8_V", "role": "q0" }} , 
 	{ "name": "input_2_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_9_V", "role": "address0" }} , 
 	{ "name": "input_2_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_9_V", "role": "ce0" }} , 
 	{ "name": "input_2_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_9_V", "role": "q0" }} , 
 	{ "name": "input_2_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_10_V", "role": "address0" }} , 
 	{ "name": "input_2_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_10_V", "role": "ce0" }} , 
 	{ "name": "input_2_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_10_V", "role": "q0" }} , 
 	{ "name": "input_2_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_11_V", "role": "address0" }} , 
 	{ "name": "input_2_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_11_V", "role": "ce0" }} , 
 	{ "name": "input_2_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_11_V", "role": "q0" }} , 
 	{ "name": "input_2_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_12_V", "role": "address0" }} , 
 	{ "name": "input_2_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_12_V", "role": "ce0" }} , 
 	{ "name": "input_2_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_12_V", "role": "q0" }} , 
 	{ "name": "input_2_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_13_V", "role": "address0" }} , 
 	{ "name": "input_2_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_13_V", "role": "ce0" }} , 
 	{ "name": "input_2_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_13_V", "role": "q0" }} , 
 	{ "name": "input_2_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_14_V", "role": "address0" }} , 
 	{ "name": "input_2_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_14_V", "role": "ce0" }} , 
 	{ "name": "input_2_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_14_V", "role": "q0" }} , 
 	{ "name": "input_2_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_15_V", "role": "address0" }} , 
 	{ "name": "input_2_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_15_V", "role": "ce0" }} , 
 	{ "name": "input_2_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_2_15_V", "role": "q0" }} , 
 	{ "name": "output_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "output_0_V", "role": "address0" }} , 
 	{ "name": "output_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "ce0" }} , 
 	{ "name": "output_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "we0" }} , 
 	{ "name": "output_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_0_V", "role": "d0" }} , 
 	{ "name": "output_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_0_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
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
		output_0_V {Type IO LastRead 5 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1985", "Max" : "1985"}
	, {"Name" : "Interval", "Min" : "1985", "Max" : "1985"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_1_0_0_V { ap_memory {  { input_1_0_0_V_address0 mem_address 1 5 }  { input_1_0_0_V_ce0 mem_ce 1 1 }  { input_1_0_0_V_q0 mem_dout 0 38 } } }
	input_1_1_0_V { ap_memory {  { input_1_1_0_V_address0 mem_address 1 5 }  { input_1_1_0_V_ce0 mem_ce 1 1 }  { input_1_1_0_V_q0 mem_dout 0 38 } } }
	input_1_2_0_V { ap_memory {  { input_1_2_0_V_address0 mem_address 1 5 }  { input_1_2_0_V_ce0 mem_ce 1 1 }  { input_1_2_0_V_q0 mem_dout 0 38 } } }
	input_1_3_0_V { ap_memory {  { input_1_3_0_V_address0 mem_address 1 5 }  { input_1_3_0_V_ce0 mem_ce 1 1 }  { input_1_3_0_V_q0 mem_dout 0 38 } } }
	input_1_4_0_V { ap_memory {  { input_1_4_0_V_address0 mem_address 1 5 }  { input_1_4_0_V_ce0 mem_ce 1 1 }  { input_1_4_0_V_q0 mem_dout 0 38 } } }
	input_1_5_0_V { ap_memory {  { input_1_5_0_V_address0 mem_address 1 5 }  { input_1_5_0_V_ce0 mem_ce 1 1 }  { input_1_5_0_V_q0 mem_dout 0 38 } } }
	input_1_6_0_V { ap_memory {  { input_1_6_0_V_address0 mem_address 1 5 }  { input_1_6_0_V_ce0 mem_ce 1 1 }  { input_1_6_0_V_q0 mem_dout 0 38 } } }
	input_1_7_0_V { ap_memory {  { input_1_7_0_V_address0 mem_address 1 5 }  { input_1_7_0_V_ce0 mem_ce 1 1 }  { input_1_7_0_V_q0 mem_dout 0 38 } } }
	input_1_8_0_V { ap_memory {  { input_1_8_0_V_address0 mem_address 1 5 }  { input_1_8_0_V_ce0 mem_ce 1 1 }  { input_1_8_0_V_q0 mem_dout 0 38 } } }
	input_1_9_0_V { ap_memory {  { input_1_9_0_V_address0 mem_address 1 5 }  { input_1_9_0_V_ce0 mem_ce 1 1 }  { input_1_9_0_V_q0 mem_dout 0 38 } } }
	input_1_10_0_V { ap_memory {  { input_1_10_0_V_address0 mem_address 1 5 }  { input_1_10_0_V_ce0 mem_ce 1 1 }  { input_1_10_0_V_q0 mem_dout 0 38 } } }
	input_1_11_0_V { ap_memory {  { input_1_11_0_V_address0 mem_address 1 5 }  { input_1_11_0_V_ce0 mem_ce 1 1 }  { input_1_11_0_V_q0 mem_dout 0 38 } } }
	input_1_12_0_V { ap_memory {  { input_1_12_0_V_address0 mem_address 1 5 }  { input_1_12_0_V_ce0 mem_ce 1 1 }  { input_1_12_0_V_q0 mem_dout 0 38 } } }
	input_1_13_0_V { ap_memory {  { input_1_13_0_V_address0 mem_address 1 5 }  { input_1_13_0_V_ce0 mem_ce 1 1 }  { input_1_13_0_V_q0 mem_dout 0 38 } } }
	input_1_14_0_V { ap_memory {  { input_1_14_0_V_address0 mem_address 1 5 }  { input_1_14_0_V_ce0 mem_ce 1 1 }  { input_1_14_0_V_q0 mem_dout 0 38 } } }
	input_1_15_0_V { ap_memory {  { input_1_15_0_V_address0 mem_address 1 5 }  { input_1_15_0_V_ce0 mem_ce 1 1 }  { input_1_15_0_V_q0 mem_dout 0 38 } } }
	input_2_0_V { ap_memory {  { input_2_0_V_address0 mem_address 1 8 }  { input_2_0_V_ce0 mem_ce 1 1 }  { input_2_0_V_q0 mem_dout 0 38 } } }
	input_2_1_V { ap_memory {  { input_2_1_V_address0 mem_address 1 8 }  { input_2_1_V_ce0 mem_ce 1 1 }  { input_2_1_V_q0 mem_dout 0 38 } } }
	input_2_2_V { ap_memory {  { input_2_2_V_address0 mem_address 1 8 }  { input_2_2_V_ce0 mem_ce 1 1 }  { input_2_2_V_q0 mem_dout 0 38 } } }
	input_2_3_V { ap_memory {  { input_2_3_V_address0 mem_address 1 8 }  { input_2_3_V_ce0 mem_ce 1 1 }  { input_2_3_V_q0 mem_dout 0 38 } } }
	input_2_4_V { ap_memory {  { input_2_4_V_address0 mem_address 1 8 }  { input_2_4_V_ce0 mem_ce 1 1 }  { input_2_4_V_q0 mem_dout 0 38 } } }
	input_2_5_V { ap_memory {  { input_2_5_V_address0 mem_address 1 8 }  { input_2_5_V_ce0 mem_ce 1 1 }  { input_2_5_V_q0 mem_dout 0 38 } } }
	input_2_6_V { ap_memory {  { input_2_6_V_address0 mem_address 1 8 }  { input_2_6_V_ce0 mem_ce 1 1 }  { input_2_6_V_q0 mem_dout 0 38 } } }
	input_2_7_V { ap_memory {  { input_2_7_V_address0 mem_address 1 8 }  { input_2_7_V_ce0 mem_ce 1 1 }  { input_2_7_V_q0 mem_dout 0 38 } } }
	input_2_8_V { ap_memory {  { input_2_8_V_address0 mem_address 1 8 }  { input_2_8_V_ce0 mem_ce 1 1 }  { input_2_8_V_q0 mem_dout 0 38 } } }
	input_2_9_V { ap_memory {  { input_2_9_V_address0 mem_address 1 8 }  { input_2_9_V_ce0 mem_ce 1 1 }  { input_2_9_V_q0 mem_dout 0 38 } } }
	input_2_10_V { ap_memory {  { input_2_10_V_address0 mem_address 1 8 }  { input_2_10_V_ce0 mem_ce 1 1 }  { input_2_10_V_q0 mem_dout 0 38 } } }
	input_2_11_V { ap_memory {  { input_2_11_V_address0 mem_address 1 8 }  { input_2_11_V_ce0 mem_ce 1 1 }  { input_2_11_V_q0 mem_dout 0 38 } } }
	input_2_12_V { ap_memory {  { input_2_12_V_address0 mem_address 1 8 }  { input_2_12_V_ce0 mem_ce 1 1 }  { input_2_12_V_q0 mem_dout 0 38 } } }
	input_2_13_V { ap_memory {  { input_2_13_V_address0 mem_address 1 8 }  { input_2_13_V_ce0 mem_ce 1 1 }  { input_2_13_V_q0 mem_dout 0 38 } } }
	input_2_14_V { ap_memory {  { input_2_14_V_address0 mem_address 1 8 }  { input_2_14_V_ce0 mem_ce 1 1 }  { input_2_14_V_q0 mem_dout 0 38 } } }
	input_2_15_V { ap_memory {  { input_2_15_V_address0 mem_address 1 8 }  { input_2_15_V_ce0 mem_ce 1 1 }  { input_2_15_V_q0 mem_dout 0 38 } } }
	output_0_V { ap_memory {  { output_0_V_address0 mem_address 1 6 }  { output_0_V_ce0 mem_ce 1 1 }  { output_0_V_we0 mem_we 1 1 }  { output_0_V_d0 mem_din 1 38 }  { output_0_V_q0 mem_dout 0 38 } } }
}
