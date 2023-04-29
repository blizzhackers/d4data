/**
 * Definition: tdf5021f
 * Hash: df5021f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdf5021f : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_UINT dwStringHash;
  DT_CSTRING szString;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
