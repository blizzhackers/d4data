/**
 * Definition: SetIdleAnimationMessage
 * Hash: ae10292f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct SetIdleAnimationMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Power> unk_740ce2b;
  DT_OPTIONAL<DT_INT> unk_fefc30f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
