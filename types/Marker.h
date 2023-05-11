/**
 * Definition: Marker
 * Hash: bab8d922
 */

#pragma once

#include "../types.h"
#include "MarkerDataBase.h"
#include "MarkerGroupData.h"
#include "MarkerLink.h"
#include "PRTransform.h"
#include "PrefabData.h"

#pragma push(pack, 1)

struct Marker : public ComplexRead {
  DT_UINT dwHash;
  DT_INT nID;
  DT_ENUM<DT_INT> eType;
  PRTransform transform;
  DT_SNO_NAME snoname;
  DT_UINT dwMarkerFlags;
  DT_VECTOR3D vecScale;
  DT_POLYMORPHIC_VARIABLEARRAY ptBase;
  DT_VARIABLEARRAY<MarkerGroupData> ptGroupData;
  DT_VARIABLEARRAY<MarkerLink> ptMarkerLinks;
  DT_INT unk_c339f69;
  DT_UINT dwSeed;
  PrefabData tPrefabData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
