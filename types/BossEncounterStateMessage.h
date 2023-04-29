/**
 * Definition: BossEncounterStateMessage
 * Hash: ba567750
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct BossEncounterStateMessage : public ComplexRead {
  t72bd65f8 tHeader;
  DT_SNO<SnoGroup::LevelArea> unk_ebebe4b;
  DT_ENUM<DT_INT> eState;
  DT_FIXEDARRAY<DT_ACD_NETWORK_NAME, 4> unk_57adc31;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
