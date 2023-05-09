/**
 * Definition: NecroPetData
 * Hash: 69ebc9fa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct NecroPetData : public ComplexRead {
  DT_ENUM<DT_INT> eUnitType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
