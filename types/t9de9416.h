/**
 * Definition: t9de9416
 * Hash: 9de9416
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9de9416 : public ComplexRead {
  DT_INT unk_12fc68b;
  DT_FLOAT unk_47dc323;
  DT_FLOAT unk_ba07b1a;
  DT_FLOAT unk_ee38470;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
