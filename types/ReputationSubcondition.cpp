/**
 * Definition: ReputationSubcondition
 * Hash: 8c5e391c
 */

#include "ReputationSubcondition.h"

void ReputationSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tPair, base, current);
  ptr += 0x20;
}
