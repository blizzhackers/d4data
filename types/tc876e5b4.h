/**
 * Definition: tc876e5b4
 * Hash: c876e5b4
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"
#include "te97cce1f.h"

#pragma push(pack, 1)

struct tc876e5b4 : public ComplexRead {
  DT_UINT dwType;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_FLOAT tDuration;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  TriggerCleanup tCleanup;
  DT_INT unk_49e9257;
  DT_INT unk_5490979;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eObjectType;
  HardpointLink unk_a1d7e72;
  DT_UINT dwObjectID;
  HardpointLink tHardpointLink;
  DT_INT unk_896cea7;
  DT_INT unk_454a2a1;
  DT_ENUM<DT_INT> unk_991ae81;
  te97cce1f unk_10734fd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
