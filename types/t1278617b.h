/**
 * Definition: t1278617b
 * Hash: 1278617b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1278617b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
