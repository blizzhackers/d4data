/**
 * Definition: t1d369ba4
 * Hash: 1d369ba4
 */

#include "t1d369ba4.h"

void t1d369ba4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idLevelArea, base, current);
  current = ptr + 0x14;
  readData(&gbidType, base, current);
  current = ptr + 0x18;
  readData(&unk_2b95c58, base, current);
  current = ptr + 0x1c;
  readData(&nGroupIndex, base, current);
  current = ptr + 0x20;
  readData(&unk_5862894, base, current);
  ptr += 0x24;
}
