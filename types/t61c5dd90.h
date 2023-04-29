/**
 * Definition: t61c5dd90
 * Hash: 61c5dd90
 */

#pragma once

#include "../types.h"
#include "Triangle2D.h"

#pragma push(pack, 1)

struct t61c5dd90 : public ComplexRead {
  DT_UINT gbHeroDescription;
  DT_UINT IsLinearMessage;
  DT_UINT unk_af8195d;
  Triangle2D tTriangle;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
