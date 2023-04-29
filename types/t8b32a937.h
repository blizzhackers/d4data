/**
 * Definition: t8b32a937
 * Hash: 8b32a937
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "PRSTransform.h"

#pragma push(pack, 1)

struct t8b32a937 : public ComplexRead {
  PRSTransform transform;
  AABB aabbBounds;
  DT_ENUM<DT_INT> unk_d094b9a;
  DT_INT unk_334eb2d;
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
