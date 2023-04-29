/**
 * Definition: tcb02466c
 * Hash: cb02466c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcb02466c : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::World>> arDungeons;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
