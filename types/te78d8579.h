/**
 * Definition: te78d8579
 * Hash: e78d8579
 */

#pragma once

#include "../types.h"
#include "t248771f6.h"

#pragma push(pack, 1)

struct te78d8579 : public ComplexRead {
  DT_INT unk_b3f7acb;
  DT_INT unk_b22ae3c;
  t248771f6 tTangents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
