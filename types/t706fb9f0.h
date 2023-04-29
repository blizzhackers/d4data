/**
 * Definition: t706fb9f0
 * Hash: 706fb9f0
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t706fb9f0 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  DT_FLOAT flAlpha;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
