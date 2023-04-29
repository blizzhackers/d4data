/**
 * Definition: HairColorDefinition
 * Hash: e952f88c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct HairColorDefinition : public ComplexRead {
  DT_INT nSortOrder;
  DT_FIXEDARRAY<DT_INT, 5> unk_9da2273;
  DT_FIXEDARRAY<DT_RGBACOLOR, 3> unk_b29fdae;
  DT_FLOAT unk_49f94ee;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
