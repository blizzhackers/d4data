/**
 * Definition: LightDefinition
 * Hash: cbb2e681
 */

#pragma once

#include "../types.h"
#include "tb86f8607.h"

#pragma push(pack, 1)

struct LightDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> unk_1a8964e;
  DT_INT nPriority;
  DT_UINT dwMaxInstances;
  tb86f8607 unk_a1f5263;
  DT_FLOAT unk_383f1ce;
  DT_FLOAT unk_b9c2829;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
