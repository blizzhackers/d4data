/**
 * Definition: MaterialEnumValueDefinition
 * Hash: 2f8a81aa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MaterialEnumValueDefinition : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VECTOR4D vValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
