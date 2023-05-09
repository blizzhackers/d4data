/**
 * Definition: RandomNumberGenerator
 * Hash: 818076d1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct RandomNumberGenerator : public ComplexRead {
  DT_UINT dwSeed;
  DT_UINT dwCarry;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
