/**
 * Definition: t37227e2
 * Hash: 37227e2
 */

#include "t37227e2.h"

void t37227e2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
