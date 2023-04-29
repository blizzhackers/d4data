/**
 * Definition: t8b736c4
 * Hash: 8b736c4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8b736c4 : public ComplexRead {
  DT_RGBACOLOR unk_73cf365;
  DT_RGBACOLOR unk_dce52eb;
  DT_RGBACOLOR unk_d5dcfb8;
  DT_FLOAT unk_d9d4850;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
