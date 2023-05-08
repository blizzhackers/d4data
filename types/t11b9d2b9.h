/**
 * Definition: t11b9d2b9
 * Hash: 11b9d2b9
 */

#pragma once

#include "../types.h"
#include "QuestCallback.h"
#include "QuestReward.h"
#include "t2b920147.h"

#pragma push(pack, 1)

struct t11b9d2b9 : public ComplexRead {
  DT_UINT dwUID;
  DT_VARIABLEARRAY<t2b920147> ptLink;
  DT_VARIABLEARRAY<QuestCallback> arCallbacks;
  DT_INT unk_a845fa9;
  DT_SNO<SnoGroup::Item> unk_89d02b1;
  QuestReward unk_68d4eb0;
  QuestReward tReward;
  QuestReward unk_b3249db;
  DT_INT unk_8c63f3c;
  DT_SNO<SnoGroup::Conversation> unk_e903c4e;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Item>> unk_8f432f8;
  DT_CSTRING unk_98d4504;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
