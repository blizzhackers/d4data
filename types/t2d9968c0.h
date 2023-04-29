/**
 * Definition: t2d9968c0
 * Hash: 2d9968c0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2d9968c0 : public ComplexRead {
  DT_SNO<SnoGroup::MonsterAffix> snoAffix;
  DT_INT unk_828ec72;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
