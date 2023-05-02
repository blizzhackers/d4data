/**
 * Definition: t35b56063
 * Hash: 35b56063
 */

#include "t35b56063.h"

void t35b56063::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&nMinLevel, base, current);
  current = ptr + 0x1c;
  readData(&nMaxLevel, base, current);
  ptr += 0x20;
}
