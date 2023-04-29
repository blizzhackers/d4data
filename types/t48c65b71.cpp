/**
 * Definition: t48c65b71
 * Hash: 48c65b71
 */

#include "t48c65b71.h"

void t48c65b71::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
