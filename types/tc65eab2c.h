/**
 * Definition: tc65eab2c
 * Hash: c65eab2c
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "tdeff56e6.h"

#pragma push(pack, 1)

struct tc65eab2c : public ComplexRead {
  DT_SNO<SnoGroup::MarkerSet> snoMarkerSet;
  DT_UINT szMarkerName;
  DT_UINT unk_770f3b7;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_ENUM<DT_INT> eActorType;
  DT_ENUM<DT_INT> eGizmoType;
  DT_SNO<SnoGroup::World> snoWorld;
  PRTransform unk_eec6058;
  DT_SNO<SnoGroup::Condition> unk_677237e;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_SNO<SnoGroup::FogofWar> snoFogOfWar;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::SubZone>> unk_c9913ac;
  DT_POLYMORPHIC_VARIABLEARRAY ptData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
