/**
 * Definition: t16b4bfab
 * Hash: 16b4bfab
 */

#include "t16b4bfab.h"

void t16b4bfab::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
