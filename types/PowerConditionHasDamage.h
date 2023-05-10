/**
 * Definition: PowerConditionHasDamage
 * Hash: b03ec38f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PowerConditionHasDamage : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
