/**
 * Definition: ActiveSkillSavedData
 * Hash: 88ddc168
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActiveSkillSavedData : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoSkill;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
