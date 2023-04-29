/**
 * Definition: td305aa32
 * Hash: d305aa32
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct td305aa32 : public ComplexRead {
  tb42131c6 tFace;
  tb42131c6 tMakeup;
  tb42131c6 tJewelry;
  tb42131c6 tHairStyle;
  tb42131c6 tFacialHair;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
