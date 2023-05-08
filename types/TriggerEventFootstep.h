/**
 * Definition: TriggerEventFootstep
 * Hash: 4f31e0ca
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct TriggerEventFootstep : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  HardpointLink tHardpointLink;
  DT_ENUM<DT_INT> eFootstepType;
  DT_ENUM<DT_INT> unk_5de393e;
  DT_SNO<SnoGroup::SoundTable> unk_a32d8d5;
  DT_SNO<SnoGroup::Surface> unk_522f94d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
