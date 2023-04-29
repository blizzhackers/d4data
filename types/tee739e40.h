/**
 * Definition: tee739e40
 * Hash: ee739e40
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tee739e40 : public ComplexRead {
  DT_GBID<0x38> unk_b15b511;
  DT_INT unk_cd99c1a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
