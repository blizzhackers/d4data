/**
 * Definition: DynamicGameParameter
 * Hash: e6240d20
 */

#pragma once

#include "../types.h"
#include "tf18a2f0.h"

#pragma push(pack, 1)

struct DynamicGameParameter : public ComplexRead {
  tf18a2f0 tName;
  DT_RANGE<DT_INT> tRadius;
  DT_INT bInvert;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
