/**
 * Definition: t6dfbcf0d
 * Hash: 6dfbcf0d
 */

#include "t6dfbcf0d.h"

void t6dfbcf0d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoPower, base, current);
  current = ptr + 0x1c;
  readData(&unk_53f5f18, base, current);
  ptr += 0x20;
}
