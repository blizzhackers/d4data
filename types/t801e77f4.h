/**
 * Definition: t801e77f4
 * Hash: 801e77f4
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t801e77f4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_279aa5a;
  DT_UINT dwActorID;
  DT_INT unk_a8ee95c;
  DT_INT unk_4bec6d2;
  DT_INT bHideSheathed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
