/**
 * Definition: t273a9eee
 * Hash: 273a9eee
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t273a9eee : public ComplexRead {
  DT_GBID<0x14> gbidSpawnLocType;
  DT_ENUM<DT_INT> eRestrictionType;
  DT_INT nCountActive;
  DT_FLOAT unk_8497b9f;
  DT_FLOAT unk_74768a4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
