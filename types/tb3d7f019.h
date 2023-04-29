/**
 * Definition: tb3d7f019
 * Hash: b3d7f019
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tb3d7f019 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_VECTOR3D wpLocation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
