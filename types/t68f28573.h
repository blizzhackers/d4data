/**
 * Definition: t68f28573
 * Hash: 68f28573
 */

#pragma once

#include "../types.h"
#include "IKBone.h"

#pragma push(pack, 1)

struct t68f28573 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_e7b35bd;
  DT_ENUM<DT_INT> unk_c3afaa0;
  DT_VARIABLEARRAY<IKBone> ptIKBones;
  DT_INT unk_822b979;
  DT_FLOAT unk_c848c32;
  IKBone unk_1794af8;
  DT_FLOAT unk_978714f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
