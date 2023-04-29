/**
 * Definition: te1c5710
 * Hash: e1c5710
 */

#include "te1c5710.h"

void te1c5710::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5770323, base, ptr);
  readData(&unk_441f783, base, ptr);
  readData(&unk_b835d15, base, ptr);
}
