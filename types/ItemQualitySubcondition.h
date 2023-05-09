/**
 * Definition: ItemQualitySubcondition
 * Hash: b921f709
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ItemQualitySubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eItemQualityLevel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
