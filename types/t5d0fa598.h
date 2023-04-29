/**
 * Definition: t5d0fa598
 * Hash: 5d0fa598
 */

#pragma once

#include "../types.h"
#include "t4e8e96e4.h"
#include "t78854e88.h"
#include "t95119e98.h"

#pragma push(pack, 1)

struct t5d0fa598 : public ComplexRead {
  DT_UINT dwFlags;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_SNO<SnoGroup::LevelArea> unk_d2632b1;
  DT_ENUM<DT_INT> unk_989f2d7;
  DT_STARTLOC_NAME unk_74a9537;
  DT_SNO<SnoGroup::World> snoPrevWorld;
  DT_UINT uPrevEntranceGUID;
  DT_SNO<SnoGroup::LevelArea> snoPrevLevelArea;
  t78854e88 unk_c0a371a;
  t78854e88 unk_babb0a;
  DT_SNO<SnoGroup::World> snoPresetWorld;
  DT_INT nSceneChunk;
  DT_OPTIONAL<DT_INT> unk_1e9ef9d;
  DT_FIXEDARRAY<t4e8e96e4, 16> unk_bcb06ca;
  DT_FIXEDARRAY<DT_GBID<0x14>, 16> unk_5215067;
  DT_OPTIONAL<DT_INT> tDRLGCreationInfo;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
