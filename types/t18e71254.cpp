/**
 * Definition: t18e71254
 * Hash: 18e71254
 */

#include "t18e71254.h"

void t18e71254::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
