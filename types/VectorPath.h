/**
 * Definition: VectorPath
 * Hash: 9aa74280
 */

#pragma once

#include "../types.h"
#include "t41b30aaa.h"

#pragma push(pack, 1)

struct VectorPath : public ComplexRead {
  t41b30aaa tPathData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
