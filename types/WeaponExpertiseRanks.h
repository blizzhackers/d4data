/**
 * Definition: WeaponExpertiseRanks
 * Hash: 47f33ce2
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"
#include "WeaponExpertiseRank.h"

#pragma push(pack, 1)

struct WeaponExpertiseRanks : public ComplexRead {
  GBIDHeader tHeader;
  DT_VARIABLEARRAY<WeaponExpertiseRank> arRanks;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
