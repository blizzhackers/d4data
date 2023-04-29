/**
 * Definition: ACDTranslateFacingMessage
 * Hash: afd13fe3
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDTranslateFacingMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_FLOAT aDesiredYaw;
  DT_INT bSnapFacing;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
