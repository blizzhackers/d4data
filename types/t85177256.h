/**
 * Definition: t85177256
 * Hash: 85177256
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t85177256 : public ComplexRead {
  DT_UINT szTag;
  DT_SNO<SnoGroup::SoundTable> unk_d343726;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
