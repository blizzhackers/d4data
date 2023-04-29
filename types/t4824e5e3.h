/**
 * Definition: t4824e5e3
 * Hash: 4824e5e3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4824e5e3 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
