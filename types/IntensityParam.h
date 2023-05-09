/**
 * Definition: IntensityParam
 * Hash: c4f44d58
 */

#pragma once

#include "../types.h"
#include "IntensitySubParam.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct IntensityParam : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  tcbfdd2ea unk_465327d;
  DT_VARIABLEARRAY<IntensitySubParam> unk_cc7a7e1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
