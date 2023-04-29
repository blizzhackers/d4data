/**
 * Definition: tb5a98293
 * Hash: b5a98293
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb5a98293 : public ComplexRead {
  DT_INT unk_61aa893;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Script>> snoScript;
  DT_SNO<SnoGroup::Conversation> unk_ebb20cd;
  DT_SNO<SnoGroup::ConverationList> unk_cb8d889;
  DT_SNO<SnoGroup::Music> unk_6bf9013;
  DT_SNO<SnoGroup::Power> unk_6bc1c5f;
  DT_SNO<SnoGroup::Actor> unk_cdb454b;
  DT_VARIABLEARRAY<DT_GBID<0x18>> arActorGroups;
  DT_VARIABLEARRAY<DT_GBID<0x33>> unk_b5b0f9a;
  DT_INT unk_a5973cc;
  DT_SNO<SnoGroup::Condition> unk_ba8fd29;
  DT_SNO<SnoGroup::Power> unk_a88b003;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
