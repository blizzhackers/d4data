/**
 * Definition: t2900af1b
 * Hash: 2900af1b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2900af1b : public ComplexRead {
  DT_FLOAT unk_8746b6c;
  DT_FLOAT unk_69b0e21;
  DT_FLOAT unk_3d9b929;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
