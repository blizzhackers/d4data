/**
 * Definition: td97cf85a
 * Hash: d97cf85a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td97cf85a : public ComplexRead {
  DT_FLOAT unk_2d8d82b;
  DT_FLOAT unk_ed2ca10;
  DT_FLOAT unk_7db094f;
  DT_FLOAT unk_3768b99;
  DT_FLOAT unk_df1e3c7;
  DT_FLOAT unk_2db0a84;
  DT_FLOAT unk_2d7bffd;
  DT_FLOAT unk_814dad4;
  DT_FLOAT unk_2dc22ba;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
