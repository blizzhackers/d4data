/**
 * Definition: HirelingInfo
 * Hash: 7fb7c55e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct HirelingInfo : public ComplexRead {
  DT_ENUM<DT_INT> eClass;
  DT_GBID<0xffffffff> gbidName;
  DT_INT fDead;
  DT_FIXEDARRAY<DT_INT, 5> arnPowerKeyParam;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
