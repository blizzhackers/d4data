/**
 * Definition: t20316496
 * Hash: 20316496
 */

#pragma once

#include "../types.h"
#include "IKBone.h"

#pragma push(pack, 1)

struct t20316496 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_e7b35bd;
  DT_ENUM<DT_INT> unk_c3afaa0;
  DT_VARIABLEARRAY<IKBone> ptIKBones;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
