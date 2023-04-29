/**
 * Definition: t5dcb1af1
 * Hash: 5dcb1af1
 */

#include "t5dcb1af1.h"

void t5dcb1af1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_33d39d0, base, ptr);
}
