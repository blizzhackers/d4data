/**
 * Definition: RecipeDefinition
 * Hash: 991bc5e1
 */

#pragma once

#include "../types.h"
#include "ItemSpecifierData.h"
#include "RecipeIngredient.h"
#include "t78541b1a.h"

#pragma push(pack, 1)

struct RecipeDefinition : public ComplexRead {
  ItemSpecifierData tSpecificItem;
  DT_INT unk_e729dfb;
  DT_RANGE<DT_INT> unk_80fd44d;
  DT_SNO<SnoGroup::Item> snoItem;
  DT_ENUM<DT_INT> eCrafterType;
  DT_ENUM<DT_INT> eRecipeType;
  DT_UINT dwFlags;
  DT_INT unk_2fa5b31;
  DT_UINT nCost;
  DT_GBID<0x16> unk_3046a06;
  DT_GBID<0x16> unk_86b80f6;
  DT_VARIABLEARRAY<RecipeIngredient> arIngredients;
  DT_VARIABLEARRAY<t78541b1a> unk_c05e260;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
