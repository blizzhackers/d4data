/**
 * Definition: t8e64b090
 * Hash: 8e64b090
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t8e64b090 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<64> szMarkerName;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_SNO<SnoGroup::Quest> snoQuest;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
