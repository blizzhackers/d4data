/**
 * Definition: tf67f903d
 * Hash: f67f903d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf67f903d : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
