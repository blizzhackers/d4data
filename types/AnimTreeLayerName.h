/**
 * Definition: AnimTreeLayerName
 * Hash: 3818fd33
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AnimTreeLayerName : public ComplexRead {
  DT_UINT dwHash;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
