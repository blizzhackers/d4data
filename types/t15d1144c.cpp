/**
 * Definition: t15d1144c
 * Hash: 15d1144c
 */

#include "t15d1144c.h"

void t15d1144c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
