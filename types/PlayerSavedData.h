/**
 * Definition: PlayerSavedData
 * Hash: 5d30597a
 */

#pragma once

#include "../types.h"
#include "ActiveSkillSavedData.h"
#include "HirelingSavedData.h"
#include "HotbarButtonData.h"
#include "SavedTransmog.h"
#include "SkillTreeNodeEntry.h"
#include "TransmogSlot.h"
#include "t30f99fc2.h"
#include "t7bed253b.h"
#include "t8c2bb16d.h"
#include "tfeacdb4e.h"

#pragma push(pack, 1)

struct PlayerSavedData : public ComplexRead {
  DT_FIXEDARRAY<HotbarButtonData, 6> tHotbarBtnAssignments;
  HotbarButtonData tPotionBtn;
  DT_UINT uSecondsPlayed;
  HirelingSavedData tHirelingSavedData;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::LevelArea>, 64> unk_4a24596;
  DT_UINT uTimeLastLevel;
  DT_FIXEDARRAY<ActiveSkillSavedData, 6> tActiveSkills;
  DT_FIXEDARRAY<t8c2bb16d, 6> tEnchantSkills;
  t7bed253b unk_68ce6c8;
  DT_FIXEDARRAY<tfeacdb4e, 50> unk_a609782;
  DT_FIXEDARRAY<SkillTreeNodeEntry, 128> unk_9a1fb9a;
  DT_UINT unk_4968c70;
  DT_INT unk_a048c51;
  DT_FIXEDARRAY<TransmogSlot, 15> arTransmogSlots;
  DT_FIXEDARRAY<SavedTransmog, 5> unk_295c984;
  t30f99fc2 unk_bb40836;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
