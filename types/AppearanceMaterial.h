/**
 * Definition: AppearanceMaterial
 * Hash: f0dbe41f
 */

#pragma once

#include "../types.h"
#include "SubObjectAppearance.h"

#pragma push(pack, 1)

struct AppearanceMaterial : public ComplexRead {
  DT_UINT dwMaterialHash;
  DT_INT unk_cf782ad;
  DT_BYTE unk_551fc93;
  DT_VARIABLEARRAY<SubObjectAppearance> ptSOAs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
