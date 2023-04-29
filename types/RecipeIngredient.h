/**
 * Definition: RecipeIngredient
 * Hash: 515f8ac1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct RecipeIngredient : public ComplexRead {
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_SNO<SnoGroup::Item> snoItem;
  DT_UINT nQuantity;
  DT_INT unk_9912dc7;
  DT_INT unk_20e0a16;
  DT_RANGE<DT_INT> unk_a6432a8;
  DT_GBID<0x16> unk_86b80f6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
