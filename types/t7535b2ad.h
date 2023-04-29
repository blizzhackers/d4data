/**
 * Definition: t7535b2ad
 * Hash: 7535b2ad
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7535b2ad : public ComplexRead {
  DT_ENUM<DT_INT> eTier;
  DT_INT unk_395d1e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
