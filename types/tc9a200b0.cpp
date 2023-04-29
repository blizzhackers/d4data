/**
 * Definition: tc9a200b0
 * Hash: c9a200b0
 */

#include "tc9a200b0.h"

void tc9a200b0::read(const char* base, char* &ptr) {
  readData(&flTime, base, ptr);
  readData(&rgbaColor, base, ptr);
}
