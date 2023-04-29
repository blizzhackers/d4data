/**
 * Definition: t6ce94c9b
 * Hash: 6ce94c9b
 */

#include "t6ce94c9b.h"

void t6ce94c9b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
