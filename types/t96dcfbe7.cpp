/**
 * Definition: t96dcfbe7
 * Hash: 96dcfbe7
 */

#include "t96dcfbe7.h"

void t96dcfbe7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
