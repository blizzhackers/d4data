/**
 * Definition: ta121d296
 * Hash: a121d296
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "LookLink.h"
#include "PRTransform.h"
#include "TriggerConditions.h"
#include "tb86f8607.h"
#include "tf74028c3.h"

#pragma push(pack, 1)

struct ta121d296 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwID;
  DT_SNO_NAME snoname;
  DT_FIXEDARRAY<HardpointLink, 2> tHardpointLinks;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  DT_INT unk_24f5a5c;
  LookLink tLookLink;
  DT_INT unk_48fd494;
  DT_ENUM<DT_INT> unk_6b8bffc;
  DT_UINT unk_61399d;
  DT_UINT unk_6c0cb90;
  DT_FLOAT flScale;
  DT_UINT dwSeed;
  DT_UINT unk_b0f4eeb;
  DT_VECTOR2D vecScalar;
  PRTransform transform;
  HardpointLink unk_315ce85;
  DT_RANGE<DT_INT> unk_c7fa18a;
  DT_SNO<SnoGroup::Power> unk_760871b;
  DT_FLOAT dwSpawnedActorLife;
  tf74028c3 unk_245c537;
  DT_VARIABLEARRAY<tb86f8607> unk_a03b96b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
