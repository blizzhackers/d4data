/**
 * Definition: tf49e9532
 * Hash: f49e9532
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct tf49e9532 : public ComplexRead {
  DT_INT bEnabled;
  DT_VECTOR3D unk_f14ffed;
  tcbfdd2ea unk_4899292;
  tcbfdd2ea unk_169823a;
  DT_FLOAT unk_f052750;
  tcbfdd2ea unk_beb976c;
  tcbfdd2ea unk_99175b8;
  tcbfdd2ea unk_b854fe5;
  DT_FLOAT unk_d14bc79;
  DT_FLOAT unk_f852d87;
  DT_FLOAT unk_86d2585;
  DT_VECTOR2D unk_331d48f;
  DT_FLOAT unk_67b3c4a;
  DT_FLOAT unk_1ecb588;
  DT_VECTOR2D unk_211837d;
  tcbfdd2ea unk_95e2b10;
  tcbfdd2ea unk_b9a067e;
  tcbfdd2ea unk_2f13301;
  DT_FLOAT unk_caea994;
  DT_FLOAT TileSetExit;
  tcbfdd2ea unk_924ac95;
  DT_VECTOR3D unk_de5453f;
  tcbfdd2ea unk_ab0e39e;
  DT_FLOAT unk_b75acc5;
  DT_FLOAT unk_fd448cd;
  DT_FLOAT unk_35d43ee;
  DT_INT unk_6b9f105;
  DT_VECTOR3D unk_ddba751;
  DT_FLOAT unk_48b7873;
  DT_SNO<SnoGroup::Texture> unk_b74898b;
  DT_SNO<SnoGroup::Texture> unk_3ce7419;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
