/**
 * Definition: t728889dd
 * Hash: 728889dd
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t728889dd : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_ENUM<DT_INT> eMsgPassMethod;
  DT_ENUM<DT_INT> dwMsgKey;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
