/**
 * Definition: TriggerEventFadeGroup
 * Hash: d4f934b3
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct TriggerEventFadeGroup : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_8dea4d9;
  DT_INT nFadeGroup;
  DT_ENUM<DT_INT> eBehavior;
  DT_INT unk_2b48a58;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
