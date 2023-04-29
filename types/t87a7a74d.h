/**
 * Definition: t87a7a74d
 * Hash: 87a7a74d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t87a7a74d : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
