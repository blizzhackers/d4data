/**
 * Definition: t300a1e1b
 * Hash: 300a1e1b
 */

#include "t300a1e1b.h"

void t300a1e1b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&unk_2de4987, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&bEnd, base, current);
  current = ptr + 0x34;
  readData(&dwPad, base, current);
  current = ptr + 0x38;
  readData(&unk_b8abd18, base, current);
  ptr += 0x40;
}
