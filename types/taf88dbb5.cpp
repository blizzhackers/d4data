/**
 * Definition: taf88dbb5
 * Hash: af88dbb5
 */

#include "taf88dbb5.h"

void taf88dbb5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
