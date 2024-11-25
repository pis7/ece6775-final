//=========================================================================
// attention_test.cpp
//=========================================================================
// @brief: testbench for Attention layer of BitNet LLM

#include <iostream>
#include <fstream>
#include <string>
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
  hls::stream<fixed32_t> attention_in;
  hls::stream<fixed32_t> attention_out;

  // Timer
  Timer timer("attention");
  timer.start();

  // pack images to 32-bit and transmit to dut function
  for (int i = 0; i < SEQ_LEN_DECODE; i++)
    for (int j = 0; j < HS_COLS_BASIC; j++)
      attention_in.write(hidden_states[i][j]);

  // perform attention
  dut(attention_in, attention_out);

  // check results with precision of 3 decimal places
  fixed32_t result;
  int num_incorrect = 0;
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    for (int j = 0; j < PROJ_COLS_BASIC; j++) {
      result = attention_out.read();
      cout << "\033[34m" << result << "\033[0m ";
      int res_scaled = result * 1000;
      int gt_scaled = ground_truth[i][j] * 1000;
      if (std::abs(res_scaled - gt_scaled) != 0) num_incorrect++;
    }
    cout << endl;
  }

  timer.stop();

  if (num_incorrect == 0) cout << "\033[32mAttention test passed!\033[0m" << endl;
  else cout << "\033[31mAttention test failed with " << num_incorrect << " errors!\033[0m" << endl;

  return 0;
}
