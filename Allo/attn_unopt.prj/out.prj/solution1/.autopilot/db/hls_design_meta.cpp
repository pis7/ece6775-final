#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("v258_address0", 11, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("v258_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("v258_q0", 32, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("v259_address0", 20, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("v259_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("v259_q0", 8, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("v260", 32, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("v261_address0", 20, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("v261_ce0", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("v261_q0", 8, hls_in, 3, "ap_memory", "mem_dout", 1),
	Port_Property("v262", 32, hls_in, 4, "ap_none", "in_data", 1),
	Port_Property("v263_address0", 20, hls_out, 5, "ap_memory", "mem_address", 1),
	Port_Property("v263_ce0", 1, hls_out, 5, "ap_memory", "mem_ce", 1),
	Port_Property("v263_q0", 8, hls_in, 5, "ap_memory", "mem_dout", 1),
	Port_Property("v264", 32, hls_in, 6, "ap_none", "in_data", 1),
	Port_Property("v265_address0", 20, hls_out, 7, "ap_memory", "mem_address", 1),
	Port_Property("v265_ce0", 1, hls_out, 7, "ap_memory", "mem_ce", 1),
	Port_Property("v265_q0", 8, hls_in, 7, "ap_memory", "mem_dout", 1),
	Port_Property("v266", 32, hls_in, 8, "ap_none", "in_data", 1),
	Port_Property("v267_address0", 10, hls_out, 9, "ap_memory", "mem_address", 1),
	Port_Property("v267_ce0", 1, hls_out, 9, "ap_memory", "mem_ce", 1),
	Port_Property("v267_q0", 32, hls_in, 9, "ap_memory", "mem_dout", 1),
	Port_Property("v268_address0", 10, hls_out, 10, "ap_memory", "mem_address", 1),
	Port_Property("v268_ce0", 1, hls_out, 10, "ap_memory", "mem_ce", 1),
	Port_Property("v268_q0", 32, hls_in, 10, "ap_memory", "mem_dout", 1),
	Port_Property("v269_address0", 11, hls_out, 11, "ap_memory", "mem_address", 1),
	Port_Property("v269_ce0", 1, hls_out, 11, "ap_memory", "mem_ce", 1),
	Port_Property("v269_q0", 32, hls_in, 11, "ap_memory", "mem_dout", 1),
	Port_Property("v270_address0", 11, hls_out, 12, "ap_memory", "mem_address", 1),
	Port_Property("v270_ce0", 1, hls_out, 12, "ap_memory", "mem_ce", 1),
	Port_Property("v270_q0", 32, hls_in, 12, "ap_memory", "mem_dout", 1),
	Port_Property("v271_address0", 13, hls_out, 13, "ap_memory", "mem_address", 1),
	Port_Property("v271_ce0", 1, hls_out, 13, "ap_memory", "mem_ce", 1),
	Port_Property("v271_q0", 32, hls_in, 13, "ap_memory", "mem_dout", 1),
	Port_Property("v272_address0", 13, hls_out, 14, "ap_memory", "mem_address", 1),
	Port_Property("v272_ce0", 1, hls_out, 14, "ap_memory", "mem_ce", 1),
	Port_Property("v272_q0", 32, hls_in, 14, "ap_memory", "mem_dout", 1),
	Port_Property("v273", 32, hls_in, 15, "ap_none", "in_data", 1),
	Port_Property("v274_address0", 11, hls_out, 16, "ap_memory", "mem_address", 1),
	Port_Property("v274_ce0", 1, hls_out, 16, "ap_memory", "mem_ce", 1),
	Port_Property("v274_we0", 1, hls_out, 16, "ap_memory", "mem_we", 1),
	Port_Property("v274_d0", 32, hls_out, 16, "ap_memory", "mem_din", 1),
	Port_Property("v274_q0", 32, hls_in, 16, "ap_memory", "mem_dout", 1),
};
const char* HLS_Design_Meta::dut_name = "attention";