/**
 * Definition: tfeacdb4e
 * Hash: feacdb4e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfeacdb4e : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPower;
  DT_INT unk_f276347;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
