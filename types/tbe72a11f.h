/**
 * Definition: tbe72a11f
 * Hash: be72a11f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tbe72a11f : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annPlayer;
  DT_SNO<SnoGroup::Actor> unk_76098e5;
  DT_UINT unk_d5b8271;
  DT_UINT unk_7888959;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
