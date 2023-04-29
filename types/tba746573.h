/**
 * Definition: tba746573
 * Hash: ba746573
 */

#pragma once

#include "../types.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tba746573 : public ComplexRead {
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
  DT_INT unk_7902ee3;
  DT_FLOAT unk_25955c7;
  DT_FLOAT unk_abee5c3;
  DT_FLOAT unk_fbca868;
  DT_FLOAT unk_839aa20;
  DT_FLOAT unk_f75b7db;
  DT_FLOAT unk_e7f8ef9;
  DT_FLOAT unk_600cf5;
  DT_FLOAT unk_aa07da;
  DT_FLOAT unk_abbeed2;
  DT_FLOAT unk_b9bf10d;
  DT_ENUM<DT_INT> unk_991ae81;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
