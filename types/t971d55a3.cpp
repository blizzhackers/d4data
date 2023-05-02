/**
 * Definition: t971d55a3
 * Hash: 971d55a3
 */

#include "t971d55a3.h"

void t971d55a3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
