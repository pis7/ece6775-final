//=========================================================================
// bnn_test.cpp
//=========================================================================
// @brief: testbench for Binarized Neural Betwork(BNN) digit recongnition
// application

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
  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < I_WIDTH1; j++)
      attention_in.write(test_att_input1[i][j]);
  }

  // perform prediction
  dut(attention_in, attention_out);

  // check results
  for (int i = 0; i < I_WIDTH1*3; i++) {
    cout << "{";
    for (int j = 0; j < O_WIDTH1; j++) {
      fixed32_t result = attention_out.read();
      if (j != O_WIDTH1 - 1) cout << static_cast<float>(result) << ", ";
      else cout << result;
    }
    cout << "}," << endl;
  }

  timer.stop();

  return 0;
}
