/**
 * Definition: t894bd255
 * Hash: 894bd255
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t894bd255 : public ComplexRead {
  DT_RGBACOLOR unk_3d7c8a2;
  DT_SNO<SnoGroup::Texture> unk_3cdcdff;
  DT_RGBACOLOR rgbaColor;
  DT_FLOAT unk_1626611;
  DT_FLOAT unk_daf4312;
  DT_FLOAT unk_74b9406;
  DT_RGBACOLOR unk_9c8a384;
  DT_FLOAT unk_b6065b;
  DT_FLOAT unk_e41f4ef;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
