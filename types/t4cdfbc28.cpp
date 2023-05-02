/**
 * Definition: t4cdfbc28
 * Hash: 4cdfbc28
 */

#include "t4cdfbc28.h"

void t4cdfbc28::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&dwValue, base, current);
  ptr += 0x20;
}
