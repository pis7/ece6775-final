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
  bit32_t input_vector;

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
  bit32_t result;
  for (int i = 0; i < SEQ_LEN_DECODE; i++) {
    for (int j = 0; j < PROJ_COLS_BASIC; j++){
      nbytes = read(fdr, (void *)&result, sizeof(result));
      assert(nbytes == sizeof(result));
      cout << result << " ";
    }
    cout << endl;
  }

  timer.stop();

  return 0;
}
