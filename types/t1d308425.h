/**
 * Definition: t1d308425
 * Hash: 1d308425
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1d308425 : public ComplexRead {
  DT_FLOAT unk_4d19a78;
  DT_FLOAT unk_fbf1c84;
  DT_FLOAT unk_df0475a;
  DT_FLOAT unk_fafa236;
  DT_FLOAT unk_8d8113a;
  DT_FLOAT unk_d8d6cc9;
  DT_RANGE<DT_INT> unk_503df13;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
