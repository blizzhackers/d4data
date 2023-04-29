/**
 * Definition: t94666cb9
 * Hash: 94666cb9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t94666cb9 : public ComplexRead {
  DT_UINT dwID;
  DT_SNO<SnoGroup::Condition> snoCondition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
