/**
 * Definition: tda10e464
 * Hash: da10e464
 */

#pragma once

#include "../types.h"
#include "BuffExclusiveType.h"

#pragma push(pack, 1)

struct tda10e464 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<BuffExclusiveType> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
