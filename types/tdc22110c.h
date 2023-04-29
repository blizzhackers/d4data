/**
 * Definition: tdc22110c
 * Hash: dc22110c
 */

#pragma once

#include "../types.h"
#include "te78d8579.h"

#pragma push(pack, 1)

struct tdc22110c : public ComplexRead {
  DT_VARIABLEARRAY<te78d8579> unk_e61eac4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
