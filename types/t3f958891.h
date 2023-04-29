/**
 * Definition: t3f958891
 * Hash: 3f958891
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t3f958891 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwActorID;
  DT_UINT unk_6c0cb90;
  DT_INT unk_279aa5a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
