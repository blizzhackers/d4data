/**
 * Definition: FlagLookup
 * Hash: 7662dad4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct FlagLookup : public ComplexRead {
  DT_INT nIndex;
  DT_CHARARRAY<128> szLabel;
  DT_CHARARRAY<256> szDescription;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
