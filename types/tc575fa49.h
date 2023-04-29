/**
 * Definition: tc575fa49
 * Hash: c575fa49
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct tc575fa49 : public ComplexRead {
  PRTransform unk_a402cfb;
  DT_VECTOR3D unk_80dc871;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
