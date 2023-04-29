/**
 * Definition: tc52febeb
 * Hash: c52febeb
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tc52febeb : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_ddfb7d6;
  DT_INT64 unk_526a589;
  DT_INT nIndex;
  DT_INT unk_de06696;
  DT_INT bEnabled;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
