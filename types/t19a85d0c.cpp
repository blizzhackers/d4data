/**
 * Definition: t19a85d0c
 * Hash: 19a85d0c
 */

#include "t19a85d0c.h"

void t19a85d0c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eItemLabel, base, current);
  ptr += 0x20;
}
