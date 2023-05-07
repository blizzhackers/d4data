/**
 * Definition: ActivityLinks
 * Hash: c5310cce
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActivityLinks : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Activity>> unk_627adad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
