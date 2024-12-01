#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <cmath>
#include <math.h>
#include <assert.h>

#include <iostream>
#include <fstream>

#include <string>
#include "attention.h"
#include "timer.h"
#include "data_include.h"

using namespace std;

int main() {
  // Open channels to the FPGA board.
  // These channels appear as files to the Linux OS
  int fdr = open("/dev/xillybus_read_32", O_RDONLY);
  int fdw = open("/dev/xillybus_write_32", O_WRONLY);

  // Check that the channels are correctly opened
  if ((fdr < 0) || (fdw < 0)) {
    fprintf(stderr, "Failed to open Xillybus device channels\n");
    exit(-1);
  }
  int nbytes;
  st_fixed32_t input_vector;

  // Timer
  Timer timer("attention_fpga");
  timer.start();

  // pack images to 32-bit and transmit to dut function
  for (int i = 0; i < SEQ_LEN_DECODE; i++)
    for (int j = 0; j < HS_COLS_BASIC; j++) {
      input_vector = hidden_states[i][j];
      nbytes = write(fdw, (void *)&input_vector, sizeof(input_vector));
      assert(nbytes == sizeof(input_vector));
    }

  // check results
  st_fixed32_t result;
  float error_accum  = 0.0;
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    for (int j = 0; j < PROJ_COLS_BASIC; j++) {
      nbytes = read(fdr, (void *)&result, sizeof(result));
      assert(nbytes == sizeof(result));
      cout << "result: " << result << ", ground_truth: " << ground_truth[i][j] << endl;
      error_accum += pow(fabs((float)result - (float)ground_truth[i][j]), 2);
    }
    cout << endl;
  }

  timer.stop();
 
  // calculate RMSE
  float rmse = sqrt(error_accum / (SEQ_LEN_DECODE * PROJ_COLS_BASIC));
  cout << "BUS_TOT_W=" << BUS_TOT_W << " BUS_INT_W=" << BUS_INT_W << " RMSE=" << rmse << endl;
  cout << "\033[0m";

  return 0;
}
