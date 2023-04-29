/**
 * Definition: tc48db8dc
 * Hash: c48db8dc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc48db8dc : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT flRadius;
  DT_FLOAT flHeight;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
