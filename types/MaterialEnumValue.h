/**
 * Definition: MaterialEnumValue
 * Hash: edd98201
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MaterialEnumValue : public ComplexRead {
  DT_UINT value;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
