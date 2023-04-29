/**
 * Definition: ConvLocaleDisplayTimes
 * Hash: 1857ecfe
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ConvLocaleDisplayTimes : public ComplexRead {
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_c63857;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
