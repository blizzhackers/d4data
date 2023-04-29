/**
 * Definition: TiledStyleDefinition
 * Hash: 2f5672c
 */

#pragma once

#include "../types.h"
#include "tc5a830ec.h"

#pragma push(pack, 1)

struct TiledStyleDefinition : public ComplexRead {
  DT_POLYMORPHIC_VARIABLEARRAY unk_5da7fc2;
  DT_TAGMAP<DT_INT> unk_b66d648;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
