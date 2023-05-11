/**
 * Definition: CrafterDefinition
 * Hash: c7bf37d0
 */

#pragma once

#include "../types.h"
#include "RecipeTier.h"
#include "t7705c56a.h"
#include "tc661a6fd.h"

#pragma push(pack, 1)

struct CrafterDefinition : public ComplexRead {
  DT_UINT dwNextID;
  DT_ENUM<DT_INT> eCrafterType;
  DT_SNO<SnoGroup::Condition> unk_a34d0af;
  DT_VARIABLEARRAY<tc661a6fd> arTabs;
  DT_VARIABLEARRAY<RecipeTier> arRecipeTiers;
  DT_VARIABLEARRAY<t7705c56a> unk_3668490;
  DT_VARIABLEARRAY<t7705c56a> unk_aa9dad7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
