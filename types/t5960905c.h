/**
 * Definition: t5960905c
 * Hash: 5960905c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5960905c : public ComplexRead {
  DT_SNO<SnoGroup::Texture> unk_3cdcdff;
  DT_RGBACOLOR rgbaColor;
  DT_FLOAT unk_4b95c37;
  DT_FLOAT unk_be4fdf8;
  DT_FLOAT unk_74b9406;
  DT_FLOAT flFadeInTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
