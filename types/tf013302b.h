/**
 * Definition: tf013302b
 * Hash: f013302b
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "UIEffect.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct tf013302b : public ComplexRead {
  UIControlHandle unk_51d08f2;
  DT_SNO<SnoGroup::Sound> unk_a97a767;
  DT_FLOAT unk_9a8825c;
  DT_INT unk_a17abed;
  DT_INT unk_e5c42a5;
  DT_RGBACOLOR unk_3e85a0f;
  UIEffect unk_6b07c49;
  DT_CSTRING szClickPredicate;
  DT_CSTRING unk_8fb8b02;
  DT_CSTRING unk_520cc33;
  DT_CSTRING unk_60529d7;
  DT_CSTRING szOnGainedFocus;
  DT_CSTRING szOnLostFocus;
  DT_CSTRING szOnHitRegionEnter;
  DT_CSTRING szOnHitRegionExit;
  DT_ENUM<DT_INT> unk_ec775f9;
  DT_ENUM<DT_INT> unk_5ea3459;
  DT_INT unk_a86cfc1;
  DT_INT unk_120c8f1;
  DT_SNO<SnoGroup::Sound> snoRightClickSound;
  DT_SNO<SnoGroup::Sound> unk_99363ee;
  t6b1c5d9c unk_b63d29b;
  t6b1c5d9c unk_d75128c;
  t6b1c5d9c unk_daefcaa;
  DT_SNO<SnoGroup::TiledStyle> unk_1844a00;
  DT_SNO<SnoGroup::TiledStyle> unk_c43c17c;
  DT_SNO<SnoGroup::TiledStyle> unk_219d52d;
  DT_SNO<SnoGroup::TiledStyle> unk_ccba90f;
  DT_RGBACOLOR unk_733746f;
  DT_RGBACOLOR unk_62ef7cf;
  DT_RGBACOLOR unk_bc6a6a0;
  DT_RGBACOLOR unk_9e1e600;
  DT_RGBACOLOR unk_860d478;
  DT_RGBACOLOR unk_2895fd8;
  DT_INT unk_3368b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
