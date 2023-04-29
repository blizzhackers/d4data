/**
 * Definition: tc388f239
 * Hash: c388f239
 */

#pragma once

#include "../types.h"
#include "t8a3936b2.h"

#pragma push(pack, 1)

struct tc388f239 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t8a3936b2> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
