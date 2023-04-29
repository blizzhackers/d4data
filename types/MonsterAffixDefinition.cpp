/**
 * Definition: MonsterAffixDefinition
 * Hash: 1bf517ff
 */

#include "MonsterAffixDefinition.h"

void MonsterAffixDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&bShown, base, ptr);
  readData(&snoOnDeathPower, base, ptr);
  readData(&snoSpawnPower, base, ptr);
  readData(&hIcon, base, ptr);
}
