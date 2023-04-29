/**
 * Definition: td7468ee4
 * Hash: d7468ee4
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct td7468ee4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_FLOAT unk_f2e68d4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
