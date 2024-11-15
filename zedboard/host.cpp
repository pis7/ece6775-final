#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <math.h>
#include <assert.h>

#include <iostream>
#include <fstream>
#include <string>

#include "typedefs.h"
#include "timer.h"
#include "model.h"
#include "attention.h"

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
    nbytes = write(fdw, (void *)&input_vector, sizeof(input_vector));
    assert(nbytes == sizeof(input_vector));
  }

  // check results
  bit32_t result;
  for (int i = 0; i < I_WIDTH1*3; i++) {
    cout << "{";
    for (int j = 0; j < O_WIDTH1; j++) {
      nbytes = read(fdr, (void *)&result, sizeof(result));
      assert(nbytes == sizeof(result));
      if (j != O_WIDTH1 - 1) cout << result << ", ";
      else cout << result;
    }
    cout << "}," << endl;
  }

  timer.stop();

  return 0;
}
