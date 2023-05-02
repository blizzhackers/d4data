/**
 * Definition: t8f20d1aa
 * Hash: 8f20d1aa
 */

#include "t8f20d1aa.h"

void t8f20d1aa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
