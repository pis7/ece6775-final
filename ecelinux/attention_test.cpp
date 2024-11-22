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

  // // perform prediction
  dut(attention_in, attention_out);

  // check results
  int num_incorrect = 0;
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    for (int j = 0; j < PROJ_COLS_BASIC; j++)
      cout << attention_out.read() << " ";
    cout << endl;
  }

  timer.stop();

  return 0;
}
