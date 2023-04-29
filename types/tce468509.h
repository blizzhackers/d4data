/**
 * Definition: tce468509
 * Hash: ce468509
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tce468509 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT idEffectGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
