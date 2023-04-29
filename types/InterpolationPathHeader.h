/**
 * Definition: InterpolationPathHeader
 * Hash: 963edd7e
 */

#pragma once

#include "../types.h"
#include "InterpolationScalar.h"

#pragma push(pack, 1)

struct InterpolationPathHeader : public ComplexRead {
  DT_FLOAT tLoopPointStart;
  DT_FLOAT tLoopPointEnd;
  DT_ENUM<DT_INT> nDistributionFunction;
  DT_ENUM<DT_INT> unk_2312508;
  DT_VARIABLEARRAY<InterpolationScalar> unk_463fc3b;
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
