/**
 * Definition: t52314c2f
 * Hash: 52314c2f
 */

#pragma once

#include "../types.h"
#include "t6f18c43c.h"

#pragma push(pack, 1)

struct t52314c2f : public ComplexRead {
  DT_VARIABLEARRAY<t6f18c43c> bones;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
