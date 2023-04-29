/**
 * Definition: t474afa29
 * Hash: 474afa29
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t474afa29 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_FLOAT flDistance;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
