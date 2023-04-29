/**
 * Definition: MapRevealSceneMessage
 * Hash: b2129170
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct MapRevealSceneMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Scene> snoScene;
  AABB aabb;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_INT bRevealed;
  DT_BYTE unk_8a2f554;
  DT_INT unk_a881f4;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::LevelArea>, 4> unk_6646a2;
  DT_OPTIONAL<DT_INT> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
