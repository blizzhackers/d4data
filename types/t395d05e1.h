/**
 * Definition: t395d05e1
 * Hash: 395d05e1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t395d05e1 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Recipe> snoRecipe;
  DT_INT64 uAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
