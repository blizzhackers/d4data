/**
 * Definition: t3940c0fe
 * Hash: 3940c0fe
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3940c0fe : public ComplexRead {
  DT_SNO<SnoGroup::Sound> unk_85f3271;
  DT_SNO<SnoGroup::Sound> unk_4588331;
  DT_SNO<SnoGroup::Sound> unk_632d790;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
