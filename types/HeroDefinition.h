/**
 * Definition: HeroDefinition
 * Hash: 5f2aebf7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct HeroDefinition : public ComplexRead {
  DT_VARIABLEARRAY<DT_BYTE> pProtoData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
