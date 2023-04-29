/**
 * Definition: EffectGroupACDToACDMessage
 * Hash: 26817e12
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "td8ee97d5.h"

#pragma push(pack, 1)

struct EffectGroupACDToACDMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_ACD_NETWORK_NAME annFrom;
  DT_ACD_NETWORK_NAME annTo;
  DT_ACD_NETWORK_NAME unk_b883005;
  td8ee97d5 unk_3f8ef50;
  td8ee97d5 unk_50e9159;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
