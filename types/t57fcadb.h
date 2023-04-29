/**
 * Definition: t57fcadb
 * Hash: 57fcadb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t57fcadb : public ComplexRead {
  DT_INT nSeed;
  DT_FIXEDARRAY<DT_GBID<0x4>, 32> unk_a4e0f39;
  DT_FIXEDARRAY<DT_GBID<0x1f>, 32> unk_a4658aa;
  DT_FIXEDARRAY<DT_GBID<0x1f>, 64> unk_dab7507;
  DT_INT unk_4ab8ccb;
  DT_INT unk_4dd09ae;
  DT_INT unk_d0e5d7f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
