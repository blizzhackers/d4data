/**
 * Definition: PowerConditionHasDamage
 * Hash: b03ec38f
 */

#include "PowerConditionHasDamage.h"

void PowerConditionHasDamage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
