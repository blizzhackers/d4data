/**
 * Definition: t89efac1a
 * Hash: 89efac1a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t89efac1a : public ComplexRead {
  DT_FLOAT unk_18ee471;
  DT_FLOAT unk_853fbfe;
  DT_FLOAT unk_147fba4;
  DT_INT unk_ab8c232;
  DT_INT pSkuTransaction;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
