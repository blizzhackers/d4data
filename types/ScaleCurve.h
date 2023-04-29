/**
 * Definition: ScaleCurve
 * Hash: 4aa799ed
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScaleCurve : public ComplexRead {
  DT_VARIABLEARRAY<DT_BYTE> ptKeysComp;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
