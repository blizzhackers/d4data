/**
 * Definition: StencilParams
 * Hash: 729e1236
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct StencilParams : public ComplexRead {
  DT_INT fStencilBufferEnable;
  DT_UINT dwStencilBufferRefValue;
  DT_UINT unk_125c5d5;
  DT_UINT unk_a6ffe64;
  DT_ENUM<DT_INT> unk_ab3262d;
  DT_ENUM<DT_INT> unk_35ab896;
  DT_ENUM<DT_INT> unk_3553b7b;
  DT_ENUM<DT_INT> unk_f57a4b5;
  DT_ENUM<DT_INT> unk_d5bbf15;
  DT_ENUM<DT_INT> unk_4c8527e;
  DT_ENUM<DT_INT> unk_4c2d563;
  DT_ENUM<DT_INT> unk_e787b9d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
