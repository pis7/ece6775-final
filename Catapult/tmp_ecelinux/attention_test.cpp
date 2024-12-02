//=========================================================================
// attention_test.cpp
//=========================================================================
// @brief: testbench for Attention layer of BitNet LLM

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <cmath>
#include "attention.h"
#include "timer.h"
#include "data_include.h"
#include <ac_math.h>

using namespace std;

//------------------------------------------------------------------------
// Attention testbench
//------------------------------------------------------------------------

int main() {
  
  // HLS streams for communicating with the cordic block
  ac_channel<st_fixed32_t> attention_in;
  ac_channel<st_fixed32_t> attention_out;

  // Timer
  Timer timer("attention");
  timer.start();

  // pack images to 32-bit and transmit to dut function
  for (int i = 0; i < SEQ_LEN_DECODE; i++)
    for (int j = 0; j < HS_COLS_BASIC; j++)
      attention_in.write((st_fixed32_t)hidden_states[i][j]);

  // perform attention
  dut(attention_in, attention_out);

  // check results with precision of 3 decimal places
  st_fixed32_t result;
  double error_accum = 0.0;
  double result_double, gndtruth_double;
  std::cout<<"\033[32m]"
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    for (int j = 0; j < PROJ_COLS_BASIC; j++) {
      result = (st_fixed32_t)attention_out.read();
      result_double = result.to_double();
      gndtruth_double = ground_truth[i][j].to_double();
      cout << "result: " << result_double << ", ground_truth: " << gndtruth_double[i][j] << endl;
      error_accum += pow(fabs(result_double - gndtruth_double), 2.0);
    }
    cout << endl;
  }

  timer.stop();

  // calculate RMSE
  double rmse = sqrt(error_accum / (SEQ_LEN_DECODE * PROJ_COLS_BASIC));
  cout << "BUS_TOT_W=" << BUS_TOT_W << " BUS_INT_W=" << BUS_INT_W << " RMSE=" << rmse << endl;
  cout << "\033[0m";

  return 0;
}
