/**
 * Definition: MarkerEncounterData
 * Hash: c13618f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerEncounterData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_GBID<0x18>> arActorGroups;
  DT_VARIABLEARRAY<DT_GBID<0x33>> unk_b5b0f9a;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Script>> snoScript;
  DT_SNO<SnoGroup::AiBehavior> unk_a497096;
  DT_SNO<SnoGroup::AnimSet> unk_7a5aecd;
  DT_ENUM<DT_INT> unk_8e70eff;
  DT_INT unk_c627b16;
  DT_SNO<SnoGroup::Condition> unk_ba8fd29;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
