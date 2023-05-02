/**
 * Definition: t77f55e04
 * Hash: 77f55e04
 */

#include "t77f55e04.h"

void t77f55e04::read(const char* base, char* &ptr) {
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
