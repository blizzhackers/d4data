/**
 * Definition: t81a64b0
 * Hash: 81a64b0
 */

#pragma once

#include "../types.h"
#include "t3248a683.h"

#pragma push(pack, 1)

struct t81a64b0 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  t3248a683 unk_a1f5263;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
