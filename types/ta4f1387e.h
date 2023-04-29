/**
 * Definition: ta4f1387e
 * Hash: a4f1387e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta4f1387e : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoPlayerActor;
  DT_SNO<SnoGroup::AnimSet> unk_e1f5441;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
