/**
 * Definition: t2d3b6fb5
 * Hash: 2d3b6fb5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2d3b6fb5 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
