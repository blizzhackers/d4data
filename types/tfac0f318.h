/**
 * Definition: tfac0f318
 * Hash: fac0f318
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfac0f318 : public ComplexRead {
  DT_FLOAT unk_c58ef7e;
  DT_RGBACOLOR rgbaColor;
  DT_SNO<SnoGroup::Texture> unk_3cdcdff;
  DT_FLOAT unk_74b9406;
  DT_FLOAT unk_a7a54fd;
  DT_UINT unk_cc1b6cc;
  DT_UINT unk_b71059;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
