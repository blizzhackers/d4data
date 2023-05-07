/**
 * Definition: t146588b2
 * Hash: 146588b2
 */

#pragma once

#include "../types.h"
#include "t377ff5a8.h"

#pragma push(pack, 1)

struct t146588b2 : public ComplexRead {
  DT_CSTRING unk_7fb8d12;
  DT_ENUM<DT_INT> eZone;
  DT_CSTRING szToolTip;
  DT_VARIABLEARRAY<t377ff5a8> unk_d460343;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
