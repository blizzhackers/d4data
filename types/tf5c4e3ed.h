/**
 * Definition: tf5c4e3ed
 * Hash: f5c4e3ed
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct tf5c4e3ed : public ComplexRead {
  tb42131c6 tAppearance;
  tb42131c6 tMaterial;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
