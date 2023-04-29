/**
 * Definition: tea87d074
 * Hash: ea87d074
 */

#pragma once

#include "../types.h"
#include "t3bb15785.h"

#pragma push(pack, 1)

struct tea87d074 : public ComplexRead {
  DT_SNO<SnoGroup::Material> unk_e5d66c8;
  DT_VARIABLEARRAY<t3bb15785> unk_d45db8b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
