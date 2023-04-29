/**
 * Definition: te741cdb2
 * Hash: e741cdb2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te741cdb2 : public ComplexRead {
  DT_INT i1;
  DT_INT i2;
  DT_INT i3;
  DT_WORD unk_59acc17;
  DT_WORD dwGameFlags;
  DT_WORD dwIncludeMask;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
