/**
 * Definition: t553ae3d5
 * Hash: 553ae3d5
 */

#include "t553ae3d5.h"

void t553ae3d5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x14;
  readData(&unk_a0febeb, base, current);
  ptr += 0x18;
}
