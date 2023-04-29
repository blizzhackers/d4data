/**
 * Definition: t679c5c9d
 * Hash: 679c5c9d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t679c5c9d : public ComplexRead {
  DT_ENUM<DT_INT> eTeamIndex;
  DT_ENUM<DT_INT> eMonsterRarity;
  DT_SNO<SnoGroup::ConverationList> snoConversationList;
  DT_INT fAIDisabled;
  DT_INT unk_84adee7;
  DT_INT unk_fd4cbca;
  DT_INT unk_b5afb08;
  DT_INT unk_2a0e071;
  DT_ENUM<DT_INT> unk_1c56441;
  DT_SNO<SnoGroup::AiBehavior> unk_a497096;
  DT_SNO<SnoGroup::AnimSet> unk_7a5aecd;
  DT_FLOAT unk_e86679d;
  DT_ENUM<DT_INT> unk_8e70eff;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
