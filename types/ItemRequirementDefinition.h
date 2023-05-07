/**
 * Definition: ItemRequirementDefinition
 * Hash: e40b6a09
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ItemRequirementDefinition : public ComplexRead {
  DT_INT bAnyWeapon;
  DT_INT bDualWielding;
  DT_INT unk_901b272;
  DT_INT unk_24a783;
  DT_INT unk_9f5f4cb;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> arItemLabels;
  DT_UINT unk_853db38;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
