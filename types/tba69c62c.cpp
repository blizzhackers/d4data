/**
 * Definition: tba69c62c
 * Hash: ba69c62c
 */

#include "tba69c62c.h"

void tba69c62c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_9af876f, base, current);
  ptr += 0x20;
}
