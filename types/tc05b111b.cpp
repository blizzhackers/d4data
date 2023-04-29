/**
 * Definition: tc05b111b
 * Hash: c05b111b
 */

#include "tc05b111b.h"

void tc05b111b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_283d1ad, base, ptr);
  readData(&szValue, base, ptr);
}
