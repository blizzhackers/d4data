/**
 * Definition: FogMask
 * Hash: 16ccfb88
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct FogMask : public ComplexRead {
  DT_UINT dwWidth;
  DT_UINT dwHeight;
  DT_VARIABLEARRAY<DT_BYTE> arMask;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
