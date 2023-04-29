/**
 * Definition: ChallengeDefinition
 * Hash: 3ef83c2c
 */

#pragma once

#include "../types.h"
#include "t7115741.h"

#pragma push(pack, 1)

struct ChallengeDefinition : public ComplexRead {
  DT_UINT dwNextID;
  DT_VARIABLEARRAY<t7115741> arCategories;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
