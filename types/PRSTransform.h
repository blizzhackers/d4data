/**
 * Definition: PRSTransform
 * Hash: f5157d91
 */

#pragma once

#include "../types.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct PRSTransform : public ComplexRead {
  bcQuat q;
  DT_VECTOR3D wp;
  DT_VECTOR3D vScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
