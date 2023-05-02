/**
 * Definition: t50f134c7
 * Hash: 50f134c7
 */

#include "t50f134c7.h"

void t50f134c7::read(const char* base, char* &ptr) {
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
