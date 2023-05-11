/**
 * Definition: t43ccd80d
 * Hash: 43ccd80d
 */

#pragma once

#include "../types.h"
#include "GizmoConditionData.h"
#include "t6f3d2867.h"

#pragma push(pack, 1)

struct t43ccd80d : public ComplexRead {
  DT_UINT dwType;
  DT_INT fDisableNonFriendlyOperation;
  DT_INT fWalkToCenter;
  DT_INT unk_2387505;
  DT_INT fUseStringListName;
  DT_INT unk_444cd69;
  DT_FLOAT flOperationRadius;
  DT_FLOAT unk_d0b1df5;
  DT_FLOAT unk_76fbf14;
  DT_SNO<SnoGroup::EffectGroup> unk_83183d4;
  DT_INT unk_2767229;
  DT_INT unk_f184557;
  DT_INT unk_6d9ebe1;
  DT_INT unk_5456245;
  DT_INT unk_af5815a;
  DT_SNO<SnoGroup::EffectGroup> unk_18353a0;
  DT_SNO<SnoGroup::EffectGroup> unk_11a3492;
  DT_SNO<SnoGroup::EffectGroup> unk_3e0941e;
  GizmoConditionData tConditionData;
  DT_SNO<SnoGroup::Power> unk_bfad8a9;
  DT_SNO<SnoGroup::Power> unk_1552d4d;
  DT_SNO<SnoGroup::Power> unk_2cf2865;
  DT_SNO<SnoGroup::Power> unk_fe76809;
  DT_INT unk_359810e;
  DT_UINT nCooldown;
  DT_UINT unk_9c8478e;
  DT_INT unk_d45ed2d;
  DT_INT unk_f6b20b7;
  DT_INT unk_54513b8;
  DT_UINT unk_fd1f378;
  DT_UINT unk_487c14;
  DT_UINT unk_87f2609;
  DT_FLOAT unk_158eb4f;
  DT_ENUM<DT_INT> unk_ab58cd3;
  DT_UINT unk_91a3966;
  DT_UINT unk_25312e5;
  DT_INT unk_4be4371;
  DT_SNO<SnoGroup::TreasureClass> snoTreasureClass;
  t6f3d2867 unk_b14a8d7;
  DT_INT unk_d9f9ff8;
  DT_INT unk_94400f2;
  DT_INT unk_2d56a75;
  DT_INT unk_51b0c11;
  DT_FLOAT unk_6b4a81d;
  DT_UINT dwPad;
  DT_FLOAT unk_58318b6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
