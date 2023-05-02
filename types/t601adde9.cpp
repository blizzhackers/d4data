/**
 * Definition: t601adde9
 * Hash: 601adde9
 */

#include "t601adde9.h"

void t601adde9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&idValue, base, current);
  ptr += 0x20;
}
