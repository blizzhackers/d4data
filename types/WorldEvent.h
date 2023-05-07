/**
 * Definition: WorldEvent
 * Hash: 7ed5a9ea
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"

#pragma push(pack, 1)

struct WorldEvent : public ComplexRead {
  MarkerHandle tMarkerHandle;
  DT_SNO<SnoGroup::WorldState> snoWorldState;
  DT_INT nValue;
  DT_SNO<SnoGroup::Scene> snoScene;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
