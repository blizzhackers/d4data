/**
 * Definition: t56dcc16f
 * Hash: 56dcc16f
 */

#include "t56dcc16f.h"

void t56dcc16f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
