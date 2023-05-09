/**
 * Definition: MountSetMessage
 * Hash: f7f1bb64
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct MountSetMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_70bf7e7;
  DT_ACD_NETWORK_NAME unk_ebf7690;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
