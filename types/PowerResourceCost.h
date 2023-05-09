/**
 * Definition: PowerResourceCost
 * Hash: 9bf9054e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PowerResourceCost : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_STRING_FORMULA tMinRequired;
  DT_STRING_FORMULA tInitialCost;
  DT_STRING_FORMULA unk_26286d0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
