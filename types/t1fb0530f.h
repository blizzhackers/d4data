/**
 * Definition: t1fb0530f
 * Hash: 1fb0530f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t1fb0530f : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_SNO<SnoGroup::Scene> snoScene;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_CHARARRAY<128> szTileSet;
  DT_CHARARRAY<128> szMarker;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
