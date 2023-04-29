/**
 * Definition: t99e79b59
 * Hash: 99e79b59
 */

#include "t99e79b59.h"

void t99e79b59::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
