/**
 * Definition: t8cdc9da5
 * Hash: 8cdc9da5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t8cdc9da5 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_UINT uPlayerCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
