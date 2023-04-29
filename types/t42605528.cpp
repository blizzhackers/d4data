/**
 * Definition: t42605528
 * Hash: 42605528
 */

#include "t42605528.h"

void t42605528::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
