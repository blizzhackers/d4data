/**
 * Definition: td03fb276
 * Hash: d03fb276
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct td03fb276 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwObjectID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
