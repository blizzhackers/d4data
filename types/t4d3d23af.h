/**
 * Definition: t4d3d23af
 * Hash: 4d3d23af
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4d3d23af : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
