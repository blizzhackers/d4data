/**
 * Definition: t11e7e638
 * Hash: 11e7e638
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct t11e7e638 : public ComplexRead {
  DT_UINT szName;
  DT_INT nScore;
  tcbfdd2ea unk_8105d80;
  DT_CSTRING unk_bb98fd8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
