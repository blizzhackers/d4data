/**
 * Definition: tdeff56e6
 * Hash: deff56e6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdeff56e6 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
