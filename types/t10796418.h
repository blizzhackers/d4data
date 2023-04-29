/**
 * Definition: t10796418
 * Hash: 10796418
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t10796418 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::SubZone> snoSubzone;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
