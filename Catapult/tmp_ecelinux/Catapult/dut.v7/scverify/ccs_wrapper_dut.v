// SCVerify DUT wrapper used for SystemC > HDL interface bindings


module ccs_wrapper (
  clk, en, rst, strm_in_rsc_dat, strm_in_rsc_vld, strm_in_rsc_rdy, strm_out_rsc_dat, strm_out_rsc_vld, strm_out_rsc_rdy
);
  input clk;
  input en;
  input rst;
  input [31:0] strm_in_rsc_dat;
  input strm_in_rsc_vld;
  output strm_in_rsc_rdy;
  output [31:0] strm_out_rsc_dat;
  output strm_out_rsc_vld;
  input strm_out_rsc_rdy;


  dut dut_inst (
    .clk(clk),
    .en(en),
    .rst(rst),
    .strm_in_rsc_dat(strm_in_rsc_dat),
    .strm_in_rsc_vld(strm_in_rsc_vld),
    .strm_in_rsc_rdy(strm_in_rsc_rdy),
    .strm_out_rsc_dat(strm_out_rsc_dat),
    .strm_out_rsc_vld(strm_out_rsc_vld),
    .strm_out_rsc_rdy(strm_out_rsc_rdy)
  );

endmodule

