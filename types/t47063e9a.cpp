/**
 * Definition: t47063e9a
 * Hash: 47063e9a
 */

#include "t47063e9a.h"

void t47063e9a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&vValue, base, current);
  ptr += 0x20;
}
