/**
 * Definition: t121cf2f6
 * Hash: 121cf2f6
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t121cf2f6 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwID;
  HardpointLink tHardpointLink;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
