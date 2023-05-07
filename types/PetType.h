/**
 * Definition: PetType
 * Hash: 22f3fab
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct PetType : public ComplexRead {
  GBIDHeader tHeader;
  DT_ENUM<DT_INT> unk_887ea65;
  DT_INT unk_17d5315;
  DT_INT unk_a9f95f3;
  DT_INT unk_9a99f28;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
