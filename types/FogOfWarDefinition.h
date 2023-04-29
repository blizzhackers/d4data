/**
 * Definition: FogOfWarDefinition
 * Hash: 5c5f83a4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct FogOfWarDefinition : public ComplexRead {
  DT_INT nDummy;
  DT_CSTRING unk_f1e2551;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
