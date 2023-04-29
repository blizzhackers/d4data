/**
 * Definition: FatVertex
 * Hash: 105be619
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct FatVertex : public ComplexRead {
  DT_VECTOR3D wpPos;
  DT_VECTOR3D wvNormal;
  DT_FIXEDARRAY<DT_RGBACOLOR, 2> rgbaColor;
  DT_FIXEDARRAY<DT_VECTOR2D, 4> vUVSet;
  DT_VECTOR4D vecTangent;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
