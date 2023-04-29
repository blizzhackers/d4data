/**
 * Definition: tea6c310b
 * Hash: ea6c310b
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "PRTransform.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"
#include "tf619930a.h"

#pragma push(pack, 1)

struct tea6c310b : public ComplexRead {
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
  DT_FLOAT flBlendTime;
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
  DT_ENUM<DT_INT> unk_6ca113c;
  tf619930a unk_7da6e33;
  DT_ENUM<DT_INT> unk_5b85276;
  PRTransform unk_cf03a43;
  DT_ENUM<DT_INT> unk_daebe18;
  DT_UINT unk_6101673;
  HardpointLink unk_8470ffc;
  DT_UINT unk_46c8459;
  DT_ENUM<DT_INT> unk_3d8709e;
  DT_ENUM<DT_INT> unk_991ae81;
  DT_ENUM<DT_INT> unk_90448b;
  DT_FLOAT unk_c443c2;
  DT_FLOAT unk_741563;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
