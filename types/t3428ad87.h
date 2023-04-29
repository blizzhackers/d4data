/**
 * Definition: t3428ad87
 * Hash: 3428ad87
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t3428ad87 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<64> szLocationName;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_INT nActorCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
