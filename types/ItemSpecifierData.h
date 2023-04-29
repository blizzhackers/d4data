/**
 * Definition: ItemSpecifierData
 * Hash: d1670183
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ItemSpecifierData : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItemToDrop;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Affix>, 4> snoAffixes;
  DT_INT nNumAffixes;
  DT_INT bAccountBound;
  DT_RANGE<DT_INT> unk_aab1fc1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
