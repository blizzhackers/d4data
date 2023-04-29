/**
 * Definition: tfc690c1d
 * Hash: fc690c1d
 */

#pragma once

#include "../types.h"
#include "td214b596.h"

#pragma push(pack, 1)

struct tfc690c1d : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<td214b596> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
