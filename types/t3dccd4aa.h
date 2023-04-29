/**
 * Definition: t3dccd4aa
 * Hash: 3dccd4aa
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t3dccd4aa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_SNO<SnoGroup::Cloth> unk_4f25fc8;
  DT_UINT szSubObjectName;
  DT_FLOAT flBlendTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
