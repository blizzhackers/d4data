/**
 * Definition: t35789a1c
 * Hash: 35789a1c
 */

#include "t35789a1c.h"

void t35789a1c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_5a84245, base, current);
  current = ptr + 0x20;
  readData(&unk_b77ac70, base, current);
  current = ptr + 0x6b0;
  readData(&unk_83a373, base, current);
  current = ptr + 0x6c8;
  readData(&unk_2d36569, base, current);
  current = ptr + 0x6dc;
  readData(&unk_3a0e4a2, base, current);
  current = ptr + 0x6e4;
  readData(&unk_7f27ec0, base, current);
  current = ptr + 0x700;
  readData(&unk_980ba0f, base, current);
  ptr += 0x710;
}
