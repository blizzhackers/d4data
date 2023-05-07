/**
 * Definition: tcec837f6
 * Hash: cec837f6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcec837f6 : public ComplexRead {
  DT_UINT dwID;
  DT_ENUM<DT_INT> eType;
  DT_STRING_FORMULA unk_790950b;
  DT_STRING_FORMULA unk_790950c;
  DT_STRING_FORMULA unk_790950d;
  DT_STRING_FORMULA unk_790950e;
  DT_STRING_FORMULA unk_790950f;
  DT_INT unk_6a8ab2;
  DT_INT unk_5078500;
  DT_INT unk_128669f;
  DT_FLOAT unk_1bb6ffe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT bAnimated;
  DT_INT unk_3ee89a;
  DT_INT unk_a4d0200;
  DT_INT unk_c91bb71;
  DT_INT unk_e960d46;
  DT_ENUM<DT_INT> unk_e282419;
  DT_INT unk_7ed70e2;
  DT_ENUM<DT_INT> unk_77bdba8;
  DT_UINT unk_8f61ea4;
  DT_VECTOR3D unk_3e59e14;
  DT_ENUM<DT_INT> unk_6076d47;
  DT_ENUM<DT_INT> unk_8d18eb6;
  DT_INT unk_67060f1;
  DT_STRING_FORMULA unk_3999d6e;
  DT_STRING_FORMULA unk_3999d6f;
  DT_STRING_FORMULA unk_3999d70;
  DT_STRING_FORMULA unk_ff311c;
  DT_STRING_FORMULA unk_4ac4caa;
  DT_STRING_FORMULA unk_e5f3235;
  DT_INT unk_7fd2cb0;
  DT_INT unk_bb05455;
  DT_INT bLoop;
  DT_INT unk_77a6dd9;
  DT_INT unk_14cfb7f;
  DT_INT unk_4f22bac;
  DT_INT unk_ca7a183;
  DT_INT unk_78bcfac;
  DT_ENUM<DT_INT> unk_6fdff1;
  DT_UINT unk_440a6ad;
  DT_INT bDebugDraw;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
