/**
 * Definition: t977100c8
 * Hash: 977100c8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t977100c8 : public ComplexRead {
  DT_RGBACOLOR tValueMin;
  DT_RGBACOLOR tValueMax;
  DT_FLOAT tTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
