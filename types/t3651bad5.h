/**
 * Definition: t3651bad5
 * Hash: 3651bad5
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t3651bad5 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  HardpointLink tHardpointLink;
  DT_UINT unk_da88a;
  DT_SNO<SnoGroup::SoundTable> unk_2539ee0;
  DT_UINT unk_e6137fe;
  DT_INT unk_a075de4;
  DT_UINT dwID;
  TriggerCleanup tCleanup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
