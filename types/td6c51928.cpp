/**
 * Definition: td6c51928
 * Hash: d6c51928
 */

#include "td6c51928.h"

void td6c51928::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_2fcab5a, base, current);
  ptr += 0x20;
}
