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
  DT_INT unk_5c73d43;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
