/**
 * Definition: TriggerEventDeleteObject
 * Hash: 21fe5fc0
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct TriggerEventDeleteObject : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_2b94198;
  DT_UINT dwActorID;
  DT_UINT dwID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
