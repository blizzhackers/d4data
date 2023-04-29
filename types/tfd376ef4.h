/**
 * Definition: tfd376ef4
 * Hash: fd376ef4
 */

#pragma once

#include "../types.h"
#include "t3f2da5e2.h"
#include "t4e5122dc.h"
#include "tbf456a16.h"

#pragma push(pack, 1)

struct tfd376ef4 : public ComplexRead {
  DT_INT nWidth;
  DT_INT nHeight;
  DT_WORD nMaxHeight;
  DT_WORD nMinHeight;
  DT_FLOAT unk_784cc0a;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Material>> unk_96d4a3a;
  DT_VARIABLEARRAY<t4e5122dc> unk_92a8c46;
  t4e5122dc unk_66ea301;
  t4e5122dc unk_573867e;
  t4e5122dc unk_50ad237;
  t4e5122dc unk_b7e82ff;
  t4e5122dc unk_aae2d5e;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Biome>> unk_dfff8d2;
  DT_VARIABLEARRAY<t3f2da5e2> arClutter;
  tbf456a16 unk_3ebf245;
  tbf456a16 unk_4fbebbf;
  tbf456a16 unk_286419f;
  tbf456a16 unk_eb5aed9;
  tbf456a16 unk_7c5feb2;
  tbf456a16 unk_4963bda;
  DT_VARIABLEARRAY<tbf456a16> unk_a7e5485;
  DT_VARIABLEARRAY<DT_BYTE> arFogMask;
  DT_VARIABLEARRAY<DT_BYTE> unk_da24a45;
  DT_VECTOR4D unk_131b0a2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
