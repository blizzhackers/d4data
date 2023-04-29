/**
 * Definition: tb4c55066
 * Hash: b4c55066
 */

#pragma once

#include "../types.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct tb4c55066 : public ComplexRead {
  bcQuat q;
  DT_VECTOR3D wp;
  DT_FLOAT flScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
