/**
 * Definition: ActorDefinition
 * Hash: b7e17422
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "ActorAIData.h"
#include "ActorBrainData.h"
#include "ActorCollisionData.h"
#include "ActorCombatData.h"
#include "ActorCritterData.h"
#include "ActorDeathData.h"
#include "ActorEffectData.h"
#include "ActorGizmoData.h"
#include "ActorItemData.h"
#include "ActorMonsterData.h"
#include "ActorMountData.h"
#include "ActorMovingData.h"
#include "ActorNPCData.h"
#include "ActorPhysicsData.h"
#include "ActorPlayerData.h"
#include "ActorProjectileData.h"
#include "ActorPropData.h"
#include "ActorServerData.h"
#include "ActorSoundTableData.h"
#include "ActorUIData.h"
#include "ActorVOData.h"
#include "AxialCylinder.h"
#include "LookLink.h"
#include "MsgTriggeredEvent.h"
#include "Sphere.h"
#include "t4174a154.h"
#include "tb2f69ab5.h"

#pragma push(pack, 1)

struct ActorDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_UINT dwFlags;
  DT_UINT dwFlagsEx;
  DT_SNO<SnoGroup::Appearance> snoAppearance;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Appearance>> arCustomizationAppearances;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::AnimSet>> arAnimSets;
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
  DT_ENUM<DT_INT> eDefaultTeam;
  DT_ENUM<DT_INT> eCullingLevel;
  DT_FLOAT unk_c794c59;
  DT_FLOAT unk_99ee15d;
  DT_FLOAT unk_1cf72ac;
  DT_FLOAT unk_3598432;
  DT_FLOAT unk_e579f8c;
  DT_FLOAT unk_9d78021;
  DT_ENUM<DT_INT> eTopology;
  DT_VARIABLEARRAY<MsgTriggeredEvent> ptMsgTriggeredEvents;
  DT_VARIABLEARRAY<ActorPhysicsData> ptPhysData;
  DT_VARIABLEARRAY<ActorCollisionData> ptCollData;
  DT_ENUM<DT_INT> unk_17acd26;
  DT_ENUM<DT_INT> unk_8fbba9b;
  DT_POLYMORPHIC_VARIABLEARRAY ptGizmoData;
  DT_VARIABLEARRAY<ActorMonsterData> ptMonsterData;
  DT_VARIABLEARRAY<ActorCritterData> ptCritterData;
  DT_VARIABLEARRAY<ActorPlayerData> ptPlayerData;
  DT_VARIABLEARRAY<ActorItemData> ptItemData;
  DT_VARIABLEARRAY<ActorCombatData> ptCombatData;
  DT_VARIABLEARRAY<ActorDeathData> ptDeathData;
  DT_VARIABLEARRAY<ActorEffectData> ptEffectData;
  DT_VARIABLEARRAY<ActorProjectileData> ptProjData;
  DT_VARIABLEARRAY<ActorPropData> ptPropData;
  DT_VARIABLEARRAY<ActorMovingData> ptMovingData;
  DT_VARIABLEARRAY<ActorBrainData> ptBrainData;
  DT_VARIABLEARRAY<ActorServerData> ptServerData;
  DT_VARIABLEARRAY<ActorUIData> ptUIData;
  DT_VARIABLEARRAY<ActorAIData> ptAIData;
  DT_VARIABLEARRAY<ActorVOData> ptVOData;
  DT_VARIABLEARRAY<ActorNPCData> ptNPCData;
  DT_VARIABLEARRAY<ActorSoundTableData> ptSoundTableData;
  DT_VARIABLEARRAY<ActorMountData> ptMountData;
  DT_INT64 ptPostprocessed;
  DT_SNO<SnoGroup::MarkerSet> snoPrefabAttachment;
  DT_FLOAT unk_d2b5e35;
  DT_UINT unk_2607092;
  DT_UINT unk_79da2a0;
  DT_VARIABLEARRAY<t4174a154> unk_261d1df;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
