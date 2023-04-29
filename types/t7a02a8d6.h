/**
 * Definition: t7a02a8d6
 * Hash: 7a02a8d6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7a02a8d6 : public ComplexRead {
  DT_INT nLevel;
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_UINT unk_fc97abe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
