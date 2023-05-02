/**
 * Definition: t5c24b1a8
 * Hash: 5c24b1a8
 */

#include "t5c24b1a8.h"

void t5c24b1a8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d197453, base, current);
  current = ptr + 0x4;
  readData(&unk_d04c24c, base, current);
  current = ptr + 0x8;
  readData(&eButtonIconAlignment, base, current);
  current = ptr + 0xc;
  readData(&unk_2835907, base, current);
  current = ptr + 0x10;
  readData(&unk_57295f6, base, current);
  current = ptr + 0x14;
  readData(&unk_57295f7, base, current);
  current = ptr + 0x18;
  readData(&unk_2330cbf, base, current);
  current = ptr + 0x1c;
  readData(&unk_a2c2344, base, current);
  current = ptr + 0x20;
  readData(&unk_56f24f5, base, current);
  current = ptr + 0x24;
  readData(&unk_5a90f13, base, current);
  current = ptr + 0x28;
  readData(&unk_fca1727, base, current);
  current = ptr + 0x2c;
  readData(&fLeft, base, current);
  current = ptr + 0x30;
  readData(&fTop, base, current);
  ptr += 0x34;
}
