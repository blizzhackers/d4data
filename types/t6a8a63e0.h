/**
 * Definition: t6a8a63e0
 * Hash: 6a8a63e0
 */

#pragma once

#include "../types.h"
#include "t39274139.h"

#pragma push(pack, 1)

struct t6a8a63e0 : public ComplexRead {
  DT_ENUM<DT_INT> unk_1b85e9d;
  t39274139 tSettings;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
