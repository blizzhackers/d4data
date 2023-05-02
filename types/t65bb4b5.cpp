/**
 * Definition: t65bb4b5
 * Hash: 65bb4b5
 */

#include "t65bb4b5.h"

void t65bb4b5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&bIsPlayer, base, current);
  ptr += 0x20;
}
