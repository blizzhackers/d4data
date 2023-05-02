/**
 * Definition: t7de5a3b2
 * Hash: 7de5a3b2
 */

#include "t7de5a3b2.h"

void t7de5a3b2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&flMinValue, base, current);
  current = ptr + 0x1c;
  readData(&flMaxValue, base, current);
  ptr += 0x20;
}
