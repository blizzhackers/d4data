/**
 * Definition: ACDGroupMessage
 * Hash: 7878d4da
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDGroupMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_FIXEDARRAY<DT_GBID<0x18>, 8> aGroups;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
