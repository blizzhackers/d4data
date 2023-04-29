/**
 * Definition: te8edfab7
 * Hash: e8edfab7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te8edfab7 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
