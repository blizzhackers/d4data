/**
 * Definition: t5a0f90a6
 * Hash: 5a0f90a6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5a0f90a6 : public ComplexRead {
  DT_SNO<SnoGroup::Quest> snoStartQuest;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Quest>> unk_dc30525;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Quest>> unk_6cc9ab2;
  DT_SNO<SnoGroup::Item> unk_c25c9f0;
  DT_FIXEDARRAY<DT_UINT, 3> unk_9f4512f;
  DT_FIXEDARRAY<DT_UINT, 3> unk_8649a3e;
  DT_FIXEDARRAY<DT_UINT, 3> unk_85f303c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
