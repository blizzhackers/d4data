/**
 * Definition: t833be23b
 * Hash: 833be23b
 */

#include "t833be23b.h"

void t833be23b::read(const char* base, char* &ptr) {
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
  readData(&snoItem, base, current);
  current = ptr + 0x24;
  readData(&nItemCount, base, current);
  current = ptr + 0x28;
  readData(&unk_f0998ad, base, current);
  ptr += 0x30;
}
