/**
 * Definition: AimTargetMessage
 * Hash: 53ddbe3
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct AimTargetMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_ENUM<DT_INT> eType;
  DT_ACD_NETWORK_NAME annTarget;
  SharedServerWorldPlace tPlace;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
