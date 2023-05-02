/**
 * Definition: PolymorphicBase
 * Hash: 5d4bac71
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PolymorphicBase : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
