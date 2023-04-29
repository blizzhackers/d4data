/**
 * Definition: ta8549fba
 * Hash: a8549fba
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta8549fba : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItem;
  DT_INT64 unk_c5b5acd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
