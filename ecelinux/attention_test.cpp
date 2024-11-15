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
  hls::stream<bit32_t> digitrec_in;
  hls::stream<bit32_t> digitrec_out;

  // read test images and labels
  bit32_t input_vector;

  // Timer
  Timer timer("attention");
  timer.start();

  // pack images to 32-bit and transmit to dut function
  for (int i = 0; i < I_WIDTH1; i++) {
    for (int j = 0; j < I_WIDTH1; j+=4) {
      input_vector(7, 0) = test_att_input1[i][j];
      input_vector(15, 8) = test_att_input1[i][j+1];
      input_vector(23, 16) = test_att_input1[i][j+2];
      input_vector(31, 24) = test_att_input1[i][j+3];
    }
    digitrec_in.write(input_vector);
  }

  // perform prediction
  dut(digitrec_in, digitrec_out);

  // check results
  for (int i = 0; i < I_WIDTH1*3; i++) {
    cout << "{";
    for (int j = 0; j < O_WIDTH1; j++) {
      bit32_t result = digitrec_out.read();
      if (j != O_WIDTH1 - 1) cout << result << ", ";
      else cout << result;
    }
    cout << "}," << endl;
  }

  timer.stop();

  return 0;
}
