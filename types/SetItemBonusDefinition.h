/**
 * Definition: SetItemBonusDefinition
 * Hash: da437ab
 */

#pragma once

#include "../types.h"
#include "tf6a78647.h"

#pragma push(pack, 1)

struct SetItemBonusDefinition : public ComplexRead {
  DT_VARIABLEARRAY<tf6a78647> ptTiers;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
