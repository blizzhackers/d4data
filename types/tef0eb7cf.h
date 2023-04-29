/**
 * Definition: tef0eb7cf
 * Hash: ef0eb7cf
 */

#pragma once

#include "../types.h"
#include "te5e3d6d6.h"
#include "te741cdb2.h"

#pragma push(pack, 1)

struct tef0eb7cf : public ComplexRead {
  DT_VARIABLEARRAY<te5e3d6d6> ptVertices;
  DT_VARIABLEARRAY<te741cdb2> ptTriangles;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
