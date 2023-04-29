/**
 * Definition: t3964687f
 * Hash: 3964687f
 */

#pragma once

#include "../types.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct t3964687f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_65aa6d9;
  DT_FLOAT unk_b950bb6;
  DT_FLOAT unk_fb8100e;
  DT_SNO<SnoGroup::Texture> snoTexture;
  bcQuat unk_284ec52;
  DT_INT unk_340c842;
  DT_INT unk_760c2cf;
  DT_VECTOR3D unk_4f5b254;
  DT_ENUM<DT_INT> unk_56127ed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
