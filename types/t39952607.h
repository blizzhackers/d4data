/**
 * Definition: t39952607
 * Hash: 39952607
 */

#pragma once

#include "../types.h"
#include "t1d0f43e.h"
#include "t5e32bd3e.h"

#pragma push(pack, 1)

struct t39952607 : public ComplexRead {
  t1d0f43e unk_abc49ac;
  DT_VARIABLEARRAY<t5e32bd3e> unk_81dd55e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
