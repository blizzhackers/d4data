/**
 * Definition: t6fb40ed3
 * Hash: 6fb40ed3
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t6fb40ed3 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_SNO<SnoGroup::Physics> unk_668d971;
  DT_FLOAT flBlendTime;
  DT_UINT dwActorID;
  DT_INT unk_279aa5a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
