/**
 * Definition: SocketedEffects
 * Hash: 2e76b412
 */

#pragma once

#include "../types.h"
#include "AttributeSpecifier.h"

#pragma push(pack, 1)

struct SocketedEffects : public ComplexRead {
  DT_ENUM<DT_INT> unk_51b6175;
  DT_VARIABLEARRAY<AttributeSpecifier> ptAttributes;
  DT_UINT tStringLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
