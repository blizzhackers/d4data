/**
 * Definition: t21e30636
 * Hash: 21e30636
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "LookLink.h"
#include "PRTransform.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"
#include "ta4f1387e.h"
#include "tb86f8607.h"
#include "tf74028c3.h"

#pragma push(pack, 1)

struct t21e30636 : public ComplexRead {
  DT_UINT dwType;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_FLOAT tDuration;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  TriggerCleanup tCleanup;
  DT_INT unk_49e9257;
  DT_INT unk_5490979;
  DT_UINT dwPad;
  DT_INT unk_85269a4;
  DT_UINT dwActorID;
  DT_SNO_NAME snoname;
  DT_UINT dwID;
  DT_FIXEDARRAY<HardpointLink, 2> tHardpointLinks;
  DT_ENUM<DT_INT> unk_e7c25e0;
  DT_SNO<SnoGroup::Power> unk_760871b;
  DT_ENUM<DT_INT> unk_beaacd1;
  DT_FLOAT unk_af58166;
  DT_FLOAT unk_3ed00d7;
  DT_UINT dwSeed;
  DT_INT fBillboard;
  DT_ENUM<DT_INT> eAddType;
  DT_INT unk_fbdc534;
  DT_INT unk_f8b13e0;
  DT_INT unk_fcc32b8;
  DT_INT unk_773852b;
  DT_INT unk_62ab747;
  DT_SNO<SnoGroup::StringList> unk_83bdc8f;
  DT_SNO<SnoGroup::StringList> unk_944e28b;
  DT_FLOAT unk_1426000;
  DT_INT unk_24f5a5c;
  LookLink tLookLink;
  DT_INT unk_48fd494;
  DT_ENUM<DT_INT> unk_6b8bffc;
  DT_SNO<SnoGroup::AnimSet> unk_e1f5441;
  DT_VARIABLEARRAY<ta4f1387e> unk_9967c81;
  DT_UINT dwSegmentsStep;
  DT_UINT unk_6c0cb90;
  DT_INT nLocalPlayerIndex;
  DT_FLOAT flScale;
  DT_UINT unk_b0f4eeb;
  DT_VECTOR2D vecScalar;
  PRTransform transform;
  HardpointLink unk_315ce85;
  DT_RANGE<DT_INT> unk_c7fa18a;
  DT_INT idRActorAttachment;
  DT_INT nPermIndex;
  DT_SNO<SnoGroup::MarkerSet> unk_c90434d;
  DT_INT unk_33e4eec;
  DT_UINT unk_e0d3870;
  DT_FLOAT unk_a45e6bd;
  DT_FLOAT unk_36bc3de;
  DT_INT nPriority;
  tf74028c3 unk_245c537;
  DT_VARIABLEARRAY<tb86f8607> unk_a03b96b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
