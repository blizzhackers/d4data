/**
 * Definition: tacceb93d
 * Hash: acceb93d
 */

#pragma once

#include "../types.h"
#include "tff870ab6.h"

#pragma push(pack, 1)

struct tacceb93d : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tff870ab6> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
