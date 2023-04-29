/**
 * Definition: t1d0f43e
 * Hash: 1d0f43e
 */

#pragma once

#include "../types.h"
#include "tf18a2f0.h"

#pragma push(pack, 1)

struct t1d0f43e : public ComplexRead {
  tf18a2f0 tGroup;
  tf18a2f0 tValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
