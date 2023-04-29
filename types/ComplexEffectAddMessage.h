/**
 * Definition: ComplexEffectAddMessage
 * Hash: e0a77a33
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ComplexEffectAddMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> idSComplexEffect;
  DT_ENUM<DT_INT> eType;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_ACD_NETWORK_NAME annSource;
  DT_ACD_NETWORK_NAME annDest;
  DT_ACD_NETWORK_NAME unk_b883005;
  DT_UINT dwParam1;
  DT_UINT dwParam2;
  DT_UINT bIgnoreOwnerAlpha;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
