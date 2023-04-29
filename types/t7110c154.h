/**
 * Definition: t7110c154
 * Hash: 7110c154
 */

#pragma once

#include "../types.h"
#include "tf6f2f514.h"

#pragma push(pack, 1)

struct t7110c154 : public ComplexRead {
  DT_SNO<SnoGroup::ItemType> snoItemType;
  DT_SNO<SnoGroup::Power> snoPassivePower;
  DT_GBID<0x2f> gbidRanks;
  DT_VARIABLEARRAY<tf6f2f514> unk_872c837;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
