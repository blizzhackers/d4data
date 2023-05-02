/**
 * Definition: t1b50d66a
 * Hash: 1b50d66a
 */

#include "t1b50d66a.h"

void t1b50d66a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
