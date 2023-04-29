/**
 * Definition: t58b25647
 * Hash: 58b25647
 */

#include "t58b25647.h"

void t58b25647::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
