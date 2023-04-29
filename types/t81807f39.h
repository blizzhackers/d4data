/**
 * Definition: t81807f39
 * Hash: 81807f39
 */

#pragma once

#include "../types.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t81807f39 : public ComplexRead {
  DT_UINT dwType;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_FLOAT tDuration;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  TriggerCleanup tCleanup;
  DT_INT unk_49e9257;
  DT_INT unk_5490979;
  DT_UINT dwPad;
  DT_INT unk_7903775;
  DT_FLOAT unk_2c69731;
  DT_FLOAT unk_3c38a23;
  DT_ENUM<DT_INT> unk_991ae81;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
