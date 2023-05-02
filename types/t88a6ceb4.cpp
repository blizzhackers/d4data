/**
 * Definition: t88a6ceb4
 * Hash: 88a6ceb4
 */

#include "t88a6ceb4.h"

void t88a6ceb4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&unk_f489816, base, current);
  current = ptr + 0x24;
  readData(&flValue, base, current);
  current = ptr + 0x28;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x30;
}
