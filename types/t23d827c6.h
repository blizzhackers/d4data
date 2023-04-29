/**
 * Definition: t23d827c6
 * Hash: 23d827c6
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t23d827c6 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_UINT uEntranceGUID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
