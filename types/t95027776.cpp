/**
 * Definition: t95027776
 * Hash: 95027776
 */

#include "t95027776.h"

void t95027776::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&nValue, base, current);
  ptr += 0x20;
}
