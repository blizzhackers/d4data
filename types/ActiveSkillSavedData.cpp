/**
 * Definition: ActiveSkillSavedData
 * Hash: 88ddc168
 */

#include "ActiveSkillSavedData.h"

void ActiveSkillSavedData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoSkill, base, current);
  ptr += 0x8;
}
