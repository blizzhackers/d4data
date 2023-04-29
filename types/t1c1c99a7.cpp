/**
 * Definition: t1c1c99a7
 * Hash: 1c1c99a7
 */

#include "t1c1c99a7.h"

void t1c1c99a7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
