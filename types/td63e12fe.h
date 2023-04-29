/**
 * Definition: td63e12fe
 * Hash: d63e12fe
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td63e12fe : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Emote>> unk_19b0f4a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
