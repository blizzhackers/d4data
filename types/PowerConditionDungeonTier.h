/**
 * Definition: PowerConditionDungeonTier
 * Hash: 366480b8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PowerConditionDungeonTier : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eTier;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
