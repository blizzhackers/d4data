/**
 * Definition: t85063c83
 * Hash: 85063c83
 */

#pragma once

#include "../types.h"
#include "ted5fa159.h"

#pragma push(pack, 1)

struct t85063c83 : public ComplexRead {
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_VARIABLEARRAY<ted5fa159> unk_4de645f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
