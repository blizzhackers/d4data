/**
 * Definition: tc9a200b0
 * Hash: c9a200b0
 */

#include "tc9a200b0.h"

void tc9a200b0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&rgbaColor, base, current);
  ptr += 0x8;
}
