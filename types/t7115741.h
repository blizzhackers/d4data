/**
 * Definition: t7115741
 * Hash: 7115741
 */

#pragma once

#include "../types.h"
#include "t7115741.h"

#pragma push(pack, 1)

struct t7115741 : public ComplexRead {
  DT_UINT dwID;
  DT_VARIABLEARRAY<t7115741> arCategories;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Achievement>> unk_4e65fff;
  DT_UINT uFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
