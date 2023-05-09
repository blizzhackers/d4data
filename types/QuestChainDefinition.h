/**
 * Definition: QuestChainDefinition
 * Hash: e26445be
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"
#include "QuestChainStep.h"

#pragma push(pack, 1)

struct QuestChainDefinition : public ComplexRead {
  DT_UINT dwNextID;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_INT unk_2feafdd;
  DT_INT unk_23523de;
  DT_ENUM<DT_INT> unk_d684e1c;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::QuestChain>> unk_f6ed359;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::SubZone>> unk_97b742f;
  DT_SNO<SnoGroup::SubZone> unk_f830510;
  DT_STARTLOC_NAME unk_8c8a554;
  MarkerHandle tMarkerHandle;
  DT_VECTOR3D vecMarkerLocation;
  MarkerHandle unk_bd5e686;
  DT_VECTOR3D unk_b89ea42;
  DT_SNO<SnoGroup::FogofWar> unk_d35a97e;
  DT_SNO<SnoGroup::EffectGroup> unk_8da547c;
  DT_SNO<SnoGroup::EffectGroup> unk_10a039b;
  DT_SNO<SnoGroup::EffectGroup> unk_62b3134;
  DT_VARIABLEARRAY<QuestChainStep> unk_adc6722;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
