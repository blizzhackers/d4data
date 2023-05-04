/**
 * Definition: t18e71254
 * Hash: 18e71254
 */

#pragma once

#include "../types.h"
#include "AIPropType.h"

#pragma push(pack, 1)

struct t18e71254 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<AIPropType> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
