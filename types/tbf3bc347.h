/**
 * Definition: tbf3bc347
 * Hash: bf3bc347
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbf3bc347 : public ComplexRead {
  DT_SNO<SnoGroup::Condition> unk_cf684d7;
  DT_INT unk_2cfa560;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
