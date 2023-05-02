/**
 * Definition: t16b4bfab
 * Hash: 16b4bfab
 */

#include "t16b4bfab.h"

void t16b4bfab::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
