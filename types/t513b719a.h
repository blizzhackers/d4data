/**
 * Definition: t513b719a
 * Hash: 513b719a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t513b719a : public ComplexRead {
  DT_GBID<0x1f> unk_5011647;
  DT_INT bNegate;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
