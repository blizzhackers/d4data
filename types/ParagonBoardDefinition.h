/**
 * Definition: ParagonBoardDefinition
 * Hash: b412b2d9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ParagonBoardDefinition : public ComplexRead {
  DT_UINT nWidth;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::ParagonNode>> arEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
