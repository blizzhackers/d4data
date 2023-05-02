/**
 * Definition: t8dc0ff21
 * Hash: 8dc0ff21
 */

#include "t8dc0ff21.h"

void t8dc0ff21::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&vValue, base, current);
  ptr += 0x20;
}
