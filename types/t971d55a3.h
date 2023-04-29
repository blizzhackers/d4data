/**
 * Definition: t971d55a3
 * Hash: 971d55a3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t971d55a3 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
