/**
 * Definition: t67c548b3
 * Hash: 67c548b3
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct t67c548b3 : public ComplexRead {
  t72bd65f8 tHeader;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
