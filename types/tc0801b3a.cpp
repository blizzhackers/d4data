/**
 * Definition: tc0801b3a
 * Hash: c0801b3a
 */

#include "tc0801b3a.h"

void tc0801b3a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
