/**
 * Definition: t9c9af4b3
 * Hash: 9c9af4b3
 */

#pragma once

#include "../types.h"
#include "t3eb29877.h"

#pragma push(pack, 1)

struct t9c9af4b3 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  t3eb29877 tParams;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
