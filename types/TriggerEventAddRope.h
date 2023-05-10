/**
 * Definition: TriggerEventAddRope
 * Hash: 76848a75
 */

#pragma once

#include "../types.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"
#include "t1f843277.h"

#pragma push(pack, 1)

struct TriggerEventAddRope : public ComplexRead {
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
  DT_UINT dwID;
  DT_SNO<SnoGroup::Rope> snoRope;
  DT_SNO<SnoGroup::Power> unk_760871b;
  DT_FIXEDARRAY<t1f843277, 2> unk_f0a4c41;
  DT_VARIABLEARRAY<t1f843277> unk_825667e;
  DT_VECTOR2D vecScalar;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
