/**
 * Definition: t73b68c10
 * Hash: 73b68c10
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t73b68c10 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
