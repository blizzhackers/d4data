/**
 * Definition: ta5893491
 * Hash: a5893491
 */

#include "ta5893491.h"

void ta5893491::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eDamageType, base, current);
  ptr += 0x20;
}
