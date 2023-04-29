/**
 * Definition: tba7da2d8
 * Hash: ba7da2d8
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tba7da2d8 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_GBID<0x4> unk_d8b6d76;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
