/**
 * Definition: t18e49fff
 * Hash: 18e49fff
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t18e49fff : public ComplexRead {
  DT_INT countX;
  DT_INT countY;
  DT_FLOAT cellWidth;
  DT_INT64 aSamples;
  DT_FLOAT center;
  DT_FLOAT scale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
