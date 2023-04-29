/**
 * Definition: t5f4a7e9f
 * Hash: 5f4a7e9f
 */

#include "t5f4a7e9f.h"

void t5f4a7e9f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
