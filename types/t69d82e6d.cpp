/**
 * Definition: t69d82e6d
 * Hash: 69d82e6d
 */

#include "t69d82e6d.h"

void t69d82e6d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&nMinimum, base, current);
  ptr += 0x38;
}
