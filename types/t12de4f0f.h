/**
 * Definition: t12de4f0f
 * Hash: 12de4f0f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t12de4f0f : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::Actor> snoActor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
