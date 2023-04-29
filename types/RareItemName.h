/**
 * Definition: RareItemName
 * Hash: 2b84ef7a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct RareItemName : public ComplexRead {
  DT_INT fItemNameIsPrefix;
  DT_SNO<SnoGroup::StringList> snoAffixStringList;
  DT_INT nAffixStringListIndex;
  DT_INT nItemStringListIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
