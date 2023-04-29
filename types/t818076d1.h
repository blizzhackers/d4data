/**
 * Definition: t818076d1
 * Hash: 818076d1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t818076d1 : public ComplexRead {
  DT_UINT dwSeed;
  DT_UINT dwCarry;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
