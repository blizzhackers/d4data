/**
 * Definition: VertInfluences
 * Hash: 5b09774d
 */

#pragma once

#include "../types.h"
#include "Influence.h"

#pragma push(pack, 1)

struct VertInfluences : public ComplexRead {
  DT_FIXEDARRAY<Influence, 4> tBoneInfluence;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
