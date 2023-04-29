/**
 * Definition: t5449d893
 * Hash: 5449d893
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5449d893 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_FLOAT flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
