/**
 * Definition: AxialCylinder
 * Hash: b3d4d849
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AxialCylinder : public ComplexRead {
  DT_VECTOR3D wpBase;
  DT_FLOAT wdHeight;
  DT_FLOAT wdRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
