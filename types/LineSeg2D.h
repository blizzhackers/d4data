/**
 * Definition: LineSeg2D
 * Hash: 81280ffd
 */

#pragma once

#include "../types.h"
#include "Ray2D.h"

#pragma push(pack, 1)

struct LineSeg2D : public ComplexRead {
  Ray2D wr;
  DT_FLOAT wdLength;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
