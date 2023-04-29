/**
 * Definition: t9a30831a
 * Hash: 9a30831a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9a30831a : public ComplexRead {
  DT_GBID<0x2b> unk_b58b3e7;
  DT_UINT unk_98a4167;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
