/**
 * Definition: ParagonNodeMessage
 * Hash: d77b8113
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ParagonNodeMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwNodeIndex;
  DT_INT bIsCheat;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
