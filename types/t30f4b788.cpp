/**
 * Definition: t30f4b788
 * Hash: 30f4b788
 */

#include "t30f4b788.h"

void t30f4b788::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
