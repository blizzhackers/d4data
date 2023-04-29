/**
 * Definition: t64920d0e
 * Hash: 64920d0e
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t64920d0e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwTriggerFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
