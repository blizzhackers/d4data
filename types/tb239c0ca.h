/**
 * Definition: tb239c0ca
 * Hash: b239c0ca
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb239c0ca : public ComplexRead {
  DT_UINT dwWeight;
  DT_SNO<SnoGroup::Actor> snoSummonActor;
  DT_RANGE<DT_INT> unk_c47e1e0;
  DT_UINT unk_100c8cd;
  DT_SNO<SnoGroup::Condition> snoCondition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
