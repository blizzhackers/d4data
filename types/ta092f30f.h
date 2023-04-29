/**
 * Definition: ta092f30f
 * Hash: a092f30f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta092f30f : public ComplexRead {
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_SNO<SnoGroup::MarkerSet> snoMarkerSet;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
