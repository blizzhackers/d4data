/**
 * Definition: t4825cde
 * Hash: 4825cde
 */

#pragma once

#include "../types.h"
#include "tbef5a4a.h"
#include "tc329b4be.h"

#pragma push(pack, 1)

struct t4825cde : public ComplexRead {
  DT_FLOAT unk_ae5bfbd;
  DT_VECTOR2D unk_a6ca302;
  DT_FLOAT unk_79d0731;
  DT_FLOAT unk_80bc841;
  DT_FLOAT unk_4e79635;
  DT_FLOAT unk_341cf9b;
  DT_FLOAT unk_7ed5974;
  DT_FLOAT unk_f373e7a;
  DT_FLOAT unk_77999b9;
  DT_VARIABLEARRAY<DT_FLOAT> unk_95d0ba;
  DT_INT unk_42cbe27;
  DT_SNO<SnoGroup::Texture> unk_34b452;
  DT_INT unk_3620f37;
  DT_INT unk_c60b9b0;
  DT_VARIABLEARRAY<tc329b4be> arFogOfWar;
  DT_VARIABLEARRAY<tbef5a4a> unk_ff16ba3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
