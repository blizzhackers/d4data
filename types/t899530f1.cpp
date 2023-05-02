/**
 * Definition: t899530f1
 * Hash: 899530f1
 */

#include "t899530f1.h"

void t899530f1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eFilterInequality, base, current);
  current = ptr + 0x1c;
  readData(&flTime, base, current);
  ptr += 0x20;
}
