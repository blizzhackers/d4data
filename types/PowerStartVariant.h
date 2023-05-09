/**
 * Definition: PowerStartVariant
 * Hash: 56c72db0
 */

#pragma once

#include "../types.h"
#include "PowerScriptParam.h"

#pragma push(pack, 1)

struct PowerStartVariant : public ComplexRead {
  DT_UINT tName;
  DT_INT unk_73750d7;
  DT_INT unk_94d85e6;
  DT_INT bIgnoreRange;
  DT_INT bForceCast;
  DT_INT unk_fca3b69;
  DT_VARIABLEARRAY<PowerScriptParam> unk_c0426f9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
