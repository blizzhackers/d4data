/**
 * Definition: tf8a00ac7
 * Hash: f8a00ac7
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tf8a00ac7 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_ENUM<DT_INT> unk_a82d707;
  DT_FLOAT flDuration;
  DT_FLOAT flDistance;
  DT_ENUM<DT_INT> unk_991ae81;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
