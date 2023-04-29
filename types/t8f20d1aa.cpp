/**
 * Definition: t8f20d1aa
 * Hash: 8f20d1aa
 */

#include "t8f20d1aa.h"

void t8f20d1aa::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
