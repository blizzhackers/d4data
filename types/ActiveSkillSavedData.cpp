/**
 * Definition: ActiveSkillSavedData
 * Hash: 88ddc168
 */

#include "ActiveSkillSavedData.h"

void ActiveSkillSavedData::read(const char* base, char* &ptr) {
  readData(&snoSkill, base, ptr);
}
