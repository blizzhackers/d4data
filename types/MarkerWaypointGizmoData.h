/**
 * Definition: MarkerWaypointGizmoData
 * Hash: 104e4efd
 */

#pragma once

#include "../types.h"
#include "WaypointEffectInfo.h"

#pragma push(pack, 1)

struct MarkerWaypointGizmoData : public ComplexRead {
  DT_FIXEDARRAY<WaypointEffectInfo, 4> unk_ede880e;
  DT_SNO<SnoGroup::Quest> unk_92edf50;
  DT_UINT hZoneLabel;
  DT_STARTLOC_NAME uEntranceGUID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
