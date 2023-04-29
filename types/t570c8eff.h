/**
 * Definition: t570c8eff
 * Hash: 570c8eff
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t570c8eff : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annPlayer;
  DT_SNO<SnoGroup::Quest> unk_da5b2a0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
