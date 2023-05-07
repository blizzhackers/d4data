/**
 * Definition: t44293b37
 * Hash: 44293b37
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t44293b37 : public ComplexRead {
  DT_ENUM<DT_INT> unk_a64fa3e;
  DT_CSTRING szIDScrollbar;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
