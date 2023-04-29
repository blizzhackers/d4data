/**
 * Definition: t7de8fcbd
 * Hash: 7de8fcbd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7de8fcbd : public ComplexRead {
  DT_RANGE<DT_INT> unk_6ed9d36;
  DT_FLOAT unk_6a86924;
  DT_FLOAT unk_d3735e1;
  DT_FLOAT unk_6a86826;
  DT_FIXEDARRAY<DT_INT, 4> nWeights;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
