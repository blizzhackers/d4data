/**
 * Definition: ActiveSkillEntry
 * Hash: 3401e7cd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActiveSkillEntry : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPower;
  DT_INT unk_cc81097;
  DT_INT nLevelReq;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
