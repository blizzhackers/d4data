/**
 * Definition: DebugActorTooltipMessage
 * Hash: f9341030
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct DebugActorTooltipMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_CHARARRAY<1024> szTooltip;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
