/**
 * Definition: t79b4d566
 * Hash: 79b4d566
 */

#include "t79b4d566.h"

void t79b4d566::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
