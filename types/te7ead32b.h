/**
 * Definition: te7ead32b
 * Hash: e7ead32b
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "tc5064aa7.h"

#pragma push(pack, 1)

struct te7ead32b : public ComplexRead {
  DT_UINT unk_d1095b1;
  DT_FLOAT flScale;
  DT_ENUM<DT_INT> unk_adeec18;
  DT_FLOAT unk_c1e1359;
  PRTransform unk_479eba2;
  DT_FLOAT unk_fc35c24;
  DT_FLOAT unk_60a2e66;
  DT_VARIABLEARRAY<tc5064aa7> unk_cf074e3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
