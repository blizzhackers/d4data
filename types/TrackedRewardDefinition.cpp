/**
 * Definition: TrackedRewardDefinition
 * Hash: 3e35a9ec
 */

#include "TrackedRewardDefinition.h"

void TrackedRewardDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eType, base, ptr);
  readData(&eStatType, base, ptr);
  readData(&flAmount, base, ptr);
  readData(&snoAspect, base, ptr);
}
