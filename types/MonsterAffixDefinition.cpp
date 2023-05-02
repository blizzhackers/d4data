/**
 * Definition: MonsterAffixDefinition
 * Hash: 1bf517ff
 */

#include "MonsterAffixDefinition.h"

void MonsterAffixDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&bShown, base, current);
  current = ptr + 0xc;
  readData(&snoOnDeathPower, base, current);
  current = ptr + 0x10;
  readData(&snoSpawnPower, base, current);
  current = ptr + 0x14;
  readData(&hIcon, base, current);
  ptr += 0x18;
}
