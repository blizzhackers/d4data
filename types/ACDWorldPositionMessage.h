/**
 * Definition: ACDWorldPositionMessage
 * Hash: d936d5ea
 */

#pragma once

#include "../types.h"
#include "EnterKnownLookOverrides.h"
#include "RequiredMessageHeader.h"
#include "WorldLocationMessageData.h"
#include "t37cff633.h"

#pragma push(pack, 1)

struct ACDWorldPositionMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  WorldLocationMessageData tWorldLocationData;
  DT_OPTIONAL<DT_INT> tLookOverrides;
  DT_OPTIONAL<DT_INT> unk_cfced5c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
