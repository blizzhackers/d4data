/**
 * Definition: ta8a0c923
 * Hash: a8a0c923
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct ta8a0c923 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
