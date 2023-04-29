/**
 * Definition: t9d10d0d6
 * Hash: 9d10d0d6
 */

#include "t9d10d0d6.h"

void t9d10d0d6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_40d56a2, base, ptr);
}
