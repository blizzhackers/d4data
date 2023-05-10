/**
 * Definition: PowerConditionHasHealth
 * Hash: b9d56406
 */

#include "PowerConditionHasHealth.h"

void PowerConditionHasHealth::read(const char* base, char* &ptr) {
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
  readData(&flHealthPercent, base, current);
  ptr += 0x20;
}
