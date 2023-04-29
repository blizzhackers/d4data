/**
 * Definition: t6a351378
 * Hash: 6a351378
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6a351378 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_dd5d06c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
