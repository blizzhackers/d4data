/**
 * Definition: SkillTreeReward
 * Hash: ba05ef94
 */

#include "SkillTreeReward.h"

void SkillTreeReward::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&eType, base, current);
  current = ptr + 0x108;
  readData(&snoPower, base, current);
  current = ptr + 0x10c;
  readData(&szPowerMod, base, current);
  current = ptr + 0x110;
  readData(&dwMaxTalentRanks, base, current);
  ptr += 0x114;
}
