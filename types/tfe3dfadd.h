/**
 * Definition: tfe3dfadd
 * Hash: fe3dfadd
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tfe3dfadd : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_ddfb7d6;
  DT_INT64 unk_526a589;
  DT_FLOAT flCooldown;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
