/**
 * Definition: t1259dca8
 * Hash: 1259dca8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1259dca8 : public ComplexRead {
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::World> unk_af8e0d;
  DT_SNO<SnoGroup::Actor> snoActor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
