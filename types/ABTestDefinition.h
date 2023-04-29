/**
 * Definition: ABTestDefinition
 * Hash: 23d9710c
 */

#pragma once

#include "../types.h"
#include "t4bbb31b8.h"

#pragma push(pack, 1)

struct ABTestDefinition : public ComplexRead {
  DT_VARIABLEARRAY<t4bbb31b8> unk_eb92604;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
