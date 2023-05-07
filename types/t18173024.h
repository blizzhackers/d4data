/**
 * Definition: t18173024
 * Hash: 18173024
 */

#pragma once

#include "../types.h"
#include "t57fcadb.h"
#include "t8462796a.h"
#include "te83323fe.h"

#pragma push(pack, 1)

struct t18173024 : public ComplexRead {
  DT_UINT dwSeed;
  DT_UINT dwSeedInitial;
  DT_SNO<SnoGroup::Quest> unk_451e596;
  DT_FIXEDARRAY<t8462796a, 128> arTiles;
  DT_FIXEDARRAY<te83323fe, 16> arDRLGEvents;
  t57fcadb unk_5999f73;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
