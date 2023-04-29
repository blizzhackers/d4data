/**
 * Definition: SoundPlayHistory
 * Hash: e2d85811
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SoundPlayHistory : public ComplexRead {
  DT_INT nLastPlayedPerm;
  DT_FLOAT unk_6980cd4;
  DT_FIXEDARRAY<DT_BYTE, 16> arPlayedFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
