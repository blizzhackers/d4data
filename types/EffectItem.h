/**
 * Definition: EffectItem
 * Hash: f0aec15c
 */

#pragma once

#include "../types.h"
#include "MsgTriggeredEvent.h"

#pragma push(pack, 1)

struct EffectItem : public ComplexRead {
  DT_UINT dwWeight;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Surface>> snoSurfaces;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::ItemType>> unk_7903361;
  DT_VARIABLEARRAY<DT_UINT> unk_d5fd413;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> unk_ae86ed6;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> arTopology;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> unk_43e7b5a;
  DT_UINT dwHash;
  MsgTriggeredEvent tMsgTriggeredEvents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
