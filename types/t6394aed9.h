/**
 * Definition: t6394aed9
 * Hash: 6394aed9
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t6394aed9 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  HardpointLink tHardpointLink;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
