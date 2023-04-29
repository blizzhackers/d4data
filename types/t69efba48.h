/**
 * Definition: t69efba48
 * Hash: 69efba48
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t69efba48 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
