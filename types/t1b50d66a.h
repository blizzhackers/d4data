/**
 * Definition: t1b50d66a
 * Hash: 1b50d66a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1b50d66a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
