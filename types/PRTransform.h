/**
 * Definition: PRTransform
 * Hash: 9a44539e
 */

#pragma once

#include "../types.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct PRTransform : public ComplexRead {
  bcQuat q;
  DT_VECTOR3D wp;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
