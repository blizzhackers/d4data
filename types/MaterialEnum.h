/**
 * Definition: MaterialEnum
 * Hash: bd384884
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MaterialEnum : public ComplexRead {
  DT_UINT dwValue;
  DT_CSTRING szEnumName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
