/**
 * Definition: t93bea3db
 * Hash: 93bea3db
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t93bea3db : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_VECTOR3D wpLocation;
  DT_SNO<SnoGroup::MarkerSet> snoMarkerSet;
  DT_INT nMarkerID;
  DT_INT64 dwStartTime;
  DT_INT64 dwEndTime;
  DT_UINT unk_eddc1bd;
  DT_GBID<0x3c> gbidSubzoneModifierTag;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
