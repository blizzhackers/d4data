/**
 * Definition: tb5721766
 * Hash: b5721766
 */

#pragma once

#include "../types.h"
#include "t560ae4cf.h"

#pragma push(pack, 1)

struct tb5721766 : public ComplexRead {
  DT_RGBACOLOR value;
  DT_INT unk_b5a2c78;
  t560ae4cf unk_411da82;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
