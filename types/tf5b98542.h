/**
 * Definition: tf5b98542
 * Hash: f5b98542
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct tf5b98542 : public ComplexRead {
  GBIDHeader tHeader;
  DT_FLOAT flChance;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::StringList>> unk_b28752e;
  DT_INT unk_6c70b7e;
  DT_INT unk_69022;
  DT_INT unk_e04d458;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
