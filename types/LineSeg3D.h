/**
 * Definition: LineSeg3D
 * Hash: 8128101e
 */

#pragma once

#include "../types.h"
#include "Ray3D.h"

#pragma push(pack, 1)

struct LineSeg3D : public ComplexRead {
  Ray3D wr;
  DT_FLOAT wdLength;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
