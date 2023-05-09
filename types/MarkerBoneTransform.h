/**
 * Definition: MarkerBoneTransform
 * Hash: ed096762
 */

#pragma once

#include "../types.h"
#include "PRSTransform.h"

#pragma push(pack, 1)

struct MarkerBoneTransform : public ComplexRead {
  DT_UINT szName;
  PRSTransform transform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
