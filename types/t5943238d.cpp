/**
 * Definition: t5943238d
 * Hash: 5943238d
 */

#include "t5943238d.h"

void t5943238d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_362349d, base, current);
  current = ptr + 0x14;
  readData(&nPadding, base, current);
  current = ptr + 0x18;
  readData(&unk_f265759, base, current);
  current = ptr + 0x1c;
  readData(&unk_4600a2c, base, current);
  current = ptr + 0x20;
  readData(&unk_4b5cdbd, base, current);
  ptr += 0x28;
}
