/**
 * Definition: EffectGroupACDToACDMessage
 * Hash: 26817e12
 */

#pragma once

#include "../types.h"
#include "HardpointInfo.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct EffectGroupACDToACDMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_ACD_NETWORK_NAME annFrom;
  DT_ACD_NETWORK_NAME annTo;
  DT_ACD_NETWORK_NAME unk_b883005;
  HardpointInfo tLinkStart;
  HardpointInfo tLinkEnd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
