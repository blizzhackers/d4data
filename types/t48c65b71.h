/**
 * Definition: t48c65b71
 * Hash: 48c65b71
 */

#pragma once

#include "../types.h"
#include "t1ece15ea.h"

#pragma push(pack, 1)

struct t48c65b71 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t1ece15ea> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
