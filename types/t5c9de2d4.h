/**
 * Definition: t5c9de2d4
 * Hash: 5c9de2d4
 */

#pragma once

#include "../types.h"
#include "td58e77ac.h"

#pragma push(pack, 1)

struct t5c9de2d4 : public ComplexRead {
  DT_FLOAT unk_4a28fe;
  DT_INT nUnlockLevel;
  DT_FIXEDARRAY<td58e77ac, 3> unk_4059358;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
