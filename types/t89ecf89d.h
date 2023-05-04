/**
 * Definition: t89ecf89d
 * Hash: 89ecf89d
 */

#pragma once

#include "../types.h"
#include "AIBroadcast.h"
#include "t674e5442.h"

#pragma push(pack, 1)

struct t89ecf89d : public ComplexRead {
  DT_VARIABLEARRAY<AIBroadcast> unk_e5e7bd4;
  DT_GBID<0x15> gbidAIPropType;
  DT_INT unk_af0baa5;
  DT_VARIABLEARRAY<t674e5442> unk_766f08;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
