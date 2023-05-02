/**
 * Definition: t2f8a81aa
 * Hash: 2f8a81aa
 */

#include "t2f8a81aa.h"

void t2f8a81aa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&vValue, base, current);
  ptr += 0x20;
}
