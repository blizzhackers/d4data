/**
 * Definition: t904ab211
 * Hash: 904ab211
 */

#include "t904ab211.h"

void t904ab211::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_ebf9bb4, base, current);
  current = ptr + 0x1c;
  readData(&flValue, base, current);
  ptr += 0x20;
}
