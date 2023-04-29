/**
 * Definition: VectorFieldDefinition
 * Hash: efbcb4c0
 */

#pragma once

#include "../types.h"
#include "AABB.h"

#pragma push(pack, 1)

struct VectorFieldDefinition : public ComplexRead {
  DT_INT unk_7ed9e40;
  DT_INT unk_7ed9e41;
  DT_INT unk_7ed9e42;
  DT_FLOAT unk_67ec4eb;
  DT_FLOAT unk_67ec3ed;
  AABB aabb;
  DT_VARIABLEARRAY<DT_VECTOR3D> ptSamples;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
