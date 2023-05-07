/**
 * Definition: ChallengeCategory
 * Hash: 7115741
 */

#pragma once

#include "../types.h"
#include "ChallengeCategory.h"

#pragma push(pack, 1)

struct ChallengeCategory : public ComplexRead {
  DT_UINT dwID;
  DT_VARIABLEARRAY<ChallengeCategory> arCategories;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Achievement>> unk_4e65fff;
  DT_UINT uFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
