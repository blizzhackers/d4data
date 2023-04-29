/**
 * Definition: t6b587c56
 * Hash: 6b587c56
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6b587c56 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT flRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
