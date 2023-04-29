/**
 * Definition: t7247d2c9
 * Hash: 7247d2c9
 */

#pragma once

#include "../types.h"
#include "PopGroupHandle.h"

#pragma push(pack, 1)

struct t7247d2c9 : public ComplexRead {
  DT_VARIABLEARRAY<DT_GBID<0x14>> unk_d5f2612;
  PopGroupHandle unk_37aa815;
  DT_RANGE<DT_INT> unk_93e8f53;
  DT_FLOAT unk_919c515;
  DT_FLOAT flNoSpawnChance;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
