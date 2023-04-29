/**
 * Definition: tc1c86aca
 * Hash: c1c86aca
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tc1c86aca : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT bHide;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
