/**
 * Definition: t2b27b554
 * Hash: 2b27b554
 */

#pragma once

#include "../types.h"
#include "t7110c154.h"

#pragma push(pack, 1)

struct t2b27b554 : public ComplexRead {
  DT_UINT dwUnlockLevel;
  DT_UINT unk_8b0c045;
  DT_SNO<SnoGroup::Quest> unk_b7d2154;
  DT_VARIABLEARRAY<t7110c154> unk_8bd010;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
