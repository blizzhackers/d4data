/**
 * Definition: t9372549b
 * Hash: 9372549b
 */

#include "t9372549b.h"

void t9372549b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
