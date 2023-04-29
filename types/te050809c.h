/**
 * Definition: te050809c
 * Hash: e050809c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te050809c : public ComplexRead {
  DT_INT unk_4fdc522;
  DT_VECTOR3D unk_2a1f7c8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
