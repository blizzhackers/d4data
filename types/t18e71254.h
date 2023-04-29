/**
 * Definition: t18e71254
 * Hash: 18e71254
 */

#pragma once

#include "../types.h"
#include "t65341e8d.h"

#pragma push(pack, 1)

struct t18e71254 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t65341e8d> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
