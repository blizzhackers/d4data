/**
 * Definition: tdb8a98c8
 * Hash: db8a98c8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdb8a98c8 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_ENUM<DT_INT> eVariant;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
