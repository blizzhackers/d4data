/**
 * Definition: t4e5122dc
 * Hash: 4e5122dc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4e5122dc : public ComplexRead {
  DT_INT nTextureIndex;
  DT_INT nXOffset;
  DT_INT nWidth;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
