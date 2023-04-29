/**
 * Definition: t70873aca
 * Hash: 70873aca
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t70873aca : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Recipe> snoRecipe;
  DT_INT64 uAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
