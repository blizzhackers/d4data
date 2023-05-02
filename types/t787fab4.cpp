/**
 * Definition: t787fab4
 * Hash: 787fab4
 */

#include "t787fab4.h"

void t787fab4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&vValue, base, current);
  ptr += 0x20;
}
