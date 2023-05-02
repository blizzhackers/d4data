/**
 * Definition: t49b186af
 * Hash: 49b186af
 */

#include "t49b186af.h"

void t49b186af::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
