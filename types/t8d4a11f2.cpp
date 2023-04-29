/**
 * Definition: t8d4a11f2
 * Hash: 8d4a11f2
 */

#include "t8d4a11f2.h"

void t8d4a11f2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
