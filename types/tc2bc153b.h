/**
 * Definition: tc2bc153b
 * Hash: c2bc153b
 */

#pragma once

#include "../types.h"
#include "t6b1c5d9c.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct tc2bc153b : public ComplexRead {
  ta78f399f tHeader;
  DT_UINT dwTypes;
  DT_ENUM<DT_INT> ePlayerClass;
  DT_ENUM<DT_INT> eDamageTypeOverride;
  DT_INT bIsPrimary;
  DT_FIXEDARRAY<t6b1c5d9c, 5> unk_1baedbe;
  DT_FIXEDARRAY<t6b1c5d9c, 5> unk_e9ab5ed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
