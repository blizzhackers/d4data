/**
 * Definition: tf3ac1b8f
 * Hash: f3ac1b8f
 */

#pragma once

#include "../types.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tf3ac1b8f : public ComplexRead {
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
  DT_UINT unk_ee01c09;
  DT_UINT dwActorID;
  DT_INT unk_acdb8a3;
  DT_UINT unk_e8a81a5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
