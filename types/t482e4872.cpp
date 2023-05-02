/**
 * Definition: t482e4872
 * Hash: 482e4872
 */

#include "t482e4872.h"

void t482e4872::read(const char* base, char* &ptr) {
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
