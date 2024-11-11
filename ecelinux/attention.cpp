//==========================================================================
// digitrec.cpp
//==========================================================================
// @brief: A k-nearest-neighbor implementation for digit recognition (k=1)

#include "attention.h"

//----------------------------------------------------------
// Top function
//----------------------------------------------------------

void dut(hls::stream<bit32_t> &strm_in, hls::stream<bit32_t> &strm_out) {
  digit test_dig;

  // ------------------------------------------------------
  // Input processing
  // ------------------------------------------------------
  // Read the two input 32-bit words (low word first)
  bit32_t input_lo = strm_in.read();
  bit32_t input_hi = strm_in.read();

  // Convert input raw bits to arbitrary-precision representation via bit slicing
  test_dig(31, 0) = input_lo;
  test_dig(test_dig.length()-1, 32) = input_hi;

  // ------------------------------------------------------
  // Call digitrec()
  // ------------------------------------------------------
  bit4_t label = attention();

  // ------------------------------------------------------
  // Output processing
  // ------------------------------------------------------
  // Write out the label
  strm_out.write(label);
}

//----------------------------------------------------------
// Attention
//----------------------------------------------------------
// @param[in] : input - the testing instance
// @return : the recognized digit (0~9)

bit4_t attention(digit input) {
#include "training_data.h"


}
