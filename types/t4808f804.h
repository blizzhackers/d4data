/**
 * Definition: t4808f804
 * Hash: 4808f804
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t4808f804 : public ComplexRead {
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
  DT_UINT szCameraMarker;
  DT_INT unk_8f65c3f;
  DT_ENUM<DT_INT> eOrientationMode;
  DT_ENUM<DT_INT> unk_daebe18;
  DT_UINT unk_6101673;
  HardpointLink unk_8470ffc;
  DT_UINT unk_46c8459;
  DT_VECTOR3D vecTargetOffset;
  DT_ENUM<DT_INT> unk_70ccb7e;
  DT_VECTOR3D unk_f294e79;
  DT_ENUM<DT_INT> unk_991ae81;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
