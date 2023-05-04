/**
 * Definition: WeaponExpertiseRank
 * Hash: 2135ea8f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct WeaponExpertiseRank : public ComplexRead {
  DT_UINT unk_5ec4d3d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
