#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <math.h>
#include <assert.h>

#include <iostream>
#include <fstream>

#include <string>
#include "attention.h"
#include "timer.h"
#include "data_short/hidden_states.h"
#include "data_short/ground_truth.h"

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
  fixed32_t input_vector;

  // Timer
  Timer timer("attention");
  timer.start();

  // pack images to 32-bit and transmit to dut function
  for (int i = 0; i < SEQ_LEN_DECODE; i++)
    for (int j = 0; j < HS_COLS_BASIC; j++) {
      input_vector = hidden_states[i][j];
      nbytes = write(fdw, (void *)&input_vector, sizeof(input_vector));
      assert(nbytes == sizeof(input_vector));
    }

  // check results
  fixed32_t result;
  int num_incorrect = 0;
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    for (int j = 0; j < PROJ_COLS_BASIC; j++) {
      nbytes = read(fdr, (void *)&result, sizeof(result));
      assert(nbytes == sizeof(result));
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
