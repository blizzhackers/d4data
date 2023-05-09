/**
 * Definition: DynamicAudioState
 * Hash: fe1cc8d8
 */

#pragma once

#include "../types.h"
#include "t1d0f43e.h"

#pragma push(pack, 1)

struct DynamicAudioState : public ComplexRead {
  t1d0f43e unk_6f68ae7;
  DT_RANGE<DT_INT> unk_dc04935;
  DT_FLOAT unk_ce3c7b4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
