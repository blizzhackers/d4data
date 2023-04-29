/**
 * Definition: ta5c1f30e
 * Hash: a5c1f30e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta5c1f30e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
