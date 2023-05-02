/**
 * Definition: TrackedRewardDefinition
 * Hash: 3e35a9ec
 */

#include "TrackedRewardDefinition.h"

void TrackedRewardDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eType, base, current);
  current = ptr + 0xc;
  readData(&eStatType, base, current);
  current = ptr + 0x10;
  readData(&flAmount, base, current);
  current = ptr + 0x14;
  readData(&snoAspect, base, current);
  ptr += 0x18;
}
