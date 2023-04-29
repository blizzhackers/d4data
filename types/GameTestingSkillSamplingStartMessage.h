/**
 * Definition: GameTestingSkillSamplingStartMessage
 * Hash: e7cf1b85
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct GameTestingSkillSamplingStartMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<64> unk_e99ade5;
  DT_SNO<SnoGroup::Power> snoPower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
