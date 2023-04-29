/**
 * Definition: RevealSceneMessage
 * Hash: 96c5e972
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "RequiredMessageHeader.h"
#include "t5d0fa598.h"
#include "tb3c2ea5e.h"

#pragma push(pack, 1)

struct RevealSceneMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  t5d0fa598 tSceneSpec;
  DT_SHARED_SERVER_DATA_ID idSScene;
  DT_SNO<SnoGroup::Scene> snoScene;
  DT_SNO<SnoGroup::MarkerSet> unk_4b3e556;
  PRTransform transform;
  DT_FIXEDARRAY<DT_GBID<0x4>, 256> arAppliedLabels;
  DT_FIXEDARRAY<tb3c2ea5e, 32> unk_90d479d;
  DT_FIXEDARRAY<DT_INT, 4> unk_bc55436;
  DT_UINT dwSceneFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
