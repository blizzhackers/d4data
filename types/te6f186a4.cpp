/**
 * Definition: te6f186a4
 * Hash: e6f186a4
 */

#include "te6f186a4.h"

void te6f186a4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
