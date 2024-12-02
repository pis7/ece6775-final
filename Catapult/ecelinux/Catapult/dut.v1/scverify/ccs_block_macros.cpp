void mc_testbench_capture_IN( ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_in, ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_out ) {
  mc_testbench::capture_IN(strm_in, strm_out);
}
void mc_testbench_capture_OUT( ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_in, ac_channel<ac_fixed<32, 14, true, AC_TRN, AC_WRAP> > &strm_out ) {
  mc_testbench::capture_OUT(strm_in, strm_out);
}
