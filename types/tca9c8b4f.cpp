/**
 * Definition: tca9c8b4f
 * Hash: ca9c8b4f
 */

#include "tca9c8b4f.h"

void tca9c8b4f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x14;
  readData(&unk_a0febeb, base, current);
  current = ptr + 0x18;
  readData(&tPhaseName, base, current);
  ptr += 0x20;
}
