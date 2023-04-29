/**
 * Definition: tb42131c6
 * Hash: b42131c6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb42131c6 : public ComplexRead {
  DT_UINT dwOffset;
  DT_UINT dwCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
