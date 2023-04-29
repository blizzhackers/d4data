/**
 * Definition: t841ba26f
 * Hash: 841ba26f
 */

#pragma once

#include "../types.h"
#include "VectorPath.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct t841ba26f : public ComplexRead {
  tcbfdd2ea pathRadius;
  tcbfdd2ea pathHeight;
  VectorPath pathBoxExtents;
  DT_ENUM<DT_INT> eType;
  DT_CHARARRAY<128> szSubObjectName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
