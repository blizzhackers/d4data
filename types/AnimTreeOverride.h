/**
 * Definition: AnimTreeOverride
 * Hash: b2f69ab5
 */

#pragma once

#include "../types.h"
#include "t41efa85c.h"

#pragma push(pack, 1)

struct AnimTreeOverride : public ComplexRead {
  DT_VARIABLEARRAY<t41efa85c> unk_ae5d61d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
