/**
 * Definition: bcQuat
 * Hash: ebc770e0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct bcQuat : public ComplexRead {
  DT_FLOAT x;
  DT_FLOAT y;
  DT_FLOAT z;
  DT_FLOAT w;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
