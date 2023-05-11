/**
 * Definition: MarkerSplineData
 * Hash: 58d579a7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerSplineData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_3580552;
  DT_FLOAT unk_a3f1699;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
