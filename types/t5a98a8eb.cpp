/**
 * Definition: t5a98a8eb
 * Hash: 5a98a8eb
 */

#include "t5a98a8eb.h"

void t5a98a8eb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&vValue, base, current);
  ptr += 0x20;
}
