/**
 * Definition: taf401a3a
 * Hash: af401a3a
 */

#include "taf401a3a.h"

void taf401a3a::read(const char* base, char* &ptr) {
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
  readData(&snoWorldState, base, current);
  current = ptr + 0x24;
  readData(&nValue, base, current);
  ptr += 0x28;
}
