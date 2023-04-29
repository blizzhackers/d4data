/**
 * Definition: t601adde9
 * Hash: 601adde9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t601adde9 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_INT idValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
