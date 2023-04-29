/**
 * Definition: BoneName
 * Hash: 5160ca65
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct BoneName : public ComplexRead {
  DT_UINT szName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
