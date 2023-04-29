/**
 * Definition: TriggerConditions
 * Hash: 34f409ce
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TriggerConditions : public ComplexRead {
  DT_FLOAT flChance;
  DT_INT bMute;
  DT_INT unk_1db3ba0;
  DT_FLOAT tDelay;
  DT_RANGE<DT_INT> unk_f0d960e;
  DT_RANGE<DT_INT> unk_1dcbf67;
  DT_ENUM<DT_INT> eMaterial;
  DT_UINT dwConditionFlags;
  DT_ENUM<DT_INT> unk_817e082;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
