/**
 * Definition: t474afa29
 * Hash: 474afa29
 */

#include "t474afa29.h"

void t474afa29::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&flDistance, base, current);
  ptr += 0x20;
}
