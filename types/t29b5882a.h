/**
 * Definition: t29b5882a
 * Hash: 29b5882a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t29b5882a : public ComplexRead {
  DT_GBID<0x30> unk_d7b2cd7;
  DT_INT bNegate;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
