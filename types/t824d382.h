/**
 * Definition: t824d382
 * Hash: 824d382
 */

#pragma once

#include "../types.h"
#include "tc2bc153b.h"

#pragma push(pack, 1)

struct t824d382 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tc2bc153b> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
