/**
 * Definition: TriggerEventShadow
 * Hash: 1e576cdc
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct TriggerEventShadow : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  DT_INT bShadow;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
