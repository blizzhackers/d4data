/**
 * Definition: t5d4bac71
 * Hash: 5d4bac71
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5d4bac71 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
