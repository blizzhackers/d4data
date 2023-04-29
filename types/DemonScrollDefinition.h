/**
 * Definition: DemonScrollDefinition
 * Hash: 4a9871eb
 */

#pragma once

#include "../types.h"
#include "DemonScrollReward.h"

#pragma push(pack, 1)

struct DemonScrollDefinition : public ComplexRead {
  DT_FIXEDARRAY<DemonScrollReward, 5> arRewards;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
