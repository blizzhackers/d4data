/**
 * Definition: t81a64b0
 * Hash: 81a64b0
 */

#include "t81a64b0.h"

void t81a64b0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tInstanceData, base, current);
  ptr += 0x98;
}
