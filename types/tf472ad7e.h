/**
 * Definition: tf472ad7e
 * Hash: f472ad7e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf472ad7e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
