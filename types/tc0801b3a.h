/**
 * Definition: tc0801b3a
 * Hash: c0801b3a
 */

#pragma once

#include "../types.h"
#include "tdb09f2f3.h"

#pragma push(pack, 1)

struct tc0801b3a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tdb09f2f3> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
