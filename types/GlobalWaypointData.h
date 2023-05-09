/**
 * Definition: GlobalWaypointData
 * Hash: ce454926
 */

#pragma once

#include "../types.h"
#include "GlobalMarkerActor.h"

#pragma push(pack, 1)

struct GlobalWaypointData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<GlobalMarkerActor> unk_e4e2cd2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
