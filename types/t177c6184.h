/**
 * Definition: t177c6184
 * Hash: 177c6184
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t177c6184 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annPlayer;
  DT_SNO<SnoGroup::Actor> unk_76098e5;
  DT_OPTIONAL<DT_INT> unk_fa1aeb2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
