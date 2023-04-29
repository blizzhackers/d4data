/**
 * Definition: ta4b92c0c
 * Hash: a4b92c0c
 */

#include "ta4b92c0c.h"

void ta4b92c0c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_283d1ad, base, ptr);
}
