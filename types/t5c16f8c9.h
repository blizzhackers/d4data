/**
 * Definition: t5c16f8c9
 * Hash: 5c16f8c9
 */

#pragma once

#include "../types.h"
#include "ConditionWrapper.h"
#include "t37f88072.h"
#include "t66739171.h"

#pragma push(pack, 1)

struct t5c16f8c9 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  ConditionWrapper unk_edbef87;
  DT_VARIABLEARRAY<t66739171> unk_e8c07c7;
  t37f88072 tSacrifice;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Actor>> unk_efc6d7a;
  DT_ENUM<DT_INT> unk_4901f66;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
