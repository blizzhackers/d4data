/**
 * Definition: taaafec9d
 * Hash: aaafec9d
 */

#pragma once

#include "../types.h"
#include "te852fd63.h"

#pragma push(pack, 1)

struct taaafec9d : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<te852fd63> unk_d192efe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
