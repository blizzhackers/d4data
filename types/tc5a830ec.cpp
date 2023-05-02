/**
 * Definition: tc5a830ec
 * Hash: c5a830ec
 */

#include "tc5a830ec.h"

void tc5a830ec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_362349d, base, current);
  current = ptr + 0x14;
  readData(&nPadding, base, current);
  ptr += 0x18;
}
