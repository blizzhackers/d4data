/**
 * Definition: ta1e2d5ab
 * Hash: a1e2d5ab
 */

#pragma once

#include "../types.h"
#include "ta50877b0.h"

#pragma push(pack, 1)

struct ta1e2d5ab : public ComplexRead {
  ta50877b0 unk_7037c81;
  ta50877b0 unk_24d0615;
  DT_INT unk_8a8ab92;
  DT_INT nXPTier;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
