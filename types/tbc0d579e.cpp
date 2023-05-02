/**
 * Definition: tbc0d579e
 * Hash: bc0d579e
 */

#include "tbc0d579e.h"

void tbc0d579e::read(const char* base, char* &ptr) {
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
  readData(&unk_87704fc, base, current);
  current = ptr + 0x1c;
  readData(&unk_efeb206, base, current);
  current = ptr + 0x20;
  readData(&unk_da48774, base, current);
  current = ptr + 0x30;
  readData(&unk_c69f784, base, current);
  current = ptr + 0x40;
  readData(&unk_b9d90d5, base, current);
  current = ptr + 0x44;
  readData(&unk_d661bef, base, current);
  current = ptr + 0x48;
  readData(&unk_1ec53df, base, current);
  ptr += 0x50;
}
