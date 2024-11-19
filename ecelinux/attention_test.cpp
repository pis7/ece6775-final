//=========================================================================
// attention_test.cpp
//=========================================================================
// @brief: testbench for Attention layer of BitNet LLM

#include <iostream>
#include <fstream>
#include <string>
#include "attention.h"
#include "timer.h"
#include "data/hidden_states.h"
#include "data/ground_truth.h"

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
      attention_in.write(hidden_states[i][j]);

  // // perform prediction
  dut(attention_in, attention_out);

  // check results
  int num_incorrect = 0;
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    cout << "{";
    for (int j = 0; j < PROJ_COLS_BASIC; j++) {
      fixed32_t result = attention_out.read();
      if (j != PROJ_COLS_BASIC - 1) cout << result << ", ";
      else cout << result;
      if (result != ground_truth[i][j]) num_incorrect++;
    }
    if (i != SEQ_LEN_DECODE - 1) cout << "}," << endl;
    else cout << "}";
  }

  if (num_incorrect == 0)
    cout << "\033[32mAll results are correct!\033[0m" << endl;
  else
    cout << "\033[31mIncorrect results: " << num_incorrect << "\033[0m" << endl;

  timer.stop();

  return 0;
}
