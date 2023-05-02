/**
 * Definition: tec4749c2
 * Hash: ec4749c2
 */

#include "tec4749c2.h"

void tec4749c2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_b23f628, base, current);
  ptr += 0x20;
}
