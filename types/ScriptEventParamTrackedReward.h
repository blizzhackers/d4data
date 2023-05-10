/**
 * Definition: ScriptEventParamTrackedReward
 * Hash: e47cc1cb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScriptEventParamTrackedReward : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::TrackedReward> snoTrackedReward;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
