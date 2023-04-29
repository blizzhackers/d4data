/**
 * Definition: ClanLabel
 * Hash: 595601de
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ClanLabel : public ComplexRead {
  DT_UINT szName;
  DT_ENUM<DT_INT> eLabelType;
  DT_INT bEnabled;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
