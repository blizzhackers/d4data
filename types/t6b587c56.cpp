/**
 * Definition: t6b587c56
 * Hash: 6b587c56
 */

#include "t6b587c56.h"

void t6b587c56::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&flRadius, base, current);
  ptr += 0x18;
}
