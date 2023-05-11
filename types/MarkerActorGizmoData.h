/**
 * Definition: MarkerActorGizmoData
 * Hash: ce8080fb
 */

#pragma once

#include "../types.h"
#include "GizmoConditionData.h"
#include "MarkerBaseGizmoData.h"
#include "MarkerChestGizmoData.h"
#include "MarkerDoorGizmoData.h"
#include "MarkerHiddenCacheGizmoData.h"
#include "MarkerPortalGizmoData.h"
#include "MarkerWaypointGizmoData.h"
#include "t2d410740.h"
#include "t478eb43b.h"
#include "t4ddd8603.h"
#include "t6f3d2867.h"
#include "t7324c6f7.h"
#include "t7b11e164.h"
#include "t8d3deb43.h"
#include "tb2ef091a.h"
#include "tbf0c5b22.h"
#include "te3f5648a.h"
#include "te6346255.h"

#pragma push(pack, 1)

struct MarkerActorGizmoData : public ComplexRead {
  DT_VARIABLEARRAY<MarkerDoorGizmoData> ptDoorGizmoData;
  DT_VARIABLEARRAY<t6f3d2867> unk_fb42747;
  DT_VARIABLEARRAY<tbf0c5b22> unk_70d0dc0;
  DT_VARIABLEARRAY<t2d410740> unk_ac84ca4;
  DT_VARIABLEARRAY<t4ddd8603> unk_b64cb67;
  DT_VARIABLEARRAY<tb2ef091a> unk_83131fe;
  DT_VARIABLEARRAY<MarkerChestGizmoData> ptChestGizmoData;
  DT_VARIABLEARRAY<te6346255> unk_f48a504;
  DT_VARIABLEARRAY<MarkerPortalGizmoData> ptPortalGizmoData;
  DT_VARIABLEARRAY<t7b11e164> unk_f441be6;
  DT_VARIABLEARRAY<t478eb43b> unk_542a67d;
  DT_POLYMORPHIC_VARIABLEARRAY ptProxData;
  DT_VARIABLEARRAY<t8d3deb43> unk_604a84d;
  DT_VARIABLEARRAY<GizmoConditionData> ptGizmoConditionData;
  DT_VARIABLEARRAY<MarkerBaseGizmoData> ptMarkerBaseGizmoData;
  DT_VARIABLEARRAY<t7324c6f7> unk_ebfdb39;
  DT_VARIABLEARRAY<MarkerWaypointGizmoData> ptWaypointGizmoData;
  DT_VARIABLEARRAY<MarkerHiddenCacheGizmoData> ptHiddenCacheGizmoData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
