/**
 * Definition: t42d4eded
 * Hash: 42d4eded
 */

#include "t42d4eded.h"

void t42d4eded::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  current = ptr + 0x1c;
  readData(&snoPower, base, current);
  current = ptr + 0x20;
  readData(&szPowerMod, base, current);
  ptr += 0x28;
}
