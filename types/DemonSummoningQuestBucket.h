/**
 * Definition: DemonSummoningQuestBucket
 * Hash: 41e42840
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"
#include "t5a0f90a6.h"

#pragma push(pack, 1)

struct DemonSummoningQuestBucket : public ComplexRead {
  GBIDHeader tHeader;
  DT_VARIABLEARRAY<t5a0f90a6> arQuests;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
