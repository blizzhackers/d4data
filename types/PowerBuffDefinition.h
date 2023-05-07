/**
 * Definition: PowerBuffDefinition
 * Hash: 3fd70b39
 */

#pragma once

#include "../types.h"
#include "t46a557e9.h"
#include "te3f28f16.h"
#include "tf6b21430.h"

#pragma push(pack, 1)

struct PowerBuffDefinition : public ComplexRead {
  DT_UINT dwID;
  DT_UINT unk_47cbc6b;
  DT_INT bHarmful;
  DT_INT bInfinite;
  DT_STRING_FORMULA tDuration;
  DT_STRING_FORMULA tMaxStackCount;
  DT_INT unk_89134c5;
  DT_INT unk_6431ae9;
  DT_INT bCancellable;
  DT_INT unk_99b5752;
  DT_INT unk_93cd85f;
  DT_INT unk_5c11505;
  DT_INT unk_9eb6fb0;
  DT_INT unk_e8f1e19;
  DT_INT unk_9cb4832;
  DT_INT unk_71ba554;
  DT_UINT hIcon;
  DT_UINT unk_8008c5;
  DT_UINT unk_78b0ca1;
  DT_FLOAT unk_c35001;
  DT_INT unk_395ccd6;
  DT_INT unk_200bd12;
  te3f28f16 tDOT;
  DT_INT unk_dcb22bd;
  tf6b21430 tCrowdControl;
  DT_INT bHasDamageShield;
  t46a557e9 tDamageShield;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
