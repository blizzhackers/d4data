/**
 * Definition: te3f28f16
 * Hash: e3f28f16
 */

#pragma once

#include "../types.h"
#include "t46a557e9.h"

#pragma push(pack, 1)

struct te3f28f16 : public ComplexRead {
  DT_ENUM<DT_INT> eDamageType;
  t46a557e9 tDamage;
  DT_INT unk_89dc285;
  DT_FLOAT unk_6331bb5;
  DT_ENUM<DT_INT> unk_f551941;
  DT_INT unk_dd4b5bf;
  DT_INT unk_3d768b7;
  DT_ENUM<DT_INT> unk_b8f2b;
  DT_INT unk_79ce2e1;
  DT_STRING_FORMULA tCombatEffectOverride;
  DT_INT unk_693b6db;
  DT_INT unk_d50fe6e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
