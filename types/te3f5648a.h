/**
 * Definition: te3f5648a
 * Hash: e3f5648a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te3f5648a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
