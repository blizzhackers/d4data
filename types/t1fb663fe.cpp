/**
 * Definition: t1fb663fe
 * Hash: 1fb663fe
 */

#include "t1fb663fe.h"

void t1fb663fe::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
