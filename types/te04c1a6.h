/**
 * Definition: te04c1a6
 * Hash: e04c1a6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te04c1a6 : public ComplexRead {
  DT_FLOAT flTime;
  DT_VECTOR3D vPosition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
