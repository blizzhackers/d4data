/**
 * Definition: t25b4545f
 * Hash: 25b4545f
 */

#include "t25b4545f.h"

void t25b4545f::read(const char* base, char* &ptr) {
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
  current = ptr + 0x1c;
  readData(&eContactFrame, base, current);
  current = ptr + 0x20;
  readData(&bOptional, base, current);
  ptr += 0x28;
}
