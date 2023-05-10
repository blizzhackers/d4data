/**
 * Definition: PowerConditionIsPower
 * Hash: cd7907d
 */

#include "PowerConditionIsPower.h"

void PowerConditionIsPower::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoPower, base, current);
  ptr += 0x20;
}
