//=========================================================================
// attention_test.cpp
//=========================================================================
// @brief: testbench for Attention layer of BitNet LLM

#include <iostream>
#include <fstream>
#include <string>
#include "attention.h"
#include "timer.h"

using namespace std;

//------------------------------------------------------------------------
// Digitrec testbench
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
      attention_in.write(test_att_input1[i][j]);

  // perform prediction
  dut(attention_in, attention_out);

  // check results
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    cout << "{";
    for (int j = 0; j < PROJ_COLS_BASIC; j++) {
      fixed32_t result = attention_out.read();
      if (j != O_WIDTH1 - 1) cout << result << ", ";
      else cout << result;
    }
    cout << "}," << endl;
  }

  timer.stop();

  return 0;
}
