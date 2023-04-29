/**
 * Definition: t528bfa99
 * Hash: 528bfa99
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "PRTransform.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t528bfa99 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_85269a4;
  DT_INT unk_b9368ac;
  DT_INT unk_f50537b;
  DT_INT unk_6fd6f47;
  DT_INT unk_f22bb26;
  DT_INT unk_4102322;
  DT_INT unk_9a2c9a0;
  DT_INT unk_ab8c139;
  DT_INT unk_9a91dcf;
  DT_INT unk_edec5ed;
  DT_UINT unk_e312e34;
  DT_UINT dwActorID;
  DT_UINT dwID;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_FIXEDARRAY<HardpointLink, 2> tHardpointLinks;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  DT_UINT unk_b0f4eeb;
  PRTransform transform;
  HardpointLink unk_315ce85;
  DT_SNO<SnoGroup::Power> unk_760871b;
  DT_VECTOR3D vecScale;
  DT_VECTOR2D vecScalar;
  DT_FLOAT unk_30e0427;
  DT_FLOAT unk_2130773;
  DT_FLOAT unk_1149cd2;
  DT_FLOAT unk_10405ce;
  DT_FLOAT unk_96134cc;
  DT_FLOAT unk_498cae5;
  DT_UINT dwUniqueID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
