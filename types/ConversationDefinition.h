/**
 * Definition: ConversationDefinition
 * Hash: c66617a4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ConversationDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eConvType;
  DT_SNO<SnoGroup::Quest> unk_1fd072a;
  DT_SNO<SnoGroup::Quest> unk_951e771;
  DT_SNO<SnoGroup::Conversation> unk_aefb1a3;
  DT_FLOAT flCooldownTime;
  DT_FLOAT unk_5031de3;
  DT_INT unk_3587d15;
  DT_INT unk_d35e9de;
  DT_INT unk_8d6f162;
  DT_INT unk_ac91f5d;
  DT_INT unk_e1d8535;
  DT_INT unk_b32ef27;
  DT_UINT dwFlags;
  DT_POLYMORPHIC_VARIABLEARRAY unk_a159b10;
  DT_CHARARRAY<128> szSetPlayerFlag;
  DT_UINT unk_bbc67ad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
