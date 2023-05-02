/**
 * Definition: ta84b96e7
 * Hash: a84b96e7
 */

#include "ta84b96e7.h"

void ta84b96e7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&flRange, base, current);
  ptr += 0x20;
}
