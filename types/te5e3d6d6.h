/**
 * Definition: te5e3d6d6
 * Hash: e5e3d6d6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te5e3d6d6 : public ComplexRead {
  DT_FLOAT x;
  DT_FLOAT y;
  DT_FLOAT z;
  DT_FLOAT w;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
