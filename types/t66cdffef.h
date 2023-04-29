/**
 * Definition: t66cdffef
 * Hash: 66cdffef
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t66cdffef : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT idEffectGroup;
  DT_INT fLoop;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
