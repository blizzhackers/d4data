/**
 * Definition: ta5a3cb02
 * Hash: a5a3cb02
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta5a3cb02 : public ComplexRead {
  DT_FIXEDARRAY<DT_UINT, 8> arPlatforms;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
