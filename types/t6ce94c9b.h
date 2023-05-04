/**
 * Definition: t6ce94c9b
 * Hash: 6ce94c9b
 */

#pragma once

#include "../types.h"
#include "SkillTreeReward.h"

#pragma push(pack, 1)

struct t6ce94c9b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<SkillTreeReward> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
