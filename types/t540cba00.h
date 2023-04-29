/**
 * Definition: t540cba00
 * Hash: 540cba00
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t540cba00 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
