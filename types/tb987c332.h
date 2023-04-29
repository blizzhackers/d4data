/**
 * Definition: tb987c332
 * Hash: b987c332
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct tb987c332 : public ComplexRead {
  DT_UINT szName;
  StringLabelHandleEx hLabel;
  DT_SNO<SnoGroup::Texture> snoNormal;
  DT_SNO<SnoGroup::Texture> unk_829b337;
  DT_SNO<SnoGroup::Texture> snoMask;
  DT_SNO<SnoGroup::Texture> unk_df7a801;
  DT_FLOAT unk_254bd5e;
  DT_FLOAT unk_e0611b0;
  t6b1c5d9c hIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
