/**
 * Definition: Influence
 * Hash: 6be58119
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Influence : public ComplexRead {
  DT_INT nBoneIndex;
  DT_FLOAT flWeight;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
