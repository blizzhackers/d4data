/**
 * Definition: t779dbc32
 * Hash: 779dbc32
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t779dbc32 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_279aa5a;
  DT_UINT dwActorID;
  DT_INT bSheathed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
