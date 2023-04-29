/**
 * Definition: t42378b43
 * Hash: 42378b43
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t42378b43 : public ComplexRead {
  DT_FLOAT unk_a952693;
  DT_VECTOR3D vecGridOffset;
  DT_INT unk_1e8e20d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
