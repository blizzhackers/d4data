/**
 * Definition: t53b4558e
 * Hash: 53b4558e
 */

#include "t53b4558e.h"

void t53b4558e::read(const char* base, char* &ptr) {
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
  readData(&eContactFrame, base, current);
  current = ptr + 0x1c;
  readData(&bOptional, base, current);
  ptr += 0x20;
}
