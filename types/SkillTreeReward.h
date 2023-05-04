/**
 * Definition: SkillTreeReward
 * Hash: ba05ef94
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct SkillTreeReward : public ComplexRead {
  GBIDHeader tHeader;
  DT_ENUM<DT_INT> eType;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT szPowerMod;
  DT_UINT dwMaxTalentRanks;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
