/**
 * Definition: RopeEffectMessageACDToACD
 * Hash: 9afa2f1b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct RopeEffectMessageACDToACD : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Rope> snoRope;
  DT_ACD_NETWORK_NAME annFrom;
  DT_ENUM<DT_INT> ePositionFrom;
  DT_ACD_NETWORK_NAME annTo;
  DT_ACD_NETWORK_NAME unk_b883005;
  DT_ENUM<DT_INT> ePositionTo;
  DT_INT bIgnoreOwnerAlpha;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
