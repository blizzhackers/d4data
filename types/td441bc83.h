/**
 * Definition: td441bc83
 * Hash: d441bc83
 */

#pragma once

#include "../types.h"
#include "t30f99fc2.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct td441bc83 : public ComplexRead {
  t72bd65f8 tHeader;
  DT_UINT unk_dce541c;
  t30f99fc2 unk_cca47a3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
