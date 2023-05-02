/**
 * Definition: t5c83eb6c
 * Hash: 5c83eb6c
 */

#include "t5c83eb6c.h"

void t5c83eb6c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&dwHash, base, current);
  current = ptr + 0x20;
  readData(&szString, base, current);
  ptr += 0x30;
}
