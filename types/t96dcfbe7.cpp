/**
 * Definition: t96dcfbe7
 * Hash: 96dcfbe7
 */

#include "t96dcfbe7.h"

void t96dcfbe7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
