/**
 * Definition: t1278617b
 * Hash: 1278617b
 */

#include "t1278617b.h"

void t1278617b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
