/**
 * Definition: teda64360
 * Hash: eda64360
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct teda64360 : public ComplexRead {
  DT_UINT dwID;
  DT_UINT unk_28ca84b;
  DT_UINT unk_538cbc1;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::QuestChain>> unk_6752f3b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
