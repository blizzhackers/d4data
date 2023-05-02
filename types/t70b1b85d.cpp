/**
 * Definition: t70b1b85d
 * Hash: 70b1b85d
 */

#include "t70b1b85d.h"

void t70b1b85d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tSecondaryGroup, base, current);
  ptr += 0x60;
}
