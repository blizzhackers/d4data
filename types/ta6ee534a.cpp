/**
 * Definition: ta6ee534a
 * Hash: a6ee534a
 */

#include "ta6ee534a.h"

void ta6ee534a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
