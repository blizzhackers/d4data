/**
 * Definition: t924ae201
 * Hash: 924ae201
 */

#pragma once

#include "../types.h"
#include "t9bdeeb8c.h"

#pragma push(pack, 1)

struct t924ae201 : public ComplexRead {
  DT_UINT sName;
  DT_FIXEDARRAY<DT_UINT, 4> arComponents;
  t9bdeeb8c tColorSet;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
