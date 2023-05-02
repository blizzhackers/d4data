/**
 * Definition: ta4b92c0c
 * Hash: a4b92c0c
 */

#include "ta4b92c0c.h"

void ta4b92c0c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_283d1ad, base, current);
  ptr += 0x20;
}
