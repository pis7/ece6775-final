//=========================================================================
// attention_test.cpp
//=========================================================================
// @brief: testbench for Attention layer of BitNet LLM

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <ac_math.h>
#include <cmath>
#include "attention.h"
#include "timer.h"
#include "data_short/hidden_states.h"
#include "data_short/ground_truth.h"

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
  st_fixed32_t result1;
  double result, gndtruth;
  double error_accum = 0.0;
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    for (int j = 0; j < PROJ_COLS_BASIC; j++) {
      result1 = (st_fixed32_t)attention_out.read();
      result = result1.to_double();
      gndtruth = ground_truth[i][j].to_double();
      cout << "result: " << result << ", ground_truth: " << ground_truth[i][j] << endl;
      error_accum += pow(fabs(result - gndtruth), 2.0);
    }
    cout << endl;
  }

  timer.stop();

  // calculate RMSE
  double rmse = sqrt(error_accum / (SEQ_LEN_DECODE * PROJ_COLS_BASIC));
  cout << "\033[32mRMSE: \033[0m" << rmse << endl;

  return 0;
}
