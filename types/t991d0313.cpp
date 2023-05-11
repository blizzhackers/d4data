/**
 * Definition: t991d0313
 * Hash: 991d0313
 */

#include "t991d0313.h"

void t991d0313::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eScrollbarStyle, base, current);
  current = ptr + 0x4;
  readData(&unk_730e7a0, base, current);
  current = ptr + 0x8;
  readData(&unk_5360c2, base, current);
  current = ptr + 0x10;
  readData(&unk_bdf8b74, base, current);
  current = ptr + 0x20;
  readData(&unk_3f3a302, base, current);
  current = ptr + 0x24;
  readData(&unk_7404c83, base, current);
  current = ptr + 0x28;
  readData(&eScrollbarVisibility, base, current);
  current = ptr + 0x2c;
  readData(&unk_58496c, base, current);
  current = ptr + 0x30;
  readData(&unk_26fb7aa, base, current);
  current = ptr + 0x34;
  readData(&unk_991ae81, base, current);
  current = ptr + 0x38;
  readData(&unk_ce2abaa, base, current);
  current = ptr + 0x3c;
  readData(&unk_aea1165, base, current);
  current = ptr + 0x40;
  readData(&unk_b66eab7, base, current);
  ptr += 0x48;
}
