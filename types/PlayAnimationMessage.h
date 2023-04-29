/**
 * Definition: PlayAnimationMessage
 * Hash: 26ca63fb
 */

#pragma once

#include "../types.h"
#include "PlayAnimationMessageSpec.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct PlayAnimationMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_ENUM<DT_INT> eAnimReason;
  DT_FLOAT flUnitAnimStartTime;
  DT_FIXEDARRAY<PlayAnimationMessageSpec, 6> tAnim;
  DT_OPTIONAL<DT_INT> unk_2875d89;
  DT_OPTIONAL<DT_INT> unk_cbb1480;
  DT_OPTIONAL<DT_INT> unk_5ffb133;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
