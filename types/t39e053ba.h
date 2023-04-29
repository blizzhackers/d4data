/**
 * Definition: t39e053ba
 * Hash: 39e053ba
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t39e053ba : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_99e9721;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
