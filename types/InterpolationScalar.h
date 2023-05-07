/**
 * Definition: InterpolationScalar
 * Hash: 3b1da8de
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct InterpolationScalar : public ComplexRead {
  DT_ENUM<DT_INT> nScalarFunction;
  DT_UINT dwFlags;
  DT_RANGE<DT_INT> unk_2424d91;
  DT_RANGE<DT_INT> unk_c9a8e76;
  DT_ENUM<DT_INT> unk_3599c51;
  DT_UINT szFormulaName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
