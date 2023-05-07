/**
 * Definition: PlayEffectMessage
 * Hash: bfd1df88
 */

#pragma once

#include "../types.h"
#include "HardpointInfo.h"
#include "RequiredMessageHeader.h"
#include "t3940c0fe.h"

#pragma push(pack, 1)

struct PlayEffectMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_ENUM<DT_INT> eEffectType;
  DT_OPTIONAL<DT_INT> nEffectParameter;
  DT_OPTIONAL<DT_INT> unk_4d7691e;
  DT_OPTIONAL<DT_INT> annPlayer;
  DT_OPTIONAL<DT_INT> annAttacker;
  DT_OPTIONAL<DT_INT> flSpeedScale;
  DT_OPTIONAL<DT_INT> dwEffectFlags;
  DT_OPTIONAL<DT_INT> snoPowerSource;
  DT_OPTIONAL<DT_INT> unk_cf6449d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
