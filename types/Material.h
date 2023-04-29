/**
 * Definition: Material
 * Hash: 50986f6f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Material : public ComplexRead {
  DT_INT nSortPri;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
