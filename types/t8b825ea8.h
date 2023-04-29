/**
 * Definition: t8b825ea8
 * Hash: 8b825ea8
 */

#pragma once

#include "../types.h"
#include "t34b1bbe1.h"

#pragma push(pack, 1)

struct t8b825ea8 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t34b1bbe1> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
