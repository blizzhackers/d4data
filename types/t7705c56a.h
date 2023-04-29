/**
 * Definition: t7705c56a
 * Hash: 7705c56a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7705c56a : public ComplexRead {
  DT_ENUM<DT_INT> unk_c3af77b;
  DT_ENUM<DT_INT> unk_dd5d06c;
  DT_ENUM<DT_INT> unk_7f93f1d;
  DT_SNO<SnoGroup::Recipe> snoRecipe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
