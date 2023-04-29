/**
 * Definition: tdf12c188
 * Hash: df12c188
 */

#pragma once

#include "../types.h"
#include "tdf741cd1.h"

#pragma push(pack, 1)

struct tdf12c188 : public ComplexRead {
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_POLYMORPHIC_VARIABLEARRAY unk_3ddddaa;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
