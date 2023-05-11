/**
 * Definition: tf65c4363
 * Hash: f65c4363
 */

#pragma once

#include "../types.h"
#include "PrefabCustomization.h"

#pragma push(pack, 1)

struct tf65c4363 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Script>> snoScript;
  DT_GBID<0x14> gbidSpawnLocType;
  DT_VARIABLEARRAY<DT_GBID<0x18>> arActorGroups;
  DT_VARIABLEARRAY<DT_GBID<0x33>> unk_b5b0f9a;
  DT_VARIABLEARRAY<PrefabCustomization> arPrefabCustomizations;
  DT_INT bIsChild;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
