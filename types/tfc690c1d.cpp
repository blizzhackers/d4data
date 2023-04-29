/**
 * Definition: tfc690c1d
 * Hash: fc690c1d
 */

#include "tfc690c1d.h"

void tfc690c1d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
