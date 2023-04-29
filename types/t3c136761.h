/**
 * Definition: t3c136761
 * Hash: 3c136761
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct t3c136761 : public ComplexRead {
  DT_ENUM<DT_INT> unk_6ca113c;
  DT_FLOAT unk_268b4a1;
  DT_FLOAT wdOffset;
  PRTransform unk_2c71308;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
