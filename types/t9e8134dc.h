/**
 * Definition: t9e8134dc
 * Hash: 9e8134dc
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct t9e8134dc : public ComplexRead {
  DT_UINT szBoneName;
  DT_VARIABLEARRAY<PRTransform> ptOffsetList;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
