/**
 * Definition: t3b00e8b9
 * Hash: 3b00e8b9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3b00e8b9 : public ComplexRead {
  DT_FLOAT unk_b110cbd;
  DT_FLOAT unk_ba86e9e;
  DT_FLOAT unk_f0029cd;
  DT_FLOAT unk_d07468e;
  DT_FLOAT unk_d0f7bfd;
  DT_FLOAT unk_4f8fc91;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
