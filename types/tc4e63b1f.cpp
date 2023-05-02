/**
 * Definition: tc4e63b1f
 * Hash: c4e63b1f
 */

#include "tc4e63b1f.h"

void tc4e63b1f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tName, base, current);
  current = ptr + 0x4;
  readData(&gbidType, base, current);
  current = ptr + 0x8;
  readData(&tMax, base, current);
  current = ptr + 0x28;
  readData(&tHealth, base, current);
  ptr += 0x70;
}
