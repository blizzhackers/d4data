/**
 * Definition: t2f8b25ef
 * Hash: 2f8b25ef
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2f8b25ef : public ComplexRead {
  DT_INT i1;
  DT_INT i2;
  DT_INT i3;
  DT_INT w1;
  DT_INT w2;
  DT_INT w3;
  DT_WORD unk_59acc17;
  DT_WORD dwGameFlags;
  DT_WORD dwIncludeMask;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
