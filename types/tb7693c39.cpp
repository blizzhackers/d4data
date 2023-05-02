/**
 * Definition: tb7693c39
 * Hash: b7693c39
 */

#include "tb7693c39.h"

void tb7693c39::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tPrimaryGroup, base, current);
  ptr += 0x60;
}
