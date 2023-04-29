/**
 * Definition: ExperienceLevelAlt
 * Hash: 750aecc1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ExperienceLevelAlt : public ComplexRead {
  DT_INT64 nDeltaXP;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
