/**
 * Definition: t5d4bac71
 * Hash: 5d4bac71
 */

#include "t5d4bac71.h"

void t5d4bac71::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
