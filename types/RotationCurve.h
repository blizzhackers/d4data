/**
 * Definition: RotationCurve
 * Hash: b1737f95
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct RotationCurve : public ComplexRead {
  DT_VARIABLEARRAY<DT_BYTE> ptKeysComp;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
