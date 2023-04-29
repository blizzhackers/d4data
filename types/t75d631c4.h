/**
 * Definition: t75d631c4
 * Hash: 75d631c4
 */

#pragma once

#include "../types.h"
#include "AABB.h"

#pragma push(pack, 1)

struct t75d631c4 : public ComplexRead {
  AABB unk_f169594;
  AABB unk_9a685b8;
  DT_UINT unk_c225718;
  DT_INT64 unk_7339eb9;
  DT_INT64 unk_179f850;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
