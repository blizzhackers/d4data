/**
 * Definition: ActorDefinition
 * Hash: b7e17422
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "ActorCollisionData.h"
#include "AxialCylinder.h"
#include "LookLink.h"
#include "MsgTriggeredEvent.h"
#include "Sphere.h"
#include "t1bdec104.h"
#include "t2cfba1c3.h"
#include "t2f81f05b.h"
#include "t35abf7a0.h"
#include "t3c856b06.h"
#include "t4174a154.h"
#include "t4a3fc7b4.h"
#include "t514e1e36.h"
#include "t56dd8f42.h"
#include "t76435459.h"
#include "t7e01ffa9.h"
#include "t89ecf89d.h"
#include "t9f99b084.h"
#include "tabd62f10.h"
#include "tb2f69ab5.h"
#include "tb8942531.h"
#include "tbb55e0d8.h"
#include "tc072f0f4.h"
#include "tdbd500aa.h"
#include "te3835e40.h"
#include "tf04ef15f.h"
#include "tf32c2fd9.h"

#pragma push(pack, 1)

struct ActorDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_UINT dwFlags;
  DT_UINT dwFlagsEx;
  DT_SNO<SnoGroup::Appearance> snoAppearance;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Appearance>> unk_ecc360f;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::AnimSet>> unk_479d177;
  DT_SNO<SnoGroup::AnimTree> snoAnimTree;
  tb2f69ab5 unk_db10329;
  DT_ENUM<DT_INT> eVariantType;
  LookLink unk_441fd2e;
  DT_UINT unk_3d234d5;
  DT_RANGE<DT_INT> unk_9ae2069;
  AxialCylinder wcylBounds;
  AABB aabbBounds;
  Sphere wsBounds;
  AABB unk_5daa275;
  DT_VECTOR3D wpLocationPowerSrc;
  DT_ENUM<DT_INT> ePickStyle;
  DT_FLOAT flAttachmentScaleFactor;
  DT_ENUM<DT_INT> unk_603bb31;
  DT_ENUM<DT_INT> unk_ce65d4b;
  DT_FLOAT unk_c794c59;
  DT_FLOAT unk_99ee15d;
  DT_FLOAT unk_1cf72ac;
  DT_FLOAT unk_3598432;
  DT_FLOAT unk_e579f8c;
  DT_FLOAT unk_9d78021;
  DT_ENUM<DT_INT> eTopology;
  DT_VARIABLEARRAY<MsgTriggeredEvent> ptMsgTriggeredEvents;
  DT_VARIABLEARRAY<t514e1e36> unk_9c61362;
  DT_VARIABLEARRAY<ActorCollisionData> ptCollData;
  DT_ENUM<DT_INT> unk_17acd26;
  DT_ENUM<DT_INT> unk_8fbba9b;
  DT_POLYMORPHIC_VARIABLEARRAY unk_85f8d24;
  DT_VARIABLEARRAY<t2f81f05b> ptMonsterData;
  DT_VARIABLEARRAY<tabd62f10> ptCritterData;
  DT_VARIABLEARRAY<t35abf7a0> ptPlayerData;
  DT_VARIABLEARRAY<t56dd8f42> ptItemData;
  DT_VARIABLEARRAY<t7e01ffa9> unk_3a551d4;
  DT_VARIABLEARRAY<tf32c2fd9> unk_54868a4;
  DT_VARIABLEARRAY<te3835e40> unk_926b06b;
  DT_VARIABLEARRAY<t1bdec104> unk_3960019;
  DT_VARIABLEARRAY<t4a3fc7b4> unk_402931f;
  DT_VARIABLEARRAY<t2cfba1c3> unk_29ef3ee;
  DT_VARIABLEARRAY<tf04ef15f> ptBrainData;
  DT_VARIABLEARRAY<tdbd500aa> ptServerData;
  DT_VARIABLEARRAY<tb8942531> unk_9c719dc;
  DT_VARIABLEARRAY<t89ecf89d> unk_b1fed48;
  DT_VARIABLEARRAY<tbb55e0d8> unk_c88d583;
  DT_VARIABLEARRAY<tc072f0f4> unk_8047aff;
  DT_VARIABLEARRAY<t9f99b084> unk_da0202f;
  DT_VARIABLEARRAY<t3c856b06> unk_ea1a3d1;
  DT_INT64 ptPostprocessed;
  DT_SNO<SnoGroup::MarkerSet> unk_2a84dc9;
  DT_FLOAT unk_d2b5e35;
  DT_UINT unk_2607092;
  DT_UINT unk_79da2a0;
  DT_VARIABLEARRAY<t4174a154> unk_261d1df;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
