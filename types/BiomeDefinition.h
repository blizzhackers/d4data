/**
 * Definition: BiomeDefinition
 * Hash: a331d15
 */

#pragma once

#include "../types.h"
#include "BiomeClutter.h"
#include "t6215cb8e.h"
#include "t72312b84.h"

#pragma push(pack, 1)

struct BiomeDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_FLOAT unk_742ea83;
  DT_FIXEDARRAY<BiomeClutter, 4> unk_3f35495;
  DT_VARIABLEARRAY<t72312b84> unk_470b82a;
  DT_VARIABLEARRAY<t6215cb8e> unk_d6b2f14;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
