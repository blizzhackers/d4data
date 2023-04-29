/**
 * Definition: tff4098b9
 * Hash: ff4098b9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tff4098b9 : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::None>> unk_a82b496;
  DT_INT unk_7fc1b58;
  DT_VARIABLEARRAY<DT_BYTE> unk_cc11a8e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
