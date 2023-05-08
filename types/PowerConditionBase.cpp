/**
 * Definition: PowerConditionBase
 * Hash: e196846f
 */

#include "PowerConditionBase.h"

void PowerConditionBase::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
