/**
 * Definition: ta46a4aa5
 * Hash: a46a4aa5
 */

#include "ta46a4aa5.h"

void ta46a4aa5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&unk_8021830, base, ptr);
}
