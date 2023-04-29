/**
 * Definition: t5c83eb6c
 * Hash: 5c83eb6c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5c83eb6c : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_UINT dwHash;
  DT_CSTRING szString;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
