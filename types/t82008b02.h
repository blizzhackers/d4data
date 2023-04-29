/**
 * Definition: t82008b02
 * Hash: 82008b02
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t82008b02 : public ComplexRead {
  DT_UINT dwSeed;
  DT_UINT dwCarry;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
