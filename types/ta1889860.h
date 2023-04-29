/**
 * Definition: ta1889860
 * Hash: a1889860
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta1889860 : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPowerFrom;
  DT_FLOAT unk_857b0b4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
