/**
 * Definition: t39274139
 * Hash: 39274139
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t39274139 : public ComplexRead {
  DT_INT unk_f1ba2b6;
  DT_ENUM<DT_INT> unk_fc9771a;
  DT_FLOAT unk_fb5053f;
  DT_FLOAT unk_5071fb5;
  DT_INT fHeight;
  DT_FLOAT flHeightMin;
  DT_FLOAT unk_b9a83c2;
  DT_FLOAT flHeightMax;
  DT_FLOAT unk_99ead44;
  DT_INT fSlope;
  DT_FLOAT unk_eaf33f9;
  DT_FLOAT unk_45a7b8c;
  DT_FLOAT unk_eaf32fb;
  DT_FLOAT unk_25ea50e;
  DT_INT fDirection;
  DT_FLOAT unk_fd4e16f;
  DT_FLOAT flDirectionAzimuth;
  DT_FLOAT unk_31d6a90;
  DT_FLOAT unk_57c2f26;
  DT_INT fNoise;
  DT_FLOAT unk_9df1e22;
  DT_FLOAT unk_da7c269;
  DT_FLOAT unk_a8c1794;
  DT_FLOAT unk_a8c1696;
  DT_VECTOR2D unk_a0f56db;
  DT_INT unk_19f3d77;
  DT_FLOAT unk_faf93c7;
  DT_FLOAT unk_d3774da;
  DT_FLOAT unk_faf92c9;
  DT_FLOAT unk_b3b9e5c;
  DT_INT fInvert;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
