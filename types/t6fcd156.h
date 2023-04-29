/**
 * Definition: t6fcd156
 * Hash: 6fcd156
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6fcd156 : public ComplexRead {
  DT_FLOAT flBlendTime;
  DT_ENUM<DT_INT> unk_48e16cf;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
