/**
 * Definition: ta5c1f30e
 * Hash: a5c1f30e
 */

#include "ta5c1f30e.h"

void ta5c1f30e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
