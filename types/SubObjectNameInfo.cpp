/**
 * Definition: SubObjectNameInfo
 * Hash: c4bb496e
 */

#include "SubObjectNameInfo.h"

void SubObjectNameInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x4;
  readData(&dwFlags, base, current);
  current = ptr + 0x8;
  readData(&unk_551fc93, base, current);
  current = ptr + 0x9;
  readData(&dwState, base, current);
  current = ptr + 0xc;
  readData(&dwStyle, base, current);
  current = ptr + 0x10;
  readData(&unk_82bbe21, base, current);
  current = ptr + 0x14;
  readData(&unk_d9c73f4, base, current);
  current = ptr + 0x18;
  readData(&unk_a6e7ff2, base, current);
  current = ptr + 0x1c;
  readData(&unk_c15f7d2, base, current);
  current = ptr + 0x20;
  readData(&unk_92fdd14, base, current);
  current = ptr + 0x24;
  readData(&unk_b0b7d46, base, current);
  ptr += 0x28;
}
