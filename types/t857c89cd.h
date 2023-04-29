/**
 * Definition: t857c89cd
 * Hash: 857c89cd
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t857c89cd : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT bHide;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
