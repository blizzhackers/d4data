/**
 * Definition: ChallengeDefinition
 * Hash: 3ef83c2c
 */

#pragma once

#include "../types.h"
#include "ChallengeCategory.h"

#pragma push(pack, 1)

struct ChallengeDefinition : public ComplexRead {
  DT_UINT dwNextID;
  DT_VARIABLEARRAY<ChallengeCategory> arCategories;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
