/**
 * Definition: t8b825ea8
 * Hash: 8b825ea8
 */

#include "t8b825ea8.h"

void t8b825ea8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
