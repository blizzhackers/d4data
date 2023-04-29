/**
 * Definition: td9030b8c
 * Hash: d9030b8c
 */

#pragma once

#include "../types.h"
#include "te5e3de90.h"

#pragma push(pack, 1)

struct td9030b8c : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FIXEDARRAY<te5e3de90, 8> unk_5460da3;
  DT_UINT unk_297c737;
  DT_UINT unk_65250c9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
