/**
 * Definition: ta84b96e7
 * Hash: a84b96e7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta84b96e7 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_FLOAT flRange;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
