/**
 * Definition: ta3556f7f
 * Hash: a3556f7f
 */

#pragma once

#include "../types.h"
#include "tdf1582ec.h"

#pragma push(pack, 1)

struct ta3556f7f : public ComplexRead {
  DT_FIXEDARRAY<tdf1582ec, 3> unk_66caf5a;
  DT_FLOAT unk_239d877;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
