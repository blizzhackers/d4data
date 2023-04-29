/**
 * Definition: t4e43aa7a
 * Hash: 4e43aa7a
 */

#include "t4e43aa7a.h"

void t4e43aa7a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
