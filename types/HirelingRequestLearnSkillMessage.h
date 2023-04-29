/**
 * Definition: HirelingRequestLearnSkillMessage
 * Hash: b6091311
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct HirelingRequestLearnSkillMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Power> snoSkill;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
