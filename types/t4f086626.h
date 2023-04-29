/**
 * Definition: t4f086626
 * Hash: 4f086626
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4f086626 : public ComplexRead {
  DT_SNO<SnoGroup::WorldState> snoWorldState;
  DT_INT nValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
