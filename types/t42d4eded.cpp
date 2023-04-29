/**
 * Definition: t42d4eded
 * Hash: 42d4eded
 */

#include "t42d4eded.h"

void t42d4eded::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&szPowerMod, base, ptr);
}
