/**
 * Definition: EnterKnownLookOverrides
 * Hash: 5b1055b3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct EnterKnownLookOverrides : public ComplexRead {
  DT_FIXEDARRAY<DT_UINT, 6> aLookOverrides;
  DT_FIXEDARRAY<DT_INT, 6> unk_3fb7293;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
