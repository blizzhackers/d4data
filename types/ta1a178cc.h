/**
 * Definition: ta1a178cc
 * Hash: a1a178cc
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct ta1a178cc : public ComplexRead {
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
  DT_ENUM<DT_INT> eTargetType;
  DT_UINT unk_96c6da9;
  HardpointLink unk_a1d7e72;
  DT_UINT unk_bd1644f;
  DT_VECTOR3D vecTargetOffset;
  DT_ENUM<DT_INT> unk_70ccb7e;
  DT_VECTOR3D unk_f294e79;
  DT_ENUM<DT_INT> unk_991ae81;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
