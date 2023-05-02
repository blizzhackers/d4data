/**
 * Definition: t818076d1
 * Hash: 818076d1
 */

#include "t818076d1.h"

void t818076d1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwSeed, base, current);
  current = ptr + 0x4;
  readData(&dwCarry, base, current);
  ptr += 0x8;
}
