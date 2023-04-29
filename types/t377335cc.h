/**
 * Definition: t377335cc
 * Hash: 377335cc
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t377335cc : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  HardpointLink tHardpointLink;
  DT_UINT unk_50647a1;
  DT_SNO<SnoGroup::SoundTable> unk_b887a97;
  DT_UINT dwID;
  TriggerCleanup tCleanup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
