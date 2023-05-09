/**
 * Definition: SceneDefinition
 * Hash: 95ad0b77
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "AIPathData.h"
#include "FogMask.h"
#include "LookLink.h"
#include "t9109ba33.h"
#include "tff4098b9.h"

#pragma push(pack, 1)

struct SceneDefinition : public ComplexRead {
  DT_UINT dwFlags;
  AABB aabbBounds;
  AABB unk_ec132ae;
  DT_FLOAT flGridSize;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::MarkerSet>> arLayers;
  LookLink tLookLink;
  DT_VARIABLEARRAY<t9109ba33> unk_f60a9cd;
  DT_SNO<SnoGroup::Appearance> snoAppearance;
  DT_SNO<SnoGroup::AudioContext> snoAudioContext;
  DT_FLOAT flTileX;
  DT_FLOAT flTileY;
  DT_VARIABLEARRAY<AIPathData> unk_c20ed15;
  tff4098b9 unk_57e8e2b;
  DT_ENUM<DT_INT> eDRLGTileType;
  tff4098b9 unk_29b7731;
  FogMask tFogMask;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
