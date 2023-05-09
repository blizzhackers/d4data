/**
 * Definition: EnterWorldMessage
 * Hash: 54a8b5eb
 */

#pragma once

#include "../types.h"
#include "EnterWorldPlayer.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct EnterWorldMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_FIXEDARRAY<EnterWorldPlayer, 2> unk_23ac715;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
