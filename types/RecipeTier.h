/**
 * Definition: RecipeTier
 * Hash: 3d289d6c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct RecipeTier : public ComplexRead {
  DT_INT nRequiredLevel;
  DT_INT nGoldCost;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Recipe>> arRecipes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
