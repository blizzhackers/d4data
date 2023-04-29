/**
 * Definition: tdd2a5307
 * Hash: dd2a5307
 */

#pragma once

#include "../types.h"
#include "t98dc03a5.h"

#pragma push(pack, 1)

struct tdd2a5307 : public ComplexRead {
  t98dc03a5 tBoneName;
  DT_FLOAT aPitchMin;
  DT_FLOAT aPitchMax;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
