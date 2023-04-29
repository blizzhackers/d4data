/**
 * Definition: t80fa3567
 * Hash: 80fa3567
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t80fa3567 : public ComplexRead {
  DT_INT bWrapSelection;
  DT_INT unk_a27d70b;
  DT_INT unk_f110353;
  DT_INT unk_72a545b;
  DT_INT unk_3f72ed9;
  DT_INT unk_707e4bc;
  DT_CSTRING unk_a321618;
  DT_CSTRING unk_74f3f9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
