/**
 * Definition: t1c6da234
 * Hash: 1c6da234
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1c6da234 : public ComplexRead {
  DT_GBID<0x14> gbidSpawnLocType;
  DT_ENUM<DT_INT> eRestrictionType;
  DT_INT unk_1d75793;
  DT_FLOAT unk_8497b9f;
  DT_FLOAT flDuration;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
