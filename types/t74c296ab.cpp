/**
 * Definition: t74c296ab
 * Hash: 74c296ab
 */

#include "t74c296ab.h"

void t74c296ab::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
