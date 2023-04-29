/**
 * Definition: tbef5a4a
 * Hash: bef5a4a
 */

#pragma once

#include "../types.h"
#include "tccd96a71.h"

#pragma push(pack, 1)

struct tbef5a4a : public ComplexRead {
  DT_INT nX;
  DT_INT nY;
  DT_VARIABLEARRAY<tccd96a71> unk_2ec05dd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
