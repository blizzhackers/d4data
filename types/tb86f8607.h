/**
 * Definition: tb86f8607
 * Hash: b86f8607
 */

#pragma once

#include "../types.h"
#include "InterpolationScalar.h"
#include "LightStateParams.h"
#include "MaterialTexture.h"

#pragma push(pack, 1)

struct tb86f8607 : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_UINT dwFlags;
  DT_UINT unk_c96f544;
  DT_ENUM<DT_INT> unk_cf4734d;
  DT_ENUM<DT_INT> unk_56127ed;
  MaterialTexture tMatTexProjected;
  LightStateParams tStateA;
  DT_RANGE<DT_INT> unk_3dc76e8;
  DT_RANGE<DT_INT> fFirstTexels;
  DT_FLOAT unk_b2d1b35;
  DT_RANGE<DT_INT> unk_da73b5e;
  DT_FLOAT unk_159b591;
  DT_FLOAT unk_cdd937c;
  DT_FLOAT unk_6b1c15;
  DT_FLOAT unk_303bee;
  DT_FLOAT unk_c4c66d5;
  DT_FLOAT unk_ff1fcfe;
  DT_FLOAT nSystemDuration;
  DT_FLOAT flOutroDuration;
  InterpolationScalar tSystemDurationScalar;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
