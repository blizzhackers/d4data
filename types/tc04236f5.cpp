/**
 * Definition: tc04236f5
 * Hash: c04236f5
 */

#include "tc04236f5.h"

void tc04236f5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
