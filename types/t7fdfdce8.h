/**
 * Definition: t7fdfdce8
 * Hash: 7fdfdce8
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t7fdfdce8 : public ComplexRead {
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
  DT_UINT unk_7b01c79;
  DT_ENUM<DT_INT> unk_30b49c2;
  DT_UINT unk_8781d26;
  DT_UINT unk_9a31592;
  DT_FLOAT unk_dc3a5eb;
  DT_FLOAT unk_9de2797;
  DT_FLOAT unk_a91f1a5;
  DT_FLOAT unk_9fca8d1;
  DT_INT unk_71c05df;
  DT_INT unk_325b1ab;
  DT_ENUM<DT_INT> unk_b98f05c;
  DT_UINT unk_72c9d37;
  HardpointLink unk_ed13c17;
  DT_UINT unk_264c534;
  DT_VECTOR3D unk_e4f41ba;
  DT_INT unk_8ff6495;
  DT_INT unk_983a265;
  DT_FLOAT unk_70c2d23;
  DT_FLOAT unk_215cc14;
  DT_INT unk_802b7b;
  DT_SNO<SnoGroup::Observer> unk_e27112b;
  DT_ENUM<DT_INT> unk_5b85276;
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
