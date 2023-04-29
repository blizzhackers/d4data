/**
 * Definition: t88c1160d
 * Hash: 88c1160d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t88c1160d : public ComplexRead {
  DT_FIXEDARRAY<DT_ENUM<DT_INT>, 8> eIndices;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
