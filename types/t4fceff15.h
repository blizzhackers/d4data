/**
 * Definition: t4fceff15
 * Hash: 4fceff15
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"
#include "t5eb6ade.h"

#pragma push(pack, 1)

struct t4fceff15 : public ComplexRead {
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
  DT_SNO<SnoGroup::Observer> snoObserver;
  DT_INT unk_74b7ed1;
  DT_ENUM<DT_INT> eTargetType;
  DT_UINT unk_96c6da9;
  HardpointLink unk_a1d7e72;
  DT_UINT unk_bd1644f;
  DT_VARIABLEARRAY<t5eb6ade> unk_22446a6;
  DT_ENUM<DT_INT> unk_991ae81;
  DT_FLOAT unk_30c3aff;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
