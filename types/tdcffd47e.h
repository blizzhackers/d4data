/**
 * Definition: tdcffd47e
 * Hash: dcffd47e
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tdcffd47e : public ComplexRead {
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
  DT_UINT dwObjectID;
  DT_INT unk_17909b9;
  HardpointLink unk_a1d7e72;
  DT_UINT unk_bd1644f;
  DT_ENUM<DT_INT> unk_5b85276;
  DT_ENUM<DT_INT> unk_daebe18;
  DT_UINT unk_6101673;
  HardpointLink unk_8470ffc;
  DT_UINT unk_46c8459;
  DT_ENUM<DT_INT> unk_991ae81;
  DT_ENUM<DT_INT> eMoveRate;
  DT_ENUM<DT_INT> unk_3c71266;
  DT_INT unk_c751343;
  DT_INT unk_23237e1;
  DT_FLOAT unk_f1b6afc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
