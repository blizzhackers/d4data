/**
 * Definition: EnterWorldMessage
 * Hash: 54a8b5eb
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tdb797d73.h"

#pragma push(pack, 1)

struct EnterWorldMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_FIXEDARRAY<tdb797d73, 2> unk_23ac715;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
