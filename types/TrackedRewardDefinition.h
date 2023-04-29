/**
 * Definition: TrackedRewardDefinition
 * Hash: 3e35a9ec
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TrackedRewardDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_ENUM<DT_INT> eStatType;
  DT_FLOAT flAmount;
  DT_SNO<SnoGroup::Aspect> snoAspect;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
