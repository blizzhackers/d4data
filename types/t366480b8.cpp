/**
 * Definition: t366480b8
 * Hash: 366480b8
 */

#include "t366480b8.h"

void t366480b8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eTier, base, current);
  ptr += 0x20;
}
