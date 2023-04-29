/**
 * Definition: t61d80fcd
 * Hash: 61d80fcd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t61d80fcd : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_GBID<0x18> gbidActorGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
