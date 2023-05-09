/**
 * Definition: WorldStateSubcondition
 * Hash: af401a3a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct WorldStateSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::WorldState> snoWorldState;
  DT_INT nValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
