/**
 * Definition: t19a85d0c
 * Hash: 19a85d0c
 */

#include "t19a85d0c.h"

void t19a85d0c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eItemLabel, base, ptr);
}
