/**
 * Definition: tc05b111b
 * Hash: c05b111b
 */

#include "tc05b111b.h"

void tc05b111b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_283d1ad, base, current);
  current = ptr + 0x1c;
  readData(&szValue, base, current);
  ptr += 0x20;
}
