/**
 * Definition: t4d0ffb5e
 * Hash: 4d0ffb5e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4d0ffb5e : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_FLOAT flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
