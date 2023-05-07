/**
 * Definition: MusicTransition
 * Hash: 5e7b6f8c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MusicTransition : public ComplexRead {
  DT_ENUM<DT_INT> unk_cc9e7d;
  DT_FLOAT unk_647bd69;
  DT_SNO<SnoGroup::Sound> unk_d3947d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
