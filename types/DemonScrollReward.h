/**
 * Definition: DemonScrollReward
 * Hash: d060d1c7
 */

#pragma once

#include "../types.h"
#include "ItemSpecifierData.h"

#pragma push(pack, 1)

struct DemonScrollReward : public ComplexRead {
  DT_FIXEDARRAY<ItemSpecifierData, 3> arItems;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
